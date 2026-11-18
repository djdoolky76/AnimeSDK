#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHHNLEGBGPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HLPKNNNKDPC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EKOMBMGFEGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA87F0)
#define EKOMBMGFEGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA8570)
#define EKOMBMGFEGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA8580)
#define EKOMBMGFEGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA8640)
#define EKOMBMGFEGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA8770)
#define EKOMBMGFEGA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA8BD0)
#define EKOMBMGFEGA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AA8920)
#define EKOMBMGFEGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA81C0)
#define EKOMBMGFEGA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AA8E10)
#define EKOMBMGFEGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA81A0)
#define EKOMBMGFEGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA8480)
#define EKOMBMGFEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA88D0)

inline static constexpr unsigned int EKOMBMGFEGA_TypeDefinitionIndex = 9899;

class EKOMBMGFEGA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::FHHNLEGBGPE DHDJDGFNBOA; // 0x28
	::Il2CppArray<::HLPKNNNKDPC*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_CHLEALKAOJO_OFFSET))(this);
	}

	::HLPKNNNKDPC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HLPKNNNKDPC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMBMGFEGA_NAMKJOJBAOA_OFFSET))(this);
	}
};
