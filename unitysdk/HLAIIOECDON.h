#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPMPPHHFNFK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NACKKIAJOLA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HLAIIOECDON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17C03C20)
#define HLAIIOECDON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17C039E0)
#define HLAIIOECDON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17C03B60)
#define HLAIIOECDON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17C03D00)
#define HLAIIOECDON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17C039F0)
#define HLAIIOECDON_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17C03E80)
#define HLAIIOECDON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17C040D0)
#define HLAIIOECDON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17C03630)
#define HLAIIOECDON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17C040B0)
#define HLAIIOECDON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17C03610)
#define HLAIIOECDON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17C038F0)
#define HLAIIOECDON__CTOR_OFFSET UNITYSDK_OFFSET(0x17C03E30)

inline static constexpr unsigned int HLAIIOECDON_TypeDefinitionIndex = 13649;

class HLAIIOECDON : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::HPMPPHHFNFK DHDJDGFNBOA; // 0x18
	::Il2CppArray<::NACKKIAJOLA*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HLAIIOECDON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HLAIIOECDON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_FINALIZE_OFFSET))(this);
	}

	::NACKKIAJOLA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NACKKIAJOLA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLAIIOECDON_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HLAIIOECDON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIIOECDON_NAMKJOJBAOA_OFFSET))(this);
	}
};
