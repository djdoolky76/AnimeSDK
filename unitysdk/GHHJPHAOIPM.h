#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define GHHJPHAOIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A15AE0)
#define GHHJPHAOIPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A15E30)
#define GHHJPHAOIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A15B60)
#define GHHJPHAOIPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A15E70)
#define GHHJPHAOIPM_TICK_OFFSET UNITYSDK_OFFSET(0x15A15F70)

inline static constexpr unsigned int GHHJPHAOIPM_TypeDefinitionIndex = 52772;

	class GHHJPHAOIPM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* OFKGLJOAMLD; // 0x18
		::RPG::Client::Promises::Promise* BCFFALPHNMN; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* KKFFHMEJAPL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*))((::PBYTE)hIl2Cpp + GHHJPHAOIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJPHAOIPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJPHAOIPM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJPHAOIPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHHJPHAOIPM_TICK_OFFSET))(this, a1);
		}

	};
