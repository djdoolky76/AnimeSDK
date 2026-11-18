#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFNLALEHIHE;
class PGJLEPKPOJC;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define EBODMIBIGFH_DEEINBDNPKO_OFFSET UNITYSDK_OFFSET(0x10F1C930)
#define EBODMIBIGFH_FBJGPDKPKHD_OFFSET UNITYSDK_OFFSET(0x10F1CAE0)
#define EBODMIBIGFH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1C920)

inline static constexpr unsigned int EBODMIBIGFH_TypeDefinitionIndex = 76157;

class EBODMIBIGFH : public ::System::Object
{
public:
	::System::String* OKDILDGLAPB; // 0x10
	::System::String* LKHCIIJMOAF; // 0x18

	::System::Void _ctor(::System::String* BGJOPBCCMOC, ::System::String* GCHCJFHHCOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EBODMIBIGFH__CTOR_OFFSET))(this, BGJOPBCCMOC, GCHCJFHHCOC);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* DEEINBDNPKO(::MoleMole::UIWindowController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF, ::GFNLALEHIHE* JFPDJGAMELP)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::GFNLALEHIHE*))((::PBYTE)hIl2Cpp + EBODMIBIGFH_DEEINBDNPKO_OFFSET))(this, JNLBPMKIFNK, IAPKABMDJNF, JFPDJGAMELP);
	}

	::PGJLEPKPOJC* FBJGPDKPKHD(::MoleMole::UIWindowController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::PGJLEPKPOJC*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EBODMIBIGFH_FBJGPDKPKHD_OFFSET))(this, JNLBPMKIFNK, IAPKABMDJNF);
	}
};
