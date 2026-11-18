#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class BANABIIEPHO;
namespace Code::Logic::Data::ScriptObject::Level { class BeatMap; }
namespace Code::Logic::Data::ScriptObject::Level { class Member; }
namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }
namespace Code::Logic::Data::ScriptObject::Level { class Pattern; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }

#define IEMEHABEPBK_BPJALOLALAM_1_OFFSET UNITYSDK_OFFSET(0xF83BCE0)
#define IEMEHABEPBK_BPJALOLALAM_OFFSET UNITYSDK_OFFSET(0xF83B980)
#define IEMEHABEPBK_FGNALKIDAJL_OFFSET UNITYSDK_OFFSET(0xF83C220)
#define IEMEHABEPBK_ICONPHLDHDH_OFFSET UNITYSDK_OFFSET(0xF83BE40)
#define IEMEHABEPBK_JOHPFOJCKBN_1_OFFSET UNITYSDK_OFFSET(0xF83CBC0)
#define IEMEHABEPBK_JOHPFOJCKBN_OFFSET UNITYSDK_OFFSET(0xF83C180)
#define IEMEHABEPBK_LKPJKFPGGNA_OFFSET UNITYSDK_OFFSET(0xF83BAF0)
#define IEMEHABEPBK_PCIBMOKJHNP_OFFSET UNITYSDK_OFFSET(0xF83C0D0)

inline static constexpr unsigned int IEMEHABEPBK_TypeDefinitionIndex = 92694;

class IEMEHABEPBK : public ::System::Object
{
public:
	static ::BANABIIEPHO* BPJALOLALAM(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* ODPEJNDHNNA, ::Code::Logic::Data::ScriptObject::Level::Member* IAPKABMDJNF)
	{
		return ((::BANABIIEPHO*(*)(::Code::Logic::Data::ScriptObject::Level::PatternTimeline*, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + IEMEHABEPBK_BPJALOLALAM_OFFSET))(ODPEJNDHNNA, IAPKABMDJNF);
	}

	static ::BANABIIEPHO* BPJALOLALAM_1(::Code::Logic::Data::ScriptObject::Level::Member* ODPEJNDHNNA)
	{
		return ((::BANABIIEPHO*(*)(::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + IEMEHABEPBK_BPJALOLALAM_1_OFFSET))(ODPEJNDHNNA);
	}

	static ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ICONPHLDHDH(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* DJLOKMMLFJC)
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*))((::PBYTE)hIl2Cpp + IEMEHABEPBK_ICONPHLDHDH_OFFSET))(DJLOKMMLFJC);
	}

	static ::System::Int32 PCIBMOKJHNP(::Il2CppArray<::System::Int32>* OADHJCKIGAP, ::System::Int32 HODAIDNDKHD)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + IEMEHABEPBK_PCIBMOKJHNP_OFFSET))(OADHJCKIGAP, HODAIDNDKHD);
	}

	static ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* LKPJKFPGGNA(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* GMHJGPODKLM, ::System::Int32 PKPJCHOKEFF, ::System::Int32 IEPPOCDAMDC)
	{
		return ((::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IEMEHABEPBK_LKPJKFPGGNA_OFFSET))(GMHJGPODKLM, PKPJCHOKEFF, IEPPOCDAMDC);
	}

	static ::System::Void JOHPFOJCKBN(::Code::Logic::Data::ScriptObject::Level::Pattern* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::Pattern*))((::PBYTE)hIl2Cpp + IEMEHABEPBK_JOHPFOJCKBN_OFFSET))(ODPEJNDHNNA);
	}

	static ::Il2CppArray<::System::Int32>* FGNALKIDAJL(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>* DOCCNEDNHNB, ::Il2CppArray<::System::Int32>*& NFJLLLFLGPF)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::PatternTimeline*>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + IEMEHABEPBK_FGNALKIDAJL_OFFSET))(DOCCNEDNHNB, NFJLLLFLGPF);
	}

	static ::System::Void JOHPFOJCKBN_1(::Code::Logic::Data::ScriptObject::Level::BeatMap* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::Code::Logic::Data::ScriptObject::Level::BeatMap*))((::PBYTE)hIl2Cpp + IEMEHABEPBK_JOHPFOJCKBN_1_OFFSET))(ODPEJNDHNNA);
	}
};
