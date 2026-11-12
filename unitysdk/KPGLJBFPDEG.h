#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageType.h"
class KPGLJBFPDEG;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define KPGLJBFPDEG_BILDNHAOGBA_OFFSET UNITYSDK_OFFSET(0xBE108E0)
#define KPGLJBFPDEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE10E40)
#define KPGLJBFPDEG_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0xBE10D90)
#define KPGLJBFPDEG_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0xBE10DD0)
#define KPGLJBFPDEG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBE10BC0)
#define KPGLJBFPDEG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE10A10)
#define KPGLJBFPDEG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBE10AD0)

inline static constexpr unsigned int KPGLJBFPDEG_TypeDefinitionIndex = 74073;

	class KPGLJBFPDEG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x68
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x70
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x78
		::RPG::GameCore::StageType LFJEGJMCEBD; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG_CTOR_OFFSET))(this);
		}

		::System::Boolean BILDNHAOGBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG_BILDNHAOGBA_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG__INITVARONCE_OFFSET))(this);
		}

		static ::System::Boolean NFPHAJMIOIE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPGLJBFPDEG_NFPHAJMIOIE_OFFSET))();
		}

		static ::System::Void PGIJAGHKJLN(::KPGLJBFPDEG* a1)
		{
			return ((::System::Void(*)(::KPGLJBFPDEG*))((::PBYTE)hIl2Cpp + KPGLJBFPDEG_PGIJAGHKJLN_OFFSET))(a1);
		}

	};
