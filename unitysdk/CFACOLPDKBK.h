#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::GameCore { class PropFastDeliverPuzzleListener; }
namespace RPG::GameCore { class TaskContext; }

#define CFACOLPDKBK_CTOR_OFFSET UNITYSDK_OFFSET(0x18836450)
#define CFACOLPDKBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18836E00)
#define CFACOLPDKBK_LOEMNNGLNJJ_OFFSET UNITYSDK_OFFSET(0x188370A0)
#define CFACOLPDKBK_MIDMEAJBEKN_OFFSET UNITYSDK_OFFSET(0x18837340)
#define CFACOLPDKBK_MJMHDCBIHBH_OFFSET UNITYSDK_OFFSET(0x18837260)
#define CFACOLPDKBK_OEJLHFLPFEP_OFFSET UNITYSDK_OFFSET(0x18837180)
#define CFACOLPDKBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18836620)
#define CFACOLPDKBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18836AA0)
#define CFACOLPDKBK_TICK_OFFSET UNITYSDK_OFFSET(0x18837420)

inline static constexpr unsigned int CFACOLPDKBK_TypeDefinitionIndex = 59580;

	class CFACOLPDKBK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* GJCBMPAKDDM; // 0x20
		::RPG::Client::Prop::FastDeliverPuzzleBoard* MIPPNCGOJNM; // 0x28
		::KFELGAIGHAP* CMJBFFCEDLP; // 0x30
		::RPG::GameCore::PropFastDeliverPuzzleListener* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* IFJOGBLAMMP; // 0x40
		::KFELGAIGHAP* HDEJLOJHPKI; // 0x48
		::System::Boolean PLIPGMBIFOG; // 0x50
		::System::Boolean CKLAIGGKPGP; // 0x51
		::System::Boolean EJCOEELJCND; // 0x52
		::System::Boolean CJLAFBMOPEJ; // 0x53
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
