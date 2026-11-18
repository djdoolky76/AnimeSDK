#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFAEGCDCOJN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MAIIJJMNKGB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BKIHGNILKNB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1775F090)
#define BKIHGNILKNB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1775EE60)
#define BKIHGNILKNB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1775EFD0)
#define BKIHGNILKNB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1775F170)
#define BKIHGNILKNB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1775EE70)
#define BKIHGNILKNB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1775F2F0)
#define BKIHGNILKNB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1775F540)
#define BKIHGNILKNB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1775EAC0)
#define BKIHGNILKNB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1775F520)
#define BKIHGNILKNB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1775EAA0)
#define BKIHGNILKNB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1775ED80)
#define BKIHGNILKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1775F2A0)

inline static constexpr unsigned int BKIHGNILKNB_TypeDefinitionIndex = 17228;

class BKIHGNILKNB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::CFAEGCDCOJN DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::MAIIJJMNKGB*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BKIHGNILKNB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BKIHGNILKNB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_FINALIZE_OFFSET))(this);
	}

	::MAIIJJMNKGB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MAIIJJMNKGB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKIHGNILKNB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHGNILKNB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BKIHGNILKNB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
