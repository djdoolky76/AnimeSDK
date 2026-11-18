#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OHBJOFELCKJ.h"
#include "unitysdk/System/Object.h"

class OCDFPANMOJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CIIACFPNMPD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1878A5D0)
#define CIIACFPNMPD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1878A350)
#define CIIACFPNMPD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1878A360)
#define CIIACFPNMPD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1878A420)
#define CIIACFPNMPD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1878A550)
#define CIIACFPNMPD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1878A700)
#define CIIACFPNMPD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1878A950)
#define CIIACFPNMPD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18789FB0)
#define CIIACFPNMPD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1878A930)
#define CIIACFPNMPD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18789F90)
#define CIIACFPNMPD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1878A270)
#define CIIACFPNMPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1878A6B0)

inline static constexpr unsigned int CIIACFPNMPD_TypeDefinitionIndex = 9810;

class CIIACFPNMPD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::OCDFPANMOJA*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::OHBJOFELCKJ DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CIIACFPNMPD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CIIACFPNMPD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_CHLEALKAOJO_OFFSET))(this);
	}

	::OCDFPANMOJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OCDFPANMOJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIIACFPNMPD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIACFPNMPD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CIIACFPNMPD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
