#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimPlayerEnterOrExit; }
namespace System { class Object; }

#define EKJKEPLDLDH_CTOR_OFFSET UNITYSDK_OFFSET(0x154FEA20)
#define EKJKEPLDLDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154FEC10)
#define EKJKEPLDLDH_JKHADKKPKGB_OFFSET UNITYSDK_OFFSET(0x154FFDF0)
#define EKJKEPLDLDH_LJPBILLHMIJ_OFFSET UNITYSDK_OFFSET(0x154FFC20)
#define EKJKEPLDLDH_LPAPLFKFDEN_OFFSET UNITYSDK_OFFSET(0x154FF910)
#define EKJKEPLDLDH_MCOMPLFILIB_OFFSET UNITYSDK_OFFSET(0x15500020)
#define EKJKEPLDLDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FEFE0)
#define EKJKEPLDLDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154FF760)
#define EKJKEPLDLDH_TICK_OFFSET UNITYSDK_OFFSET(0x154FF8B0)

inline static constexpr unsigned int EKJKEPLDLDH_TypeDefinitionIndex = 52896;

	class EKJKEPLDLDH : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FFKBFPKEPEN; // 0x18
		::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* MMEPKHGPPHJ; // 0x30
		::KFELGAIGHAP* IJAFDDPLOIH; // 0x38
		::KFELGAIGHAP* NMPLHCJKEOI; // 0x40
		::System::UInt32 AJNLLPDCAII; // 0x48
		::System::UInt32 GJFHPJDIECP; // 0x4C
		::System::UInt32 PHENAPCKMIJ; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_TICK_OFFSET))(this, a1);
		}

		::System::Void LPAPLFKFDEN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_LPAPLFKFDEN_OFFSET))(this, a1);
		}

		::System::Void LJPBILLHMIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_LJPBILLHMIJ_OFFSET))(this, a1);
		}

		::System::Void JKHADKKPKGB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_JKHADKKPKGB_OFFSET))(this, a1);
		}

		::System::Void MCOMPLFILIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKJKEPLDLDH_MCOMPLFILIB_OFFSET))(this, a1);
		}

	};
