#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHKPEFLFCNI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DOJMDAEDOKN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MKCPDCNOJDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C08AA40)
#define MKCPDCNOJDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C08A800)
#define MKCPDCNOJDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C08A980)
#define MKCPDCNOJDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C08AB20)
#define MKCPDCNOJDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C08A810)
#define MKCPDCNOJDO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C08AE90)
#define MKCPDCNOJDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C08ACA0)
#define MKCPDCNOJDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C08A450)
#define MKCPDCNOJDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C08AE70)
#define MKCPDCNOJDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C08A430)
#define MKCPDCNOJDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C08A710)
#define MKCPDCNOJDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08AC50)

inline static constexpr unsigned int MKCPDCNOJDO_TypeDefinitionIndex = 17288;

class MKCPDCNOJDO : public ::System::Object
{
public:
	::Il2CppArray<::DOJMDAEDOKN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::BHKPEFLFCNI DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::DOJMDAEDOKN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOJMDAEDOKN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCPDCNOJDO_CHLEALKAOJO_OFFSET))(this);
	}
};
