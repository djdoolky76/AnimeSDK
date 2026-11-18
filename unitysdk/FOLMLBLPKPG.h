#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPFFFNOEADI;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOLMLBLPKPG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x179C2770)
#define FOLMLBLPKPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C26D0)

inline static constexpr unsigned int FOLMLBLPKPG_TypeDefinitionIndex = 42500;

class FOLMLBLPKPG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::NPFFFNOEADI*>** StaticGet_GPAJCDMAFGH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::NPFFFNOEADI*>**)Il2CppClass::FromTypeDefinitionIndex(FOLMLBLPKPG_TypeDefinitionIndex)->GetStaticField(0x3DCE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOLMLBLPKPG__CCTOR_OFFSET))();
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOLMLBLPKPG_PHOADBJGFBE_OFFSET))();
	}
};
