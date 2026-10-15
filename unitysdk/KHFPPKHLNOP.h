#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define KHFPPKHLNOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB406B20)
#define KHFPPKHLNOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB407380)
#define KHFPPKHLNOP_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0xB407D80)
#define KHFPPKHLNOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB407230)
#define KHFPPKHLNOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB407330)
#define KHFPPKHLNOP_TICK_OFFSET UNITYSDK_OFFSET(0xB408120)

inline static constexpr unsigned int KHFPPKHLNOP_TypeDefinitionIndex = 53356;

	class KHFPPKHLNOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0x18
		::KFELGAIGHAP* MAHALGGJLLP; // 0x20
		::KFELGAIGHAP* CIBOCBFMHEJ; // 0x28
		::KFELGAIGHAP* CNMJAPLJIBO; // 0x30
		::KFELGAIGHAP* HEPJFMELDPH; // 0x38
		::KFELGAIGHAP* DFCFCKLOAHM; // 0x40
		::KFELGAIGHAP* CIFOILLJFNF; // 0x48
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x50
		::KFELGAIGHAP* IKEJBGEFCNM; // 0x58
		::KFELGAIGHAP* DDOEBMJIBEN; // 0x60
		::KFELGAIGHAP* HPLBDKOOBEG; // 0x68
		::KFELGAIGHAP* MKPIFOMFJGJ; // 0x70
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x78
		::KFELGAIGHAP* FOGNBAADCOB; // 0x80
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x88
		::KFELGAIGHAP* CAEONMABCBB; // 0x90
		::KFELGAIGHAP* NNPHIIPBDEB; // 0x98
		::KFELGAIGHAP* KOBFEAIJGNB; // 0xA0
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
