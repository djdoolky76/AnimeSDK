#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNLENIEEMOB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OPDLPOAJLCD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDGAAONKMOH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB00610)
#define KDGAAONKMOH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB003D0)
#define KDGAAONKMOH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB00550)
#define KDGAAONKMOH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB006F0)
#define KDGAAONKMOH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB003E0)
#define KDGAAONKMOH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB00870)
#define KDGAAONKMOH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB00020)
#define KDGAAONKMOH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB00000)
#define KDGAAONKMOH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB002E0)
#define KDGAAONKMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB00820)

inline static constexpr unsigned int KDGAAONKMOH_TypeDefinitionIndex = 15002;

class KDGAAONKMOH : public ::System::Object
{
public:
	::JNLENIEEMOB DHDJDGFNBOA; // 0x10
	::Il2CppArray<::OPDLPOAJLCD*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDGAAONKMOH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KDGAAONKMOH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGAAONKMOH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KDGAAONKMOH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
