#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LGLBIKFINBM.h"
#include "unitysdk/System/Object.h"

class LGDOJHFBABC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MLIFMEAFDMB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFE32A0)
#define MLIFMEAFDMB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFE3070)
#define MLIFMEAFDMB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFE31E0)
#define MLIFMEAFDMB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFE3380)
#define MLIFMEAFDMB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFE3080)
#define MLIFMEAFDMB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFE3500)
#define MLIFMEAFDMB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFE2CD0)
#define MLIFMEAFDMB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFE2CB0)
#define MLIFMEAFDMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFE2F90)
#define MLIFMEAFDMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE34B0)

inline static constexpr unsigned int MLIFMEAFDMB_TypeDefinitionIndex = 10477;

class MLIFMEAFDMB : public ::System::Object
{
public:
	::Il2CppArray<::LGDOJHFBABC*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::LGLBIKFINBM DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIFMEAFDMB_CHLEALKAOJO_OFFSET))(this);
	}
};
