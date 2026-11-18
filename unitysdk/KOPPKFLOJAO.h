#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INCBGPLIKKD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BBIHEOAIEDH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KOPPKFLOJAO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1530AB30)
#define KOPPKFLOJAO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1530A900)
#define KOPPKFLOJAO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1530AA70)
#define KOPPKFLOJAO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1530AC10)
#define KOPPKFLOJAO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1530A910)
#define KOPPKFLOJAO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1530AD90)
#define KOPPKFLOJAO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1530AFE0)
#define KOPPKFLOJAO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1530A560)
#define KOPPKFLOJAO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1530AFC0)
#define KOPPKFLOJAO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1530A540)
#define KOPPKFLOJAO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1530A820)
#define KOPPKFLOJAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1530AD40)

inline static constexpr unsigned int KOPPKFLOJAO_TypeDefinitionIndex = 10922;

class KOPPKFLOJAO : public ::System::Object
{
public:
	::INCBGPLIKKD DHDJDGFNBOA; // 0x10
	::Il2CppArray<::BBIHEOAIEDH*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_FINALIZE_OFFSET))(this);
	}

	::BBIHEOAIEDH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BBIHEOAIEDH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPPKFLOJAO_NAMKJOJBAOA_OFFSET))(this);
	}
};
