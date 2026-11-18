#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MJOOHBPHJLB.h"
#include "unitysdk/System/Object.h"

class BGOCNNHODFJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IHCPNIJDJGN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAEBB60)
#define IHCPNIJDJGN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAEB920)
#define IHCPNIJDJGN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAEBAA0)
#define IHCPNIJDJGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAEBC40)
#define IHCPNIJDJGN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAEB930)
#define IHCPNIJDJGN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAEBDC0)
#define IHCPNIJDJGN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAEB570)
#define IHCPNIJDJGN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAEB550)
#define IHCPNIJDJGN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAEB830)
#define IHCPNIJDJGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEBD70)

inline static constexpr unsigned int IHCPNIJDJGN_TypeDefinitionIndex = 17588;

class IHCPNIJDJGN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::MJOOHBPHJLB DHDJDGFNBOA; // 0x28
	::Il2CppArray<::BGOCNNHODFJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPNIJDJGN_CHLEALKAOJO_OFFSET))(this);
	}
};
