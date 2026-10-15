#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByLocalPlayerIsHero; }
namespace RPG::GameCore { class TaskContext; }

#define FBMBGIKLJDP_CTOR_OFFSET UNITYSDK_OFFSET(0x156A6A30)
#define FBMBGIKLJDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156A6A60)
#define FBMBGIKLJDP_JCAONNBHCKC_OFFSET UNITYSDK_OFFSET(0x156A6AF0)
#define FBMBGIKLJDP_KCFEGMLBIEG_OFFSET UNITYSDK_OFFSET(0x156A6CF0)

	class FBMBGIKLJDP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + FBMBGIKLJDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBGIKLJDP_EVALUATE_OFFSET))(this);
		}

		::System::UInt32 JCAONNBHCKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMBGIKLJDP_JCAONNBHCKC_OFFSET))(this);
		}

		::System::Boolean KCFEGMLBIEG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBMBGIKLJDP_KCFEGMLBIEG_OFFSET))(this, a1);
		}

	};
