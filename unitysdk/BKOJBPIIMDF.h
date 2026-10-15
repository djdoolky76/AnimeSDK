#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class HeartDialTraceConsumeRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceHeartDialNPC; }
namespace System { class Object; }

#define BKOJBPIIMDF_BBPMLKCBLKB_OFFSET UNITYSDK_OFFSET(0xBA5FC70)
#define BKOJBPIIMDF_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0xBA60360)
#define BKOJBPIIMDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5F210)
#define BKOJBPIIMDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA5F370)
#define BKOJBPIIMDF_GGEPLHACEKJ_OFFSET UNITYSDK_OFFSET(0xBA5FBC0)
#define BKOJBPIIMDF_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0xBA60070)
#define BKOJBPIIMDF_LGILBEANEML_OFFSET UNITYSDK_OFFSET(0xBA600C0)
#define BKOJBPIIMDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA5F660)
#define BKOJBPIIMDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA5FEA0)
#define BKOJBPIIMDF_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0xBA602B0)
#define BKOJBPIIMDF_TICK_OFFSET UNITYSDK_OFFSET(0xBA5FF30)

inline static constexpr unsigned int BKOJBPIIMDF_TypeDefinitionIndex = 53412;

	class BKOJBPIIMDF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::HeartDialTraceConsumeRow* LANNOKBOPJO; // 0x18
		::KFELGAIGHAP* JAPONKDHKLJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* KPHGLEKEALH; // 0x30
		::KFELGAIGHAP* JOABCNLPPGI; // 0x38
		::RPG::Client::MapNpcDef* MBBMEOAMAAI; // 0x40
		::RPG::GameCore::TraceHeartDialNPC* OFKGLJOAMLD; // 0x48
		::KFELGAIGHAP* JLMINPAEHAN; // 0x50
		::System::UInt32 BOKIMKHHGOI; // 0x58
		::System::UInt32 ALKIFAJPBFN; // 0x5C
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceHeartDialNPC*))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_TICK_OFFSET))(this, a1);
		}

		::System::Void BBPMLKCBLKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_BBPMLKCBLKB_OFFSET))(this);
		}

		::System::Void LGILBEANEML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_LGILBEANEML_OFFSET))(this, a1);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void GGEPLHACEKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_GGEPLHACEKJ_OFFSET))(this);
		}

		::System::Void LEPONDILPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_LEPONDILPNO_OFFSET))(this);
		}

		::System::Void PDDHJJBHHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOJBPIIMDF_PDDHJJBHHHK_OFFSET))(this);
		}

	};
