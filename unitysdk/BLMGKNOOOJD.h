#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BLMGKNOOOJD_KOMLALPHLKE;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BLMGKNOOOJD_AIGDDGHMAKH_OFFSET UNITYSDK_OFFSET(0xBA7A6D0)
#define BLMGKNOOOJD_CMFAEMMPMNJ_OFFSET UNITYSDK_OFFSET(0xBA7A070)
#define BLMGKNOOOJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA78E90)
#define BLMGKNOOOJD_DBPPKNEEMKC_OFFSET UNITYSDK_OFFSET(0xBA79EA0)
#define BLMGKNOOOJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA79120)
#define BLMGKNOOOJD_EIJLEONGMEM_OFFSET UNITYSDK_OFFSET(0xBA79B40)
#define BLMGKNOOOJD_FENBJIJJJKF_OFFSET UNITYSDK_OFFSET(0xBA7A730)
#define BLMGKNOOOJD_IEACEONEBNA_OFFSET UNITYSDK_OFFSET(0xBA7A500)
#define BLMGKNOOOJD_LEMMPIEKFDK_OFFSET UNITYSDK_OFFSET(0xBA7A790)
#define BLMGKNOOOJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA79650)
#define BLMGKNOOOJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA79470)
#define BLMGKNOOOJD_PAENJEBEHPP_OFFSET UNITYSDK_OFFSET(0xBA7A870)
#define BLMGKNOOOJD_TICK_OFFSET UNITYSDK_OFFSET(0xBA79C70)

inline static constexpr unsigned int BLMGKNOOOJD_TypeDefinitionIndex = 53376;

	class BLMGKNOOOJD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* IOMHPJIENKM; // 0x18
		::RPG::GameCore::OpenTimeRewindRecreateWorldPage* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* JLGKECEAFIG; // 0x30
		::BLMGKNOOOJD_KOMLALPHLKE* EOMJAOMPAAH; // 0x38
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x40
		::Il2CppArray<::System::Boolean>* AIOEAPCKFBM; // 0x48
		::BLMGKNOOOJD_KOMLALPHLKE* MLDBKFBECPB; // 0x50
		::Il2CppArray<::KFELGAIGHAP*>* BPKFMAOLAOC; // 0x58
		::System::Single CDDGJKDCNMH; // 0x60
		::System::Int32 OHOGFBCFFFN; // 0x64
		::System::Int32 GOPKPNHHLIN; // 0x68
		::System::Single DNNONPLHEOI; // 0x6C
		::System::Single BLFDNCLDLMP; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_TICK_OFFSET))(this, a1);
		}

		::System::Void DBPPKNEEMKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_DBPPKNEEMKC_OFFSET))(this, a1);
		}

		::System::Void IEACEONEBNA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_IEACEONEBNA_OFFSET))(this, a1);
		}

		::System::Void AIGDDGHMAKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_AIGDDGHMAKH_OFFSET))(this);
		}

		::System::Void EIJLEONGMEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_EIJLEONGMEM_OFFSET))(this);
		}

		::System::Single FENBJIJJJKF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_FENBJIJJJKF_OFFSET))(this);
		}

		::System::Single PAENJEBEHPP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_PAENJEBEHPP_OFFSET))(this);
		}

		::System::Void CMFAEMMPMNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_CMFAEMMPMNJ_OFFSET))(this);
		}

		::System::Single LEMMPIEKFDK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_LEMMPIEKFDK_OFFSET))(this);
		}

	};
