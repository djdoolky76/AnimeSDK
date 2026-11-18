#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LHLLGKCEEEK.h"
#include "unitysdk/System/Object.h"

class BBIPPNHEHLF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EIFIJIMJPHE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A563C50)
#define EIFIJIMJPHE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A563A10)
#define EIFIJIMJPHE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A563B90)
#define EIFIJIMJPHE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A563D30)
#define EIFIJIMJPHE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A563A20)
#define EIFIJIMJPHE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A563EB0)
#define EIFIJIMJPHE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A563660)
#define EIFIJIMJPHE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A563640)
#define EIFIJIMJPHE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A563920)
#define EIFIJIMJPHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A563E60)

inline static constexpr unsigned int EIFIJIMJPHE_TypeDefinitionIndex = 17577;

class EIFIJIMJPHE : public ::System::Object
{
public:
	::Il2CppArray<::BBIPPNHEHLF*>* OJMBOGGMIKO; // 0x10
	::LHLLGKCEEEK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFIJIMJPHE_CHLEALKAOJO_OFFSET))(this);
	}
};
