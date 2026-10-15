#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LODEODIPGDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F6F90)
#define LODEODIPGDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F8050)
#define LODEODIPGDP_ECEMLHDKJNL_OFFSET UNITYSDK_OFFSET(0xB7F8B70)
#define LODEODIPGDP_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xB7F8300)
#define LODEODIPGDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F7CE0)
#define LODEODIPGDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F7E80)
#define LODEODIPGDP_TICK_OFFSET UNITYSDK_OFFSET(0xB7F82A0)

	class LODEODIPGDP : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* JHDCJDMNKKL; // 0x18
		::KFELGAIGHAP* OIEJOGELMKI; // 0x20
		::KFELGAIGHAP* LBGFLJPJFHH; // 0x28
		::KFELGAIGHAP* HEFACODLOHE; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* NCDIMILAFML; // 0x40
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* CLAFGBALAOO; // 0x48
		::RPG::GameCore::AddTimelineEntityEventListener* OFKGLJOAMLD; // 0x50
		::KFELGAIGHAP* BBMDICGNOLP; // 0x58
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* JFBNOHHPLAN; // 0x60
		::KFELGAIGHAP* DFDAKLEGFDL; // 0x68
		::KFELGAIGHAP* DNIBLEJCMKJ; // 0x70
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* BIMKCKAPHPH; // 0x78
		::KFELGAIGHAP* BDLDADABBHC; // 0x80
		::System::UInt32 PIBNIOEBKJI; // 0x88
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + LODEODIPGDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEODIPGDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEODIPGDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODEODIPGDP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LODEODIPGDP_TICK_OFFSET))(this, a1);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LODEODIPGDP_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void ECEMLHDKJNL(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + LODEODIPGDP_ECEMLHDKJNL_OFFSET))(this, a1);
		}

	};
