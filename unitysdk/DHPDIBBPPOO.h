#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NPOAGDFAJEI.h"
#include "unitysdk/System/Object.h"

class OOIINPFPGNH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DHPDIBBPPOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18799C90)
#define DHPDIBBPPOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18799A50)
#define DHPDIBBPPOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18799BD0)
#define DHPDIBBPPOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18799D70)
#define DHPDIBBPPOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18799A60)
#define DHPDIBBPPOO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1879A0E0)
#define DHPDIBBPPOO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18799F10)
#define DHPDIBBPPOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187996A0)
#define DHPDIBBPPOO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18799EF0)
#define DHPDIBBPPOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18799680)
#define DHPDIBBPPOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18799960)
#define DHPDIBBPPOO__CTOR_OFFSET UNITYSDK_OFFSET(0x18799EA0)

inline static constexpr unsigned int DHPDIBBPPOO_TypeDefinitionIndex = 11893;

class DHPDIBBPPOO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::NPOAGDFAJEI DHDJDGFNBOA; // 0x28
	::Il2CppArray<::OOIINPFPGNH*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::OOIINPFPGNH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OOIINPFPGNH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPDIBBPPOO_CHLEALKAOJO_OFFSET))(this);
	}
};
