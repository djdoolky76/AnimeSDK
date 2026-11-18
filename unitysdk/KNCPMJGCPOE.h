#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IADDHANFKPG.h"

namespace MoleMole::Config { class ConfigDynamicAccessoryBoneData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define KNCPMJGCPOE_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x19967370)
#define KNCPMJGCPOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19966810)
#define KNCPMJGCPOE_HBBOFNCCNCG_OFFSET UNITYSDK_OFFSET(0x19965ED0)
#define KNCPMJGCPOE_HHPIKOGLEOH_OFFSET UNITYSDK_OFFSET(0x19966540)
#define KNCPMJGCPOE_JJECJDHIMAC_OFFSET UNITYSDK_OFFSET(0x19966040)
#define KNCPMJGCPOE_OCEHMFHIFKL_OFFSET UNITYSDK_OFFSET(0x19965AE0)
#define KNCPMJGCPOE_PJLGIJECFDP_OFFSET UNITYSDK_OFFSET(0x19966DF0)
#define KNCPMJGCPOE__CTOR_OFFSET UNITYSDK_OFFSET(0x19966DE0)

inline static constexpr unsigned int KNCPMJGCPOE_TypeDefinitionIndex = 62187;

class KNCPMJGCPOE : public ::IADDHANFKPG
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* LGOBAOEKNLM; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IMAKMBNKBBE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE__CTOR_OFFSET))(this);
	}

	::System::Void OCEHMFHIFKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_OCEHMFHIFKL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_DISPOSE_OFFSET))(this);
	}

	::System::Void PJLGIJECFDP(::UnityEngine::SkinnedMeshRenderer* HHINIPHEGGK, ::MoleMole::Config::ConfigDynamicAccessoryBoneData* KJJDBJOINNN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::MoleMole::Config::ConfigDynamicAccessoryBoneData*))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_PJLGIJECFDP_OFFSET))(this, HHINIPHEGGK, KJJDBJOINNN);
	}

	::System::Void HBBOFNCCNCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_HBBOFNCCNCG_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void JJECJDHIMAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_JJECJDHIMAC_OFFSET))(this);
	}

	::System::Void HHPIKOGLEOH(::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNCPMJGCPOE_HHPIKOGLEOH_OFFSET))(this, MBJDMKCGOCK);
	}
};
