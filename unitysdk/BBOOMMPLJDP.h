#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEIHGMOEKOB.h"
#include "unitysdk/System/Object.h"

class FOOBGDEDAJD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BBOOMMPLJDP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17EEBE00)
#define BBOOMMPLJDP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17EEBBC0)
#define BBOOMMPLJDP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17EEBD40)
#define BBOOMMPLJDP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17EEBEE0)
#define BBOOMMPLJDP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17EEBBD0)
#define BBOOMMPLJDP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17EEC060)
#define BBOOMMPLJDP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17EEC2B0)
#define BBOOMMPLJDP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17EEB810)
#define BBOOMMPLJDP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17EEC290)
#define BBOOMMPLJDP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17EEB7F0)
#define BBOOMMPLJDP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17EEBAD0)
#define BBOOMMPLJDP__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEC010)

inline static constexpr unsigned int BBOOMMPLJDP_TypeDefinitionIndex = 13890;

class BBOOMMPLJDP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::OEIHGMOEKOB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::FOOBGDEDAJD*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_CHLEALKAOJO_OFFSET))(this);
	}

	::FOOBGDEDAJD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FOOBGDEDAJD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBOOMMPLJDP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
