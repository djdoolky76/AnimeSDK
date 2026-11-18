#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBFGPNBHHKE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NJNBGECNMMD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ELBBLEDLDDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F4BDF0)
#define ELBBLEDLDDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F4BBB0)
#define ELBBLEDLDDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F4BD30)
#define ELBBLEDLDDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F4BED0)
#define ELBBLEDLDDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F4BBC0)
#define ELBBLEDLDDC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19F4C220)
#define ELBBLEDLDDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F4C050)
#define ELBBLEDLDDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F4B800)
#define ELBBLEDLDDC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F4C450)
#define ELBBLEDLDDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F4B7E0)
#define ELBBLEDLDDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F4BAC0)
#define ELBBLEDLDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4C000)

inline static constexpr unsigned int ELBBLEDLDDC_TypeDefinitionIndex = 11761;

class ELBBLEDLDDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::FBFGPNBHHKE DHDJDGFNBOA; // 0x20
	::Il2CppArray<::NJNBGECNMMD*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NJNBGECNMMD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NJNBGECNMMD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBBLEDLDDC_NAMKJOJBAOA_OFFSET))(this);
	}
};
