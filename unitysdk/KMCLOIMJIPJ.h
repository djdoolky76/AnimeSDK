#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNHHMIACGGL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DFEJFIMLFKN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KMCLOIMJIPJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15306360)
#define KMCLOIMJIPJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15306130)
#define KMCLOIMJIPJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x153062A0)
#define KMCLOIMJIPJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15306440)
#define KMCLOIMJIPJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15306140)
#define KMCLOIMJIPJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x153067B0)
#define KMCLOIMJIPJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x153065C0)
#define KMCLOIMJIPJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15305D90)
#define KMCLOIMJIPJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15306790)
#define KMCLOIMJIPJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15305D70)
#define KMCLOIMJIPJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15306050)
#define KMCLOIMJIPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15306570)

inline static constexpr unsigned int KMCLOIMJIPJ_TypeDefinitionIndex = 13069;

class KMCLOIMJIPJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::DFEJFIMLFKN*>* OJMBOGGMIKO; // 0x20
	::BNHHMIACGGL DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::DFEJFIMLFKN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DFEJFIMLFKN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLOIMJIPJ_CHLEALKAOJO_OFFSET))(this);
	}
};
