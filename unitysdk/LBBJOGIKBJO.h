#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTrackingMission; }
namespace System { class Object; }

#define LBBJOGIKBJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE81BC0)
#define LBBJOGIKBJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE81BD0)
#define LBBJOGIKBJO_DKDBABLBIJJ_OFFSET UNITYSDK_OFFSET(0xBE820A0)
#define LBBJOGIKBJO_HDHKOALEPJN_OFFSET UNITYSDK_OFFSET(0xBE81E80)
#define LBBJOGIKBJO_HMDPOMHBDBE_OFFSET UNITYSDK_OFFSET(0xBE81C70)
#define LBBJOGIKBJO_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0xBE81F90)
#define LBBJOGIKBJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE81C10)
#define LBBJOGIKBJO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE81F40)
#define LBBJOGIKBJO_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0xBE81DC0)
#define LBBJOGIKBJO_TICK_OFFSET UNITYSDK_OFFSET(0xBE82040)

inline static constexpr unsigned int LBBJOGIKBJO_TypeDefinitionIndex = 54660;

	class LBBJOGIKBJO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitTrackingMission* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean NCDPNHDBKKG; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 CKDDBGABGLH; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTrackingMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTrackingMission*))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 HMDPOMHBDBE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_HMDPOMHBDBE_OFFSET))(this);
		}

		::System::Void HDHKOALEPJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_HDHKOALEPJN_OFFSET))(this);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void DKDBABLBIJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBBJOGIKBJO_DKDBABLBIJJ_OFFSET))(this, a1);
		}

	};
