#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFPDNMJJNGF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DOCGJEMGDLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EFHGJFJJFPN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9B4400)
#define EFHGJFJJFPN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9B41D0)
#define EFHGJFJJFPN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9B4340)
#define EFHGJFJJFPN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9B44E0)
#define EFHGJFJJFPN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9B41E0)
#define EFHGJFJJFPN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9B4680)
#define EFHGJFJJFPN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9B48B0)
#define EFHGJFJJFPN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9B3E30)
#define EFHGJFJJFPN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9B4660)
#define EFHGJFJJFPN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9B3E10)
#define EFHGJFJJFPN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9B40F0)
#define EFHGJFJJFPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B4610)

inline static constexpr unsigned int EFHGJFJJFPN_TypeDefinitionIndex = 16230;

class EFHGJFJJFPN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::DOCGJEMGDLH*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::HFPDNMJJNGF DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_CHLEALKAOJO_OFFSET))(this);
	}

	::DOCGJEMGDLH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOCGJEMGDLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EFHGJFJJFPN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
