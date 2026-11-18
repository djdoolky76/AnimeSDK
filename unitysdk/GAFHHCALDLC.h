#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EENIDHBEDGH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AHHPHPMNDIF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GAFHHCALDLC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AB9AC0)
#define GAFHHCALDLC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AB9880)
#define GAFHHCALDLC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AB9A00)
#define GAFHHCALDLC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AB9BA0)
#define GAFHHCALDLC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AB9890)
#define GAFHHCALDLC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AB9EF0)
#define GAFHHCALDLC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AB9D20)
#define GAFHHCALDLC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AB94D0)
#define GAFHHCALDLC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17ABA120)
#define GAFHHCALDLC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AB94B0)
#define GAFHHCALDLC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AB9790)
#define GAFHHCALDLC__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB9CD0)

inline static constexpr unsigned int GAFHHCALDLC_TypeDefinitionIndex = 9139;

class GAFHHCALDLC : public ::System::Object
{
public:
	::Il2CppArray<::AHHPHPMNDIF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::EENIDHBEDGH DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GAFHHCALDLC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GAFHHCALDLC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GAFHHCALDLC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::AHHPHPMNDIF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AHHPHPMNDIF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAFHHCALDLC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFHHCALDLC_CHLEALKAOJO_OFFSET))(this);
	}
};
