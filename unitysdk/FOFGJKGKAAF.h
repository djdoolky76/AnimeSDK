#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FOFGJKGKAAF_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x158DDA00)
#define FOFGJKGKAAF_CTOR_OFFSET UNITYSDK_OFFSET(0x158DD010)
#define FOFGJKGKAAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158DD100)
#define FOFGJKGKAAF_IMFPDCKGMGD_OFFSET UNITYSDK_OFFSET(0x158DDC30)
#define FOFGJKGKAAF_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0x158DD4F0)
#define FOFGJKGKAAF_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0x158DD9B0)
#define FOFGJKGKAAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158DD350)
#define FOFGJKGKAAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158DD790)
#define FOFGJKGKAAF_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0x158DDEF0)
#define FOFGJKGKAAF_TICK_OFFSET UNITYSDK_OFFSET(0x158DD870)

inline static constexpr unsigned int FOFGJKGKAAF_TypeDefinitionIndex = 52702;

	class FOFGJKGKAAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* JOABCNLPPGI; // 0x20
		::RPG::GameCore::ConsumeOrigamiItem* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* KPHGLEKEALH; // 0x30
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* CLDJDHCJFFD; // 0x38
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x40
		::System::UInt32 KGGMOFBNALD; // 0x48
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_TICK_OFFSET))(this, a1);
		}

		::System::Void LEBCFBEHNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_LEBCFBEHNDK_OFFSET))(this);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void IMFPDCKGMGD(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_IMFPDCKGMGD_OFFSET))(this, a1, a2);
		}

		::System::Void PDDHJJBHHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_PDDHJJBHHHK_OFFSET))(this);
		}

		::System::Void LEPONDILPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGJKGKAAF_LEPONDILPNO_OFFSET))(this);
		}

	};
