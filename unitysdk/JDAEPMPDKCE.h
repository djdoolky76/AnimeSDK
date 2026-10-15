#pragma once
#include "unitysdk/unitysdk.h"
class FJNBODHINDM;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define JDAEPMPDKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x165BE190)
#define JDAEPMPDKCE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x165BD780)
#define JDAEPMPDKCE_IFLNCADIINJ_OFFSET UNITYSDK_OFFSET(0x165BDDF0)
#define JDAEPMPDKCE_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x165BDD10)
#define JDAEPMPDKCE_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x165BDD60)
#define JDAEPMPDKCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x165BD680)
#define JDAEPMPDKCE_ONSTOP_OFFSET UNITYSDK_OFFSET(0x165BD700)

inline static constexpr unsigned int JDAEPMPDKCE_TypeDefinitionIndex = 54186;

	class JDAEPMPDKCE
	{
	public:
		::FJNBODHINDM* CPIIOIPAAKK; // 0x50
		::System::Int32 ALEDPAHMLKC; // 0x58
		static ::Il2CppArray<::System::Int32>** StaticGet_PBONHNPJPNL()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "JDAEPMPDKCE")->GetStaticField(0x70160);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_ONSTOP_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void OnRefreshPos(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_ONREFRESHPOS_OFFSET))(this, a1);
		}

		static ::System::Void IFLNCADIINJ(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDAEPMPDKCE_IFLNCADIINJ_OFFSET))(a1, a2, a3);
		}

	};
