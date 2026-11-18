#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAAEPOHFBDF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IBODCNHIHMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KHLLFKCKNAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1955B780)
#define KHLLFKCKNAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1955B550)
#define KHLLFKCKNAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1955B6C0)
#define KHLLFKCKNAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1955B860)
#define KHLLFKCKNAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1955B560)
#define KHLLFKCKNAB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1955BA00)
#define KHLLFKCKNAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1955BC30)
#define KHLLFKCKNAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1955B1B0)
#define KHLLFKCKNAB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1955B9E0)
#define KHLLFKCKNAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1955B190)
#define KHLLFKCKNAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1955B470)
#define KHLLFKCKNAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1955B990)

inline static constexpr unsigned int KHLLFKCKNAB_TypeDefinitionIndex = 10412;

class KHLLFKCKNAB : public ::System::Object
{
public:
	::KAAEPOHFBDF DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::IBODCNHIHMH*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_CHLEALKAOJO_OFFSET))(this);
	}

	::IBODCNHIHMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IBODCNHIHMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KHLLFKCKNAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
