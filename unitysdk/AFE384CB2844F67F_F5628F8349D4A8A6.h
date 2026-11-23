#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFE384CB2844F67F;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace UnityEngine { class GameObject; }

#define AFE384CB2844F67F_F5628F8349D4A8A6_BEF5AD436336AD51_OFFSET UNITYSDK_OFFSET(0x1FADBF0)
#define AFE384CB2844F67F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FADDD0)
#define AFE384CB2844F67F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AFE384CB2844F67F_F5628F8349D4A8A6_TypeDefinitionIndex = 7946;

class AFE384CB2844F67F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::AFE384CB2844F67F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::AFE384CB2844F67F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AFE384CB2844F67F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_4<::AFE384CB2844F67F*, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt64>** StaticGet_AF311A9CD59B0BEF()
	{
		return (::System::Action_4<::AFE384CB2844F67F*, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(AFE384CB2844F67F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFE384CB2844F67F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFE384CB2844F67F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void BEF5AD436336AD51(::AFE384CB2844F67F* BD8273AB04C4B760, ::UnityEngine::GameObject* BC63F4052E4478D7, ::System::Int32 B11482D7A4C7C4C8, ::System::UInt64 A2945EFB5D99316D)
	{
		return ((::System::Void(*)(::PVOID, ::AFE384CB2844F67F*, ::UnityEngine::GameObject*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + AFE384CB2844F67F_F5628F8349D4A8A6_BEF5AD436336AD51_OFFSET))(this, BD8273AB04C4B760, BC63F4052E4478D7, B11482D7A4C7C4C8, A2945EFB5D99316D);
	}
};
