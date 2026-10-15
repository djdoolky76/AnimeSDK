#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FOFGJKGKAAF_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x158E8A30)
#define FOFGJKGKAAF_CTOR_OFFSET UNITYSDK_OFFSET(0x158E8040)
#define FOFGJKGKAAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158E8130)
#define FOFGJKGKAAF_IMFPDCKGMGD_OFFSET UNITYSDK_OFFSET(0x158E8C60)
#define FOFGJKGKAAF_LEBCFBEHNDK_OFFSET UNITYSDK_OFFSET(0x158E8520)
#define FOFGJKGKAAF_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0x158E89E0)
#define FOFGJKGKAAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E8380)
#define FOFGJKGKAAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158E87C0)
#define FOFGJKGKAAF_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0x158E8F20)
#define FOFGJKGKAAF_TICK_OFFSET UNITYSDK_OFFSET(0x158E88A0)

inline static constexpr unsigned int FOFGJKGKAAF_TypeDefinitionIndex = 52702;

	class FOFGJKGKAAF : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KPHGLEKEALH; // 0x18
		::KFELGAIGHAP* JOABCNLPPGI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* CLDJDHCJFFD; // 0x30
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x38
		::RPG::GameCore::ConsumeOrigamiItem* OFKGLJOAMLD; // 0x40
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
