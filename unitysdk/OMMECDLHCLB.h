#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKJJGMJBAMF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EHMNALHFIMK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OMMECDLHCLB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C1A33D0)
#define OMMECDLHCLB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C1A3190)
#define OMMECDLHCLB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C1A3310)
#define OMMECDLHCLB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1A34B0)
#define OMMECDLHCLB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C1A31A0)
#define OMMECDLHCLB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1A3630)
#define OMMECDLHCLB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C1A2DE0)
#define OMMECDLHCLB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C1A2DC0)
#define OMMECDLHCLB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C1A30A0)
#define OMMECDLHCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A35E0)

inline static constexpr unsigned int OMMECDLHCLB_TypeDefinitionIndex = 13363;

class OMMECDLHCLB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::EKJJGMJBAMF DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::EHMNALHFIMK*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMMECDLHCLB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OMMECDLHCLB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OMMECDLHCLB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMECDLHCLB_CHLEALKAOJO_OFFSET))(this);
	}
};
