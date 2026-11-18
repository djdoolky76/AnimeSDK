#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDPIBNHGPPH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IPIHJIFGJKJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HBOEAAAFACC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BAB1E0)
#define HBOEAAAFACC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BAAE70)
#define HBOEAAAFACC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BAAFF0)
#define HBOEAAAFACC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BAB0B0)
#define HBOEAAAFACC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BAAE80)
#define HBOEAAAFACC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BAB500)
#define HBOEAAAFACC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BAB330)
#define HBOEAAAFACC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BAAAC0)
#define HBOEAAAFACC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BAB310)
#define HBOEAAAFACC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BAAAA0)
#define HBOEAAAFACC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BAAD80)
#define HBOEAAAFACC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAB2C0)

inline static constexpr unsigned int HBOEAAAFACC_TypeDefinitionIndex = 15027;

class HBOEAAAFACC : public ::System::Object
{
public:
	::Il2CppArray<::IPIHJIFGJKJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::BDPIBNHGPPH DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HBOEAAAFACC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_FINALIZE_OFFSET))(this);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HBOEAAAFACC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOEAAAFACC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HBOEAAAFACC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IPIHJIFGJKJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IPIHJIFGJKJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBOEAAAFACC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
