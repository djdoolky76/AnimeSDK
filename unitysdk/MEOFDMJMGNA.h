#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class GELIALJDFBL;
namespace RPG::GameCore { class SO_Sequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEOFDMJMGNA_ACGKJAEDPMA_OFFSET UNITYSDK_OFFSET(0xC1968A0)
#define MEOFDMJMGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xC195780)
#define MEOFDMJMGNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC195B70)
#define MEOFDMJMGNA_DLBJHPMCKLJ_OFFSET UNITYSDK_OFFSET(0xC195D50)
#define MEOFDMJMGNA_FKHHFEENKGB_OFFSET UNITYSDK_OFFSET(0xC196F70)
#define MEOFDMJMGNA_IFIGDELILBA_OFFSET UNITYSDK_OFFSET(0xC196D00)
#define MEOFDMJMGNA_NALNPFBIDCL_OFFSET UNITYSDK_OFFSET(0xC195F80)
#define MEOFDMJMGNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC195DD0)
#define MEOFDMJMGNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1969E0)
#define MEOFDMJMGNA_PKHKDIDNBHD_OFFSET UNITYSDK_OFFSET(0xC196740)
#define MEOFDMJMGNA_PPJPJNMHINL_OFFSET UNITYSDK_OFFSET(0xC196FC0)
#define MEOFDMJMGNA_TICK_OFFSET UNITYSDK_OFFSET(0xC196E60)

inline static constexpr unsigned int MEOFDMJMGNA_TypeDefinitionIndex = 53229;

	class MEOFDMJMGNA
	{
	public:
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* IFMDBDJCCCI; // 0x40
		::System::Boolean HGEHNAOPPNO; // 0x48
		::System::Boolean POFNNELPPLA; // 0x49
		::System::Boolean OMHBEGLDMAM; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Int32 NCDEGDCPCHN; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Sequence* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* DLBJHPMCKLJ()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_DLBJHPMCKLJ_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskState NALNPFBIDCL(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_NALNPFBIDCL_OFFSET))(this, a1);
		}

		::System::Void PKHKDIDNBHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_PKHKDIDNBHD_OFFSET))(this);
		}

		::System::Void IFIGDELILBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_IFIGDELILBA_OFFSET))(this);
		}

		::System::Void FKHHFEENKGB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_FKHHFEENKGB_OFFSET))(this, a1);
		}

		::System::Void ACGKJAEDPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_ACGKJAEDPMA_OFFSET))(this);
		}

		::System::Int32 PPJPJNMHINL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEOFDMJMGNA_PPJPJNMHINL_OFFSET))(this);
		}

	};
