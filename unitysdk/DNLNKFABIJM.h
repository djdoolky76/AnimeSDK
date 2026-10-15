#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define DNLNKFABIJM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD7A70)
#define DNLNKFABIJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FD80D0)
#define DNLNKFABIJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD7C60)

	class DNLNKFABIJM
	{
	public:
		::KFELGAIGHAP* IHPPIJOMNAP; // 0x28
		::Il2CppArray<::KFELGAIGHAP*>* ILPALCPKGHE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + DNLNKFABIJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLNKFABIJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLNKFABIJM_DISPOSE_OFFSET))(this);
		}

	};
