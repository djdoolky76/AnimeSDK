#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CHFBCPFFEGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC961D0)
#define CHFBCPFFEGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC96210)
#define CHFBCPFFEGB___C___REFRESHVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0xCC96220)

	class CHFBCPFFEGB___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__19_1()
		{
			return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26A40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHFBCPFFEGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFBCPFFEGB___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshView_b__19_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CHFBCPFFEGB___C___REFRESHVIEW_B__19_1_OFFSET))(this, a1, a2);
		}

	};
