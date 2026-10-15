#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginRotate; }
namespace UnityEngine { class MonoBehaviour; }

#define FHPIJAAIBPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15794CE0)
#define FHPIJAAIBPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15794520)
#define FHPIJAAIBPH_DLNCMOEFFGJ_OFFSET UNITYSDK_OFFSET(0x157945E0)
#define FHPIJAAIBPH_EENOGCIPJJF_OFFSET UNITYSDK_OFFSET(0x15794AD0)
#define FHPIJAAIBPH_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15794830)
#define FHPIJAAIBPH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15794770)
#define FHPIJAAIBPH_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x15794590)
#define FHPIJAAIBPH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157944B0)
#define FHPIJAAIBPH_LINOKNENDIB_OFFSET UNITYSDK_OFFSET(0x15794880)
#define FHPIJAAIBPH_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x15794730)

inline static constexpr unsigned int FHPIJAAIBPH_TypeDefinitionIndex = 69897;

	class FHPIJAAIBPH : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single NPINECOCALC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void EENOGCIPJJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_EENOGCIPJJF_OFFSET))(this);
		}

		::System::Void DLNCMOEFFGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_DLNCMOEFFGJ_OFFSET))(this);
		}

		::System::Void LINOKNENDIB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_LINOKNENDIB_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginRotate* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginRotate*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPIJAAIBPH_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
