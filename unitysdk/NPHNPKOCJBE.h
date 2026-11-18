#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKBLFCLIKPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NKHOMMGFIFO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPHNPKOCJBE_APGHPFMAEEE_OFFSET UNITYSDK_OFFSET(0x1B336080)
#define NPHNPKOCJBE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B335A40)
#define NPHNPKOCJBE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B3356D0)
#define NPHNPKOCJBE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B335850)
#define NPHNPKOCJBE_DAPBKLGNIOG_OFFSET UNITYSDK_OFFSET(0x1B3362B0)
#define NPHNPKOCJBE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B335910)
#define NPHNPKOCJBE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B3356E0)
#define NPHNPKOCJBE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B3361F0)
#define NPHNPKOCJBE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B335B70)
#define NPHNPKOCJBE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B334E30)
#define NPHNPKOCJBE_MHOFMAMNIKE_OFFSET UNITYSDK_OFFSET(0x1B335D60)
#define NPHNPKOCJBE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B335D40)
#define NPHNPKOCJBE_ODHNJGPFNDI_OFFSET UNITYSDK_OFFSET(0x1B3351D0)
#define NPHNPKOCJBE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B334E10)
#define NPHNPKOCJBE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B3350F0)
#define NPHNPKOCJBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B335B20)

inline static constexpr unsigned int NPHNPKOCJBE_TypeDefinitionIndex = 9697;

class NPHNPKOCJBE : public ::System::Object
{
public:
	::EKBLFCLIKPE DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* DJAAMBOHGLC; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NKHOMMGFIFO*>*>* NJNGFGMLCDA; // 0x48
	::Il2CppArray<::NKHOMMGFIFO*>* OJMBOGGMIKO; // 0x50
	::System::Boolean DLGKLGKOMHK; // 0x58
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_FINALIZE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::NKHOMMGFIFO*>* MHOFMAMNIKE(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Collections::Generic::List_1<::NKHOMMGFIFO*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_MHOFMAMNIKE_OFFSET))(this, AOCOIDIMLIH);
	}

	::NKHOMMGFIFO* APGHPFMAEEE(::System::Int32 ABHBKFJKINO)
	{
		return ((::NKHOMMGFIFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_APGHPFMAEEE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_CHLEALKAOJO_OFFSET))(this);
	}

	::NKHOMMGFIFO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NKHOMMGFIFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 DAPBKLGNIOG(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_DAPBKLGNIOG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void ODHNJGPFNDI(::System::Int32 ODJKACDGJLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPHNPKOCJBE_ODHNJGPFNDI_OFFSET))(this, ODJKACDGJLM);
	}
};
