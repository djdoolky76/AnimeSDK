#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define JFOJBNDEJFB_BLKAAEJPNBE_OFFSET UNITYSDK_OFFSET(0x1665B550)
#define JFOJBNDEJFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1665B5C0)
#define JFOJBNDEJFB_DPGGDECJENG_OFFSET UNITYSDK_OFFSET(0x1665B4A0)
#define JFOJBNDEJFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1665B3D0)

	class JFOJBNDEJFB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DCEBIFLMAAF; // 0x60
		::RPG::Client::SimpleTextStyleController* AJAKCFLMCFO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOJBNDEJFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOJBNDEJFB__ONBIND_OFFSET))(this);
		}

		::System::Void DPGGDECJENG(::RPG::GameCore::FixPoint a1, ::RPG::Client::UIFloatingTextType a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + JFOJBNDEJFB_DPGGDECJENG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BLKAAEJPNBE(::RPG::GameCore::FixPoint a1, ::System::Boolean a2, ::DamageTextStyle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + JFOJBNDEJFB_BLKAAEJPNBE_OFFSET))(this, a1, a2, a3);
		}

	};
