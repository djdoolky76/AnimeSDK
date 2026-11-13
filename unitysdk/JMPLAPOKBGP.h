#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDKDGKIFFB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MDFIHKILAPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define JMPLAPOKBGP_BJHPPAJGEEN_OFFSET UNITYSDK_OFFSET(0x1A0BCBD0)
#define JMPLAPOKBGP_BKKIJJJOGBH_OFFSET UNITYSDK_OFFSET(0x1A0BC870)
#define JMPLAPOKBGP_CFPOLHDHFIB_OFFSET UNITYSDK_OFFSET(0x1A0BCB00)
#define JMPLAPOKBGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BCC10)
#define JMPLAPOKBGP_DNIGBEIIJGI_OFFSET UNITYSDK_OFFSET(0x1A0BCB80)
#define JMPLAPOKBGP_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x1A0BC8E0)
#define JMPLAPOKBGP_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x1A0BC800)
#define JMPLAPOKBGP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A0BCA10)
#define JMPLAPOKBGP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A0BC950)

inline static constexpr unsigned int JMPLAPOKBGP_TypeDefinitionIndex = 74314;

	class JMPLAPOKBGP : public ::MBDKDGKIFFB
	{
	public:
		::UnityEngine::UI::Text* IOOAIAINKIL; // 0x80
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_CTOR_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* BKKIJJJOGBH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_BKKIJJJOGBH_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::MDFIHKILAPL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void DNIGBEIIJGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_DNIGBEIIJGI_OFFSET))(this);
		}

		::System::Boolean BJHPPAJGEEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_BJHPPAJGEEN_OFFSET))(this);
		}

		::System::Void CFPOLHDHFIB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMPLAPOKBGP_CFPOLHDHFIB_OFFSET))(this, a1);
		}

	};
