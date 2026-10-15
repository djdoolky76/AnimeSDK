#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CFIONMKPNNK_OFFSET UNITYSDK_OFFSET(0xD7A9D20)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CMIEOOODDIA_OFFSET UNITYSDK_OFFSET(0xD7A90D0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD7AA050)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0xD7A93F0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_JPALDPGPKHP_OFFSET UNITYSDK_OFFSET(0xD7A8F40)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_LLAACEGLBAA_OFFSET UNITYSDK_OFFSET(0xD7A8E80)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_MBIHMHCOFEH_OFFSET UNITYSDK_OFFSET(0xD7A9290)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_NCMJANIPKIB_OFFSET UNITYSDK_OFFSET(0xD7A9EE0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD7A95F0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7A94B0)
#define RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7A96C0)

namespace RPG::Client
{
	class MonoEffectGramophoneEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single rhythmScale; // 0x18
		::System::Single roundTime; // 0x1C
		::System::Single turnOffTime; // 0x20
		::System::Single BeatsPerRound; // 0x24
		::System::Single RhythmPhase; // 0x28
		::System::Boolean turnOnEffect; // 0x2C
		::System::Boolean turnOffEffect; // 0x2D
		::System::Boolean AGIGJNPNABJ; // 0x2E
		::System::Byte _padding0[0x1];
		::Il2CppArray<::UnityEngine::Renderer*>* Renderer; // 0x30
		::UnityEngine::Renderer* LineRenderer; // 0x38
		::UnityEngine::Renderer* DotObject; // 0x40
		::UnityEngine::GameObject* DotController; // 0x48
		::UnityEngine::GameObject* DotRenderer; // 0x50
		::UnityEngine::GameObject* CenterEffect; // 0x58
		::UnityEngine::Vector3 DotScale; // 0x60
		::UnityEngine::Color DotColor1; // 0x6C
		::UnityEngine::Color DotColor2; // 0x7C
		::UnityEngine::Vector3 CCDMEIECEJB; // 0x8C
		::System::Single KGHOGPHCPFP; // 0x98
		::System::Single JJFMHMPFOKM; // 0x9C
		::System::Single EGAAMECAFLO; // 0xA0
		::System::Single FIJLEDEKBJP; // 0xA4
		::System::Single JPMHHNFDICD; // 0xA8
		::System::Single JCDMBONDDNM; // 0xAC
		::System::Single EBLKBOLCHHL; // 0xB0
		::System::Single JHEFPBPANBP; // 0xB4
		::System::Single KBKLAKLBHDJ; // 0xB8
		::System::Int32 LFMLFBDEPDJ; // 0xBC
		::UnityEngine::MaterialPropertyBlock* KHFINMBNGBE; // 0xC0
		::UnityEngine::MaterialPropertyBlock* INIOGBPCKEB; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void LLAACEGLBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_LLAACEGLBAA_OFFSET))(this);
		}

		::System::Void JPALDPGPKHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_JPALDPGPKHP_OFFSET))(this);
		}

		::System::Void CMIEOOODDIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CMIEOOODDIA_OFFSET))(this);
		}

		::System::Void EMMGHDLIPOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_EMMGHDLIPOH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void CFIONMKPNNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_CFIONMKPNNK_OFFSET))(this);
		}

		::System::Void NCMJANIPKIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_NCMJANIPKIB_OFFSET))(this, a1);
		}

		::System::Void MBIHMHCOFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTGRAMOPHONEEFFECTCONTROL_MBIHMHCOFEH_OFFSET))(this);
		}

	};
}
