#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHMEFCPAEEM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BCHKOEKOLKK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LIPOBGJKAKP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0789B0)
#define LIPOBGJKAKP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C078780)
#define LIPOBGJKAKP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0788F0)
#define LIPOBGJKAKP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C078A90)
#define LIPOBGJKAKP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C078790)
#define LIPOBGJKAKP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C078C10)
#define LIPOBGJKAKP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0783E0)
#define LIPOBGJKAKP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0783C0)
#define LIPOBGJKAKP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0786A0)
#define LIPOBGJKAKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C078BC0)

inline static constexpr unsigned int LIPOBGJKAKP_TypeDefinitionIndex = 12275;

class LIPOBGJKAKP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::HHMEFCPAEEM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::BCHKOEKOLKK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPOBGJKAKP_CHLEALKAOJO_OFFSET))(this);
	}
};
