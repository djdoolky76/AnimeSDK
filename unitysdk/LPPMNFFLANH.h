#pragma once
#include "unitysdk/unitysdk.h"
class DEEGAJPPPBG;
namespace RPG::GameCore { class ST_Side_MuteVision; }
namespace RPG::GameCore { class TaskContext; }

#define LPPMNFFLANH_CTOR_OFFSET UNITYSDK_OFFSET(0xB82FEA0)
#define LPPMNFFLANH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB82FF60)
#define LPPMNFFLANH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB830000)
#define LPPMNFFLANH_PFINFACFMKI_OFFSET UNITYSDK_OFFSET(0xB830050)
#define LPPMNFFLANH_TICK_OFFSET UNITYSDK_OFFSET(0xB830110)

inline static constexpr unsigned int LPPMNFFLANH_TypeDefinitionIndex = 52240;

	class LPPMNFFLANH
	{
	public:
		::DEEGAJPPPBG* HLGFDFNJILI; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Boolean PNPLGMGKDBP; // 0x34
		::System::Boolean JJKCNLBCNHN; // 0x35
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + LPPMNFFLANH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPMNFFLANH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPMNFFLANH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPPMNFFLANH_TICK_OFFSET))(this, a1);
		}

		::System::Void PFINFACFMKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPMNFFLANH_PFINFACFMKI_OFFSET))(this);
		}

	};
