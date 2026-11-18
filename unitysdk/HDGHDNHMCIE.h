#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LIFPCINGGGD.h"
#include "unitysdk/System/Object.h"

class EFPIMDFOKLB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HDGHDNHMCIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BAC170)
#define HDGHDNHMCIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BABF40)
#define HDGHDNHMCIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BAC0B0)
#define HDGHDNHMCIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BAC250)
#define HDGHDNHMCIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BABF50)
#define HDGHDNHMCIE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BAC3D0)
#define HDGHDNHMCIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BAC620)
#define HDGHDNHMCIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BABBA0)
#define HDGHDNHMCIE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BAC600)
#define HDGHDNHMCIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BABB80)
#define HDGHDNHMCIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BABE60)
#define HDGHDNHMCIE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAC380)

inline static constexpr unsigned int HDGHDNHMCIE_TypeDefinitionIndex = 11442;

class HDGHDNHMCIE : public ::System::Object
{
public:
	::LIFPCINGGGD DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::EFPIMDFOKLB*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_FINALIZE_OFFSET))(this);
	}

	::EFPIMDFOKLB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EFPIMDFOKLB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGHDNHMCIE_CHLEALKAOJO_OFFSET))(this);
	}
};
