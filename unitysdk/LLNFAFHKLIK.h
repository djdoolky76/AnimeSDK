#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFILKHGAOB;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define LLNFAFHKLIK_AAAPDIADBDB_OFFSET UNITYSDK_OFFSET(0x12D3B740)
#define LLNFAFHKLIK_CDCHJEKHJIJ_OFFSET UNITYSDK_OFFSET(0x12D3B730)
#define LLNFAFHKLIK_JBMNAEFJHDK_OFFSET UNITYSDK_OFFSET(0x12D3BA50)
#define LLNFAFHKLIK_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x12D3BB90)
#define LLNFAFHKLIK_KJEOMCPAKMD_OFFSET UNITYSDK_OFFSET(0x12D3B890)
#define LLNFAFHKLIK_LPAJONODEGK_OFFSET UNITYSDK_OFFSET(0x12D3BAE0)
#define LLNFAFHKLIK_NKKMECLFAEI_OFFSET UNITYSDK_OFFSET(0x12D3B8E0)
#define LLNFAFHKLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3BA40)

inline static constexpr unsigned int LLNFAFHKLIK_TypeDefinitionIndex = 46077;

class LLNFAFHKLIK : public ::System::Object
{
public:
	::UnityEngine::Transform* EOCAHCIHIPI; // 0x10
	::MoleMole::UIBaseController* KBJPABNJOOM; // 0x18
	::IKFILKHGAOB* FPNGJELMOBN; // 0x20
	::System::Boolean CHOKMCKNBIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFAFHKLIK__CTOR_OFFSET))(this);
	}

	::IKFILKHGAOB* CDCHJEKHJIJ()
	{
		return ((::IKFILKHGAOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_CDCHJEKHJIJ_OFFSET))(this);
	}

	::System::Boolean KJEOMCPAKMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_KJEOMCPAKMD_OFFSET))(this);
	}

	::System::Void JBMNAEFJHDK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_JBMNAEFJHDK_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Boolean NKKMECLFAEI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LLNFAFHKLIK_NKKMECLFAEI_OFFSET))();
	}

	::IKFILKHGAOB* AAAPDIADBDB()
	{
		return ((::IKFILKHGAOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_AAAPDIADBDB_OFFSET))(this);
	}

	::MoleMole::UIOngoingTipsWidgetController* LPAJONODEGK()
	{
		return ((::MoleMole::UIOngoingTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_LPAJONODEGK_OFFSET))(this);
	}

	::System::Void JMDEKPONKMF(::MoleMole::UIBaseController* JNLBPMKIFNK, ::UnityEngine::Transform* DNLGMKBPIBD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LLNFAFHKLIK_JMDEKPONKMF_OFFSET))(this, JNLBPMKIFNK, DNLGMKBPIBD);
	}
};
