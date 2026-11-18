#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OMBECGBLGLE.h"
#include "unitysdk/System/Object.h"

class NJLAGKHGAOL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LCDACIDAOFM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1530E5E0)
#define LCDACIDAOFM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1530E3A0)
#define LCDACIDAOFM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1530E520)
#define LCDACIDAOFM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1530EA40)
#define LCDACIDAOFM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1530E6C0)
#define LCDACIDAOFM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1530E3B0)
#define LCDACIDAOFM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1530E840)
#define LCDACIDAOFM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1530EB10)
#define LCDACIDAOFM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1530DFF0)
#define LCDACIDAOFM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1530EA20)
#define LCDACIDAOFM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1530DFD0)
#define LCDACIDAOFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1530E2B0)
#define LCDACIDAOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1530E7F0)

inline static constexpr unsigned int LCDACIDAOFM_TypeDefinitionIndex = 10842;

class LCDACIDAOFM : public ::System::Object
{
public:
	::Il2CppArray<::NJLAGKHGAOL*>* OJMBOGGMIKO; // 0x10
	::OMBECGBLGLE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCDACIDAOFM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LCDACIDAOFM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_FINALIZE_OFFSET))(this);
	}

	::NJLAGKHGAOL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::NJLAGKHGAOL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCDACIDAOFM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::NJLAGKHGAOL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::NJLAGKHGAOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LCDACIDAOFM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDACIDAOFM_NAMKJOJBAOA_OFFSET))(this);
	}
};
