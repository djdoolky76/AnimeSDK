#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PBANNOGKALB.h"
#include "unitysdk/System/Object.h"

class KKPAHFBAJPH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DAEAHPIMBOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BFE640)
#define DAEAHPIMBOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BFE400)
#define DAEAHPIMBOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BFE580)
#define DAEAHPIMBOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BFE720)
#define DAEAHPIMBOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BFE410)
#define DAEAHPIMBOO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BFE8A0)
#define DAEAHPIMBOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BFE050)
#define DAEAHPIMBOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BFE030)
#define DAEAHPIMBOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BFE310)
#define DAEAHPIMBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFE850)

inline static constexpr unsigned int DAEAHPIMBOO_TypeDefinitionIndex = 12233;

class DAEAHPIMBOO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::KKPAHFBAJPH*>* OJMBOGGMIKO; // 0x28
	::PBANNOGKALB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAHPIMBOO_CHLEALKAOJO_OFFSET))(this);
	}
};
