#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define KHFPPKHLNOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB400000)
#define KHFPPKHLNOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB400860)
#define KHFPPKHLNOP_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xB401260)
#define KHFPPKHLNOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB400710)
#define KHFPPKHLNOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB400810)
#define KHFPPKHLNOP_TICK_OFFSET UNITYSDK_OFFSET(0xB401600)

inline static constexpr unsigned int KHFPPKHLNOP_TypeDefinitionIndex = 53356;

	class KHFPPKHLNOP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* CIBOCBFMHEJ; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* FOGNBAADCOB; // 0x28
		::KFELGAIGHAP* DDOEBMJIBEN; // 0x30
		::KFELGAIGHAP* MKPIFOMFJGJ; // 0x38
		::KFELGAIGHAP* CAEONMABCBB; // 0x40
		::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0x48
		::KFELGAIGHAP* CIFOILLJFNF; // 0x50
		::KFELGAIGHAP* MAHALGGJLLP; // 0x58
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x60
		::KFELGAIGHAP* KOBFEAIJGNB; // 0x68
		::KFELGAIGHAP* NNPHIIPBDEB; // 0x70
		::KFELGAIGHAP* CNMJAPLJIBO; // 0x78
		::KFELGAIGHAP* IKEJBGEFCNM; // 0x80
		::KFELGAIGHAP* HEPJFMELDPH; // 0x88
		::KFELGAIGHAP* HPLBDKOOBEG; // 0x90
		::KFELGAIGHAP* DFCFCKLOAHM; // 0x98
		::KFELGAIGHAP* PAOJOBEPBIO; // 0xA0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_DISPOSE_OFFSET))(this);
		}

		::System::Void LINOOBJGCGJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_LINOOBJGCGJ_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHFPPKHLNOP_TICK_OFFSET))(this, a1);
		}

	};
