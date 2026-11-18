#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIEENHDCGLM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IKLPDPDLHHM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DNBCKOOFHGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19512B30)
#define DNBCKOOFHGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195128B0)
#define DNBCKOOFHGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195128C0)
#define DNBCKOOFHGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19512980)
#define DNBCKOOFHGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19512AB0)
#define DNBCKOOFHGN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19512C80)
#define DNBCKOOFHGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19512EB0)
#define DNBCKOOFHGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19512510)
#define DNBCKOOFHGN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19512C60)
#define DNBCKOOFHGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195124F0)
#define DNBCKOOFHGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195127D0)
#define DNBCKOOFHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x19512C10)

inline static constexpr unsigned int DNBCKOOFHGN_TypeDefinitionIndex = 16822;

class DNBCKOOFHGN : public ::System::Object
{
public:
	::Il2CppArray<::IKLPDPDLHHM*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::GIEENHDCGLM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_NAMKJOJBAOA_OFFSET))(this);
	}

	::IKLPDPDLHHM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IKLPDPDLHHM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCKOOFHGN_CHLEALKAOJO_OFFSET))(this);
	}
};
