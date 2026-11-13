#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMHPIPOKLE;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class TabView; }
namespace UnityEngine::Events { class UnityAction; }

#define MMDOGHFIDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B930990)
#define MMDOGHFIDHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B930E80)
#define MMDOGHFIDHA_GJKLDBCBJMF_OFFSET UNITYSDK_OFFSET(0x1B930B80)
#define MMDOGHFIDHA_HJJFPMGCKNL_OFFSET UNITYSDK_OFFSET(0x1B930AC0)
#define MMDOGHFIDHA_JLCCBBHOGOL_OFFSET UNITYSDK_OFFSET(0x1B930D20)
#define MMDOGHFIDHA_OONAPGCBEEK_OFFSET UNITYSDK_OFFSET(0x1B930DC0)

inline static constexpr unsigned int MMDOGHFIDHA_TypeDefinitionIndex = 50862;

	class MMDOGHFIDHA : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* PINMDNOOGIP; // 0x10
		::RPG::Client::AnimatorButton* KKIPKDPOIJL; // 0x18
		::UnityEngine::Events::UnityAction* CKLPGMNBODG; // 0x20
		::GKMHPIPOKLE* AGKMDEHIECJ; // 0x28
		::RPG::Client::AnimatorButton* KHAKIPGJHPG; // 0x30
		::RPG::Client::TabView* PEOHNLJEFLJ; // 0x38
		::System::Void _ctor(::RPG::Client::TabView* a1, ::RPG::Client::AnimatorButton* a2, ::RPG::Client::AnimatorButton* a3, ::GKMHPIPOKLE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*, ::RPG::Client::AnimatorButton*, ::RPG::Client::AnimatorButton*, ::GKMHPIPOKLE*))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJJFPMGCKNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_HJJFPMGCKNL_OFFSET))(this);
		}

		::System::Void OONAPGCBEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_OONAPGCBEEK_OFFSET))(this);
		}

		::System::Boolean JLCCBBHOGOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_JLCCBBHOGOL_OFFSET))(this);
		}

		::System::Boolean GJKLDBCBJMF(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_GJKLDBCBJMF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDOGHFIDHA_DISPOSE_OFFSET))(this);
		}

	};
