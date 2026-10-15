#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMHPIPOKLE;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class TabView; }
namespace UnityEngine::Events { class UnityAction; }

#define CDPEKDCPHLC_CTOR_OFFSET UNITYSDK_OFFSET(0xC778B70)
#define CDPEKDCPHLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC779060)
#define CDPEKDCPHLC_GJKLDBCBJMF_OFFSET UNITYSDK_OFFSET(0xC778D60)
#define CDPEKDCPHLC_HJJFPMGCKNL_OFFSET UNITYSDK_OFFSET(0xC778CA0)
#define CDPEKDCPHLC_JLCCBBHOGOL_OFFSET UNITYSDK_OFFSET(0xC778F00)
#define CDPEKDCPHLC_OONAPGCBEEK_OFFSET UNITYSDK_OFFSET(0xC778FA0)

	class CDPEKDCPHLC : public ::System::Object
	{
	public:
		::RPG::Client::AnimatorButton* KKIPKDPOIJL; // 0x10
		::UnityEngine::Events::UnityAction* PINMDNOOGIP; // 0x18
		::UnityEngine::Events::UnityAction* CKLPGMNBODG; // 0x20
		::GKMHPIPOKLE* AGKMDEHIECJ; // 0x28
		::RPG::Client::AnimatorButton* KHAKIPGJHPG; // 0x30
		::RPG::Client::TabView* PEOHNLJEFLJ; // 0x38
		::System::Void _ctor(::RPG::Client::TabView* a1, ::RPG::Client::AnimatorButton* a2, ::RPG::Client::AnimatorButton* a3, ::GKMHPIPOKLE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::RPG::Client::AnimatorButton*, ::RPG::Client::AnimatorButton*, ::GKMHPIPOKLE*))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJJFPMGCKNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_HJJFPMGCKNL_OFFSET))(this);
		}

		::System::Void OONAPGCBEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_OONAPGCBEEK_OFFSET))(this);
		}

		::System::Boolean JLCCBBHOGOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_JLCCBBHOGOL_OFFSET))(this);
		}

		::System::Boolean GJKLDBCBJMF(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_GJKLDBCBJMF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPEKDCPHLC_DISPOSE_OFFSET))(this);
		}

	};
