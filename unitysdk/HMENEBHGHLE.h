#pragma once
#include "unitysdk/unitysdk.h"
class BGFNKJFGHML;
class BHJLLBNDCLL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HMENEBHGHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7B440)
#define HMENEBHGHLE_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0x15D7B8F0)
#define HMENEBHGHLE_FNENNEPBKBD_OFFSET UNITYSDK_OFFSET(0x15D7BAA0)
#define HMENEBHGHLE_LCKCGFBGBMN_OFFSET UNITYSDK_OFFSET(0x15D7B860)
#define HMENEBHGHLE_NCODOJBNMLO_OFFSET UNITYSDK_OFFSET(0x15D7B6B0)
#define HMENEBHGHLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D7B470)

	class HMENEBHGHLE
	{
	public:
		::BGFNKJFGHML* DHIMCKEAEAP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BHJLLBNDCLL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BHJLLBNDCLL*))((::PBYTE)hIl2Cpp + HMENEBHGHLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENEBHGHLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NCODOJBNMLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENEBHGHLE_NCODOJBNMLO_OFFSET))(this);
		}

		::System::Void EIBCDACOEMC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMENEBHGHLE_EIBCDACOEMC_OFFSET))(this, a1);
		}

		::System::Void LCKCGFBGBMN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMENEBHGHLE_LCKCGFBGBMN_OFFSET))(this, a1);
		}

		::System::String* FNENNEPBKBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENEBHGHLE_FNENNEPBKBD_OFFSET))(this);
		}

	};
