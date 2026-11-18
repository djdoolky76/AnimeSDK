#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IINEMOAPJCP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LNDKMFKCBBI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DKBDFBACEEF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17783D50)
#define DKBDFBACEEF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17783B20)
#define DKBDFBACEEF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17783C90)
#define DKBDFBACEEF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17783E30)
#define DKBDFBACEEF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17783B30)
#define DKBDFBACEEF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17783FB0)
#define DKBDFBACEEF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17783780)
#define DKBDFBACEEF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17783760)
#define DKBDFBACEEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17783A40)
#define DKBDFBACEEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17783F60)

inline static constexpr unsigned int DKBDFBACEEF_TypeDefinitionIndex = 11321;

class DKBDFBACEEF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::LNDKMFKCBBI*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::IINEMOAPJCP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DKBDFBACEEF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DKBDFBACEEF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DKBDFBACEEF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDFBACEEF_CHLEALKAOJO_OFFSET))(this);
	}
};
