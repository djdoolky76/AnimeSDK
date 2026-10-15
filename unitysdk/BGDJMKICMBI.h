#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByLocalPlayerAvatarID; }
namespace RPG::GameCore { class TaskContext; }

#define BGDJMKICMBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB17A5D0)
#define BGDJMKICMBI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB17A600)
#define BGDJMKICMBI_JCAONNBHCKC_OFFSET UNITYSDK_OFFSET(0xB17A6F0)
#define BGDJMKICMBI_PBDECJACNDE_OFFSET UNITYSDK_OFFSET(0xB17A8F0)

	class BGDJMKICMBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + BGDJMKICMBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDJMKICMBI_EVALUATE_OFFSET))(this);
		}

		::System::UInt32 JCAONNBHCKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDJMKICMBI_JCAONNBHCKC_OFFSET))(this);
		}

		::System::Boolean PBDECJACNDE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGDJMKICMBI_PBDECJACNDE_OFFSET))(this, a1);
		}

	};
