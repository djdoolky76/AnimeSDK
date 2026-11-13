#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define KHFPPKHLNOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1978FAC0)
#define KHFPPKHLNOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19790350)
#define KHFPPKHLNOP_LINOOBJGCGJ_OFFSET UNITYSDK_OFFSET(0x19790D50)
#define KHFPPKHLNOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19790200)
#define KHFPPKHLNOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19790300)
#define KHFPPKHLNOP_TICK_OFFSET UNITYSDK_OFFSET(0x197910F0)

inline static constexpr unsigned int KHFPPKHLNOP_TypeDefinitionIndex = 54518;

	class KHFPPKHLNOP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HPLBDKOOBEG; // 0x18
		::RPG::GameCore::TimeRelayFlameEventListener* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* IKEJBGEFCNM; // 0x28
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x30
		::KFELGAIGHAP* KOBFEAIJGNB; // 0x38
		::KFELGAIGHAP* MAHALGGJLLP; // 0x40
		::KFELGAIGHAP* CNMJAPLJIBO; // 0x48
		::KFELGAIGHAP* DDOEBMJIBEN; // 0x50
		::KFELGAIGHAP* CAEONMABCBB; // 0x58
		::KFELGAIGHAP* CIFOILLJFNF; // 0x60
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x68
		::KFELGAIGHAP* MKPIFOMFJGJ; // 0x70
		::KFELGAIGHAP* CIBOCBFMHEJ; // 0x78
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x80
		::KFELGAIGHAP* FOGNBAADCOB; // 0x88
		::KFELGAIGHAP* HEPJFMELDPH; // 0x90
		::KFELGAIGHAP* DFCFCKLOAHM; // 0x98
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
