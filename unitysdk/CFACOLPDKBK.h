#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::GameCore { class PropFastDeliverPuzzleListener; }
namespace RPG::GameCore { class TaskContext; }

#define CFACOLPDKBK_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F9A80)
#define CFACOLPDKBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9FA430)
#define CFACOLPDKBK_LOEMNNGLNJJ_OFFSET UNITYSDK_OFFSET(0xC9FA6D0)
#define CFACOLPDKBK_MIDMEAJBEKN_OFFSET UNITYSDK_OFFSET(0xC9FA970)
#define CFACOLPDKBK_MJMHDCBIHBH_OFFSET UNITYSDK_OFFSET(0xC9FA890)
#define CFACOLPDKBK_OEJLHFLPFEP_OFFSET UNITYSDK_OFFSET(0xC9FA7B0)
#define CFACOLPDKBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9F9C50)
#define CFACOLPDKBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9FA0D0)
#define CFACOLPDKBK_TICK_OFFSET UNITYSDK_OFFSET(0xC9FAA50)

inline static constexpr unsigned int CFACOLPDKBK_TypeDefinitionIndex = 58324;

	class CFACOLPDKBK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropFastDeliverPuzzleListener* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* IFJOGBLAMMP; // 0x20
		::RPG::Client::Prop::FastDeliverPuzzleBoard* MIPPNCGOJNM; // 0x28
		::KFELGAIGHAP* GJCBMPAKDDM; // 0x30
		::KFELGAIGHAP* CMJBFFCEDLP; // 0x38
		::KFELGAIGHAP* HDEJLOJHPKI; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Boolean CKLAIGGKPGP; // 0x50
		::System::Boolean EJCOEELJCND; // 0x51
		::System::Boolean CJLAFBMOPEJ; // 0x52
		::System::Boolean PLIPGMBIFOG; // 0x53
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + CFACOLPDKBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_DISPOSE_OFFSET))(this);
		}

		::System::Void LOEMNNGLNJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_LOEMNNGLNJJ_OFFSET))(this);
		}

		::System::Void OEJLHFLPFEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_OEJLHFLPFEP_OFFSET))(this);
		}

		::System::Void MJMHDCBIHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_MJMHDCBIHBH_OFFSET))(this);
		}

		::System::Void MIDMEAJBEKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFACOLPDKBK_MIDMEAJBEKN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFACOLPDKBK_TICK_OFFSET))(this, a1);
		}

	};
