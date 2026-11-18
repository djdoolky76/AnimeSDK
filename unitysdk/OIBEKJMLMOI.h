#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LiveHouseSceneSpotStruct.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIBEKJMLMOI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE2B30)

inline static constexpr unsigned int OIBEKJMLMOI_TypeDefinitionIndex = 49379;

struct alignas(4) OIBEKJMLMOI
{
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_HJEFPLKGPCE()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OIBEKJMLMOI_TypeDefinitionIndex)->GetStaticField(0x4C490);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_JFMNAEMODOK()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OIBEKJMLMOI_TypeDefinitionIndex)->GetStaticField(0x4C498);
	}
	::MoleMole::LiveHouseSceneSpotStruct DDGMAECGDHL; // 0x10
	::System::Int32 CCGKAHCGJKA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIBEKJMLMOI__CCTOR_OFFSET))();
	}
};
