#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNMGHAJMCPK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DJAOLOPHDKP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GELHOHPECAM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B110CE0)
#define GELHOHPECAM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B110AB0)
#define GELHOHPECAM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B110C20)
#define GELHOHPECAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B110DC0)
#define GELHOHPECAM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B110AC0)
#define GELHOHPECAM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B111130)
#define GELHOHPECAM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B110F60)
#define GELHOHPECAM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B110710)
#define GELHOHPECAM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B110F40)
#define GELHOHPECAM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B1106F0)
#define GELHOHPECAM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B1109D0)
#define GELHOHPECAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B110EF0)

inline static constexpr unsigned int GELHOHPECAM_TypeDefinitionIndex = 11159;

class GELHOHPECAM : public ::System::Object
{
public:
	::Il2CppArray<::DJAOLOPHDKP*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::BNMGHAJMCPK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GELHOHPECAM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GELHOHPECAM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELHOHPECAM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GELHOHPECAM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DJAOLOPHDKP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DJAOLOPHDKP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GELHOHPECAM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
