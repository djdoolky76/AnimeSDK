#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFHFCJJOOLF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MPLANDDLJJK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KHFALPFHOGE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5FAA00)
#define KHFALPFHOGE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5FA7D0)
#define KHFALPFHOGE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5FA940)
#define KHFALPFHOGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5FAAE0)
#define KHFALPFHOGE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5FA7E0)
#define KHFALPFHOGE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5FAC60)
#define KHFALPFHOGE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5FA430)
#define KHFALPFHOGE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5FA410)
#define KHFALPFHOGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5FA6F0)
#define KHFALPFHOGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FAC10)

inline static constexpr unsigned int KHFALPFHOGE_TypeDefinitionIndex = 17682;

class KHFALPFHOGE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::IFHFCJJOOLF DHDJDGFNBOA; // 0x18
	::Il2CppArray<::MPLANDDLJJK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHFALPFHOGE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KHFALPFHOGE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KHFALPFHOGE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFALPFHOGE_CHLEALKAOJO_OFFSET))(this);
	}
};
