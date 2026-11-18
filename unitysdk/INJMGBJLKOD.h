#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INJMGBJLKOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1658B6C0)

inline static constexpr unsigned int INJMGBJLKOD_TypeDefinitionIndex = 48284;

class INJMGBJLKOD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_JBKNIJKCCHE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(INJMGBJLKOD_TypeDefinitionIndex)->GetStaticField(0x514B0);
	}
	// static const ::System::Int32 KNAMPDECLHN = 0x6; // 0x0
	// static const ::System::Int32 LBICOOGHKNM = 0x6ACFC11; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJMGBJLKOD__CCTOR_OFFSET))();
	}
};
