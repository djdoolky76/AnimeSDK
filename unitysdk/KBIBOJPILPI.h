#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJGLJNOMCD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FPCBDDPHHJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KBIBOJPILPI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B141B60)
#define KBIBOJPILPI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B141930)
#define KBIBOJPILPI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B141AA0)
#define KBIBOJPILPI_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B141D80)
#define KBIBOJPILPI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B141C40)
#define KBIBOJPILPI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B141940)
#define KBIBOJPILPI_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B141E70)
#define KBIBOJPILPI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B142050)
#define KBIBOJPILPI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B141590)
#define KBIBOJPILPI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B141E50)
#define KBIBOJPILPI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B141570)
#define KBIBOJPILPI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B141850)
#define KBIBOJPILPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B141D70)

inline static constexpr unsigned int KBIBOJPILPI_TypeDefinitionIndex = 14889;

class KBIBOJPILPI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::CFJGLJNOMCD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::FPCBDDPHHJB*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KBIBOJPILPI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KBIBOJPILPI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FPCBDDPHHJB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FPCBDDPHHJB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIBOJPILPI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KBIBOJPILPI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FPCBDDPHHJB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::FPCBDDPHHJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBIBOJPILPI_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
