#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKCBNIMIJED.h"
#include "unitysdk/System/Object.h"

class GNICKMCEBJL;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAHHDOKKAFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD92040)

inline static constexpr unsigned int AAHHDOKKAFA_TypeDefinitionIndex = 28939;

class AAHHDOKKAFA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::LKCBNIMIJED, ::System::Func_1<::GNICKMCEBJL*>*>** StaticGet_IBFFPPBIJHN()
	{
		return (::System::Collections::Generic::Dictionary_2<::LKCBNIMIJED, ::System::Func_1<::GNICKMCEBJL*>*>**)Il2CppClass::FromTypeDefinitionIndex(AAHHDOKKAFA_TypeDefinitionIndex)->GetStaticField(0x25BC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAHHDOKKAFA__CCTOR_OFFSET))();
	}
};
