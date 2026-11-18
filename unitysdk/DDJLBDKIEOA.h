#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGBHOHIFHEM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KNDPLDKMIOP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DDJLBDKIEOA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1574C0F0)
#define DDJLBDKIEOA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1574BEC0)
#define DDJLBDKIEOA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1574C030)
#define DDJLBDKIEOA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1574C1D0)
#define DDJLBDKIEOA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1574BED0)
#define DDJLBDKIEOA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1574C350)
#define DDJLBDKIEOA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1574BB20)
#define DDJLBDKIEOA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1574BB00)
#define DDJLBDKIEOA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1574BDE0)
#define DDJLBDKIEOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1574C300)

inline static constexpr unsigned int DDJLBDKIEOA_TypeDefinitionIndex = 9600;

class DDJLBDKIEOA : public ::System::Object
{
public:
	::EGBHOHIFHEM DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::KNDPLDKMIOP*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DDJLBDKIEOA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
