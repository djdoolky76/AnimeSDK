#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJNFCJFBEHF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GONKPJAHJEO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFHODCNIKAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17BFD7D0)
#define HFHODCNIKAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17BFD460)
#define HFHODCNIKAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17BFD5E0)
#define HFHODCNIKAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17BFD6A0)
#define HFHODCNIKAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17BFD470)
#define HFHODCNIKAB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17BFDB00)
#define HFHODCNIKAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17BFD900)
#define HFHODCNIKAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17BFD0B0)
#define HFHODCNIKAB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17BFDAE0)
#define HFHODCNIKAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17BFD090)
#define HFHODCNIKAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17BFD370)
#define HFHODCNIKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFD8B0)

inline static constexpr unsigned int HFHODCNIKAB_TypeDefinitionIndex = 10634;

class HFHODCNIKAB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::GJNFCJFBEHF DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::GONKPJAHJEO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFHODCNIKAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_FINALIZE_OFFSET))(this);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFHODCNIKAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFHODCNIKAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHODCNIKAB_CHLEALKAOJO_OFFSET))(this);
	}

	::GONKPJAHJEO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GONKPJAHJEO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFHODCNIKAB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
