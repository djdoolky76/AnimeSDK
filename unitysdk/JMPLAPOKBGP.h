#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDKDGKIFFB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MDFIHKILAPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define JMPLAPOKBGP_BJHPPAJGEEN_OFFSET UNITYSDK_OFFSET(0xBA9F790)
#define JMPLAPOKBGP_BKKIJJJOGBH_OFFSET UNITYSDK_OFFSET(0xBA9F430)
#define JMPLAPOKBGP_CFPOLHDHFIB_OFFSET UNITYSDK_OFFSET(0xBA9F6C0)
#define JMPLAPOKBGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9F7D0)
#define JMPLAPOKBGP_DNIGBEIIJGI_OFFSET UNITYSDK_OFFSET(0xBA9F740)
#define JMPLAPOKBGP_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0xBA9F4A0)
#define JMPLAPOKBGP_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0xBA9F3C0)
#define JMPLAPOKBGP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBA9F5D0)
#define JMPLAPOKBGP__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA9F510)

inline static constexpr unsigned int JMPLAPOKBGP_TypeDefinitionIndex = 74315;

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
