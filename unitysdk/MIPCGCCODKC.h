#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class GELIALJDFBL;
namespace RPG::GameCore { class SO_WeightedSelector; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIPCGCCODKC_ACGKJAEDPMA_OFFSET UNITYSDK_OFFSET(0xB961CD0)
#define MIPCGCCODKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB960DE0)
#define MIPCGCCODKC_DHEKKIOOGCA_OFFSET UNITYSDK_OFFSET(0xB961640)
#define MIPCGCCODKC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB961000)
#define MIPCGCCODKC_DLBJHPMCKLJ_OFFSET UNITYSDK_OFFSET(0xB9611E0)
#define MIPCGCCODKC_FKHHFEENKGB_OFFSET UNITYSDK_OFFSET(0xB9623F0)
#define MIPCGCCODKC_IFIGDELILBA_OFFSET UNITYSDK_OFFSET(0xB9621B0)
#define MIPCGCCODKC_IIPAPGAAHGB_OFFSET UNITYSDK_OFFSET(0xB9613F0)
#define MIPCGCCODKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB961260)
#define MIPCGCCODKC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB961E10)
#define MIPCGCCODKC_PKHKDIDNBHD_OFFSET UNITYSDK_OFFSET(0xB961B70)
#define MIPCGCCODKC_PPJPJNMHINL_OFFSET UNITYSDK_OFFSET(0xB962440)
#define MIPCGCCODKC_TICK_OFFSET UNITYSDK_OFFSET(0xB962310)

	class MIPCGCCODKC
	{
	public:
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* IFMDBDJCCCI; // 0x40
		::System::Boolean HGEHNAOPPNO; // 0x48
		::System::Boolean POFNNELPPLA; // 0x49
		::System::Boolean OMHBEGLDMAM; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Int32 NCDEGDCPCHN; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + MIPCGCCODKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* DLBJHPMCKLJ()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_DLBJHPMCKLJ_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIPCGCCODKC_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskState DHEKKIOOGCA(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIPCGCCODKC_DHEKKIOOGCA_OFFSET))(this, a1);
		}

		::System::Void IIPAPGAAHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_IIPAPGAAHGB_OFFSET))(this);
		}

		::System::Void PKHKDIDNBHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_PKHKDIDNBHD_OFFSET))(this);
		}

		::System::Void IFIGDELILBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_IFIGDELILBA_OFFSET))(this);
		}

		::System::Void FKHHFEENKGB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIPCGCCODKC_FKHHFEENKGB_OFFSET))(this, a1);
		}

		::System::Void ACGKJAEDPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_ACGKJAEDPMA_OFFSET))(this);
		}

		::System::Int32 PPJPJNMHINL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPCGCCODKC_PPJPJNMHINL_OFFSET))(this);
		}

	};
