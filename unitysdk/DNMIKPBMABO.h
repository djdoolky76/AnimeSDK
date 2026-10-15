#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define DNMIKPBMABO_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FD39E0)
#define DNMIKPBMABO_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD3AD0)
#define DNMIKPBMABO_GEJNOLBPEBO_OFFSET UNITYSDK_OFFSET(0x11FD3EF0)
#define DNMIKPBMABO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD3B00)

inline static constexpr unsigned int DNMIKPBMABO_TypeDefinitionIndex = 55336;

	class DNMIKPBMABO
	{
	public:
		static ::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet_ONFNEAPDKDG()
		{
			return (::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "DNMIKPBMABO")->GetStaticField(0x6F4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNMIKPBMABO_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + DNMIKPBMABO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMIKPBMABO_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint GEJNOLBPEBO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DNMIKPBMABO_GEJNOLBPEBO_OFFSET))(a1, a2, a3);
		}

	};
