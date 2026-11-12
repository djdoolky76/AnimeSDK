#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define KHFPPKHLNOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9A240)
#define KHFPPKHLNOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC9AAA0)
#define KHFPPKHLNOP_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xBC9B4A0)
#define KHFPPKHLNOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC9A950)
#define KHFPPKHLNOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC9AA50)
#define KHFPPKHLNOP_TICK_OFFSET UNITYSDK_OFFSET(0xBC9B840)

inline static constexpr unsigned int KHFPPKHLNOP_TypeDefinitionIndex = 54518;

	class KHFPPKHLNOP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* MAHALGGJLLP; // 0x18
		::KFELGAIGHAP* FOGNBAADCOB; // 0x20
		::KFELGAIGHAP* CNMJAPLJIBO; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::KFELGAIGHAP* HEPJFMELDPH; // 0x38
		::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0x40
		::KFELGAIGHAP* CIBOCBFMHEJ; // 0x48
		::KFELGAIGHAP* KOBFEAIJGNB; // 0x50
		::KFELGAIGHAP* CIFOILLJFNF; // 0x58
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x60
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x68
		::KFELGAIGHAP* MKPIFOMFJGJ; // 0x70
		::KFELGAIGHAP* DDOEBMJIBEN; // 0x78
		::KFELGAIGHAP* CAEONMABCBB; // 0x80
		::KFELGAIGHAP* DFCFCKLOAHM; // 0x88
		::KFELGAIGHAP* IKEJBGEFCNM; // 0x90
		::KFELGAIGHAP* HPLBDKOOBEG; // 0x98
		::KFELGAIGHAP* NNPHIIPBDEB; // 0xA0
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
