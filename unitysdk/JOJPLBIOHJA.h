#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHJMEMNKLIM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HJHHLDHGKFO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JOJPLBIOHJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAFE3D0)
#define JOJPLBIOHJA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAFE190)
#define JOJPLBIOHJA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAFE310)
#define JOJPLBIOHJA_EAMOCILCBJP_OFFSET UNITYSDK_OFFSET(0x1BAFE630)
#define JOJPLBIOHJA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAFE4B0)
#define JOJPLBIOHJA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAFE1A0)
#define JOJPLBIOHJA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAFE640)
#define JOJPLBIOHJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAFDDE0)
#define JOJPLBIOHJA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAFDDC0)
#define JOJPLBIOHJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAFE0A0)
#define JOJPLBIOHJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFE5E0)

inline static constexpr unsigned int JOJPLBIOHJA_TypeDefinitionIndex = 17176;

class JOJPLBIOHJA : public ::System::Object
{
public:
	::CHJMEMNKLIM DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::HJHHLDHGKFO*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_FINALIZE_OFFSET))(this);
	}

	::System::Int32 EAMOCILCBJP(::System::Int32 LMPBHDBOKJC, ::System::Int32 KMNMHBCECHG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_EAMOCILCBJP_OFFSET))(this, LMPBHDBOKJC, KMNMHBCECHG);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJPLBIOHJA_CHLEALKAOJO_OFFSET))(this);
	}
};
