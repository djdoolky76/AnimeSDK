#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LGBHONLHNPN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimEvent; }

#define NCACKEHBEHD_CJICKPDEMNE_OFFSET UNITYSDK_OFFSET(0xBAF02D0)
#define NCACKEHBEHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF0000)
#define NCACKEHBEHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAF0050)
#define NCACKEHBEHD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBAF0A50)
#define NCACKEHBEHD_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBAF0A60)
#define NCACKEHBEHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAF00A0)
#define NCACKEHBEHD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAF0980)
#define NCACKEHBEHD_TICK_OFFSET UNITYSDK_OFFSET(0xBAF09E0)

inline static constexpr unsigned int NCACKEHBEHD_TypeDefinitionIndex = 55806;

	class NCACKEHBEHD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitAnimEvent* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::LGBHONLHNPN* LAEGBOHFOCM; // 0x30
		::System::Single PKKNPBGKPAJ; // 0x38
		::System::Int32 JFMEEDGDMKP; // 0x3C
		::System::Int32 BCICECIINBD; // 0x40
		::System::Int32 OHOGFBCFFFN; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + NCACKEHBEHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCACKEHBEHD_TICK_OFFSET))(this, a1);
		}

		::System::Boolean CJICKPDEMNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_CJICKPDEMNE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCACKEHBEHD_ONSKIP_OFFSET))(this);
		}

	};
