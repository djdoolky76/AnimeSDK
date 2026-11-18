#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBPNEOFAFFN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GBEPDBJJNJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IJIBMBDFPJG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7CDA40)
#define IJIBMBDFPJG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7CD800)
#define IJIBMBDFPJG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7CD980)
#define IJIBMBDFPJG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7CDB20)
#define IJIBMBDFPJG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7CD810)
#define IJIBMBDFPJG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7CDE90)
#define IJIBMBDFPJG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7CDCC0)
#define IJIBMBDFPJG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7CD450)
#define IJIBMBDFPJG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7CDCA0)
#define IJIBMBDFPJG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7CD430)
#define IJIBMBDFPJG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7CD710)
#define IJIBMBDFPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CDC50)

inline static constexpr unsigned int IJIBMBDFPJG_TypeDefinitionIndex = 16059;

class IJIBMBDFPJG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::GBEPDBJJNJA*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::KBPNEOFAFFN DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GBEPDBJJNJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GBEPDBJJNJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJIBMBDFPJG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
