#pragma once
#include "unitysdk/unitysdk.h"
class DLCGLBPNLAE;
namespace RPG::GameCore { class TaskContext; }

#define PLPNKBIIGDL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC3D290)
#define PLPNKBIIGDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC3D2C0)

inline static constexpr unsigned int PLPNKBIIGDL_TypeDefinitionIndex = 53835;

	class PLPNKBIIGDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DLCGLBPNLAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DLCGLBPNLAE*))((::PBYTE)hIl2Cpp + PLPNKBIIGDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNKBIIGDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
