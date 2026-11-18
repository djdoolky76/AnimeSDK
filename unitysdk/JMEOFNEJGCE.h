#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAEFFBOHOJA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IJAGEAKCCHN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JMEOFNEJGCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15AACE90)
#define JMEOFNEJGCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15AACC60)
#define JMEOFNEJGCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15AACDD0)
#define JMEOFNEJGCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15AACF70)
#define JMEOFNEJGCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15AACC70)
#define JMEOFNEJGCE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15AAD0F0)
#define JMEOFNEJGCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15AAD340)
#define JMEOFNEJGCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15AAC8C0)
#define JMEOFNEJGCE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15AAD320)
#define JMEOFNEJGCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15AAC8A0)
#define JMEOFNEJGCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15AACB80)
#define JMEOFNEJGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAD0A0)

inline static constexpr unsigned int JMEOFNEJGCE_TypeDefinitionIndex = 10356;

class JMEOFNEJGCE : public ::System::Object
{
public:
	::Il2CppArray<::IJAGEAKCCHN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::KAEFFBOHOJA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_FINALIZE_OFFSET))(this);
	}

	::IJAGEAKCCHN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IJAGEAKCCHN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JMEOFNEJGCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
