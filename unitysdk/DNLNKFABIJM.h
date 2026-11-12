#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define DNLNKFABIJM_CTOR_OFFSET UNITYSDK_OFFSET(0x12DD0F30)
#define DNLNKFABIJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12DD1550)
#define DNLNKFABIJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12DD1120)

inline static constexpr unsigned int DNLNKFABIJM_TypeDefinitionIndex = 56875;

	class DNLNKFABIJM
	{
	public:
		::Il2CppArray<::KFELGAIGHAP*>* ILPALCPKGHE; // 0x28
		::KFELGAIGHAP* IHPPIJOMNAP; // 0x30
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
