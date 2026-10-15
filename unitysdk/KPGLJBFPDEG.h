#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageType.h"
class KPGLJBFPDEG;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define KPGLJBFPDEG_BILDNHAOGBA_OFFSET UNITYSDK_OFFSET(0xB5B6110)
#define KPGLJBFPDEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B6610)
#define KPGLJBFPDEG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB5B62B0)
#define KPGLJBFPDEG_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0xB5B6560)
#define KPGLJBFPDEG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB5B63A0)
#define KPGLJBFPDEG_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0xB5B65A0)
#define KPGLJBFPDEG__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5B6240)

inline static constexpr unsigned int KPGLJBFPDEG_TypeDefinitionIndex = 72041;

	class KPGLJBFPDEG : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x60
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x68
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG_NIJJPBOIGBI_OFFSET))(this);
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
