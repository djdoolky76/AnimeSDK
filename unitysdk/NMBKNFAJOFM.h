#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKDAJBNDPED.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KLHCIPAKMEG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NMBKNFAJOFM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C096980)
#define NMBKNFAJOFM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C096740)
#define NMBKNFAJOFM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0968C0)
#define NMBKNFAJOFM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C096A60)
#define NMBKNFAJOFM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C096750)
#define NMBKNFAJOFM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C096BE0)
#define NMBKNFAJOFM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C096390)
#define NMBKNFAJOFM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C096370)
#define NMBKNFAJOFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C096650)
#define NMBKNFAJOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C096B90)

inline static constexpr unsigned int NMBKNFAJOFM_TypeDefinitionIndex = 11180;

class NMBKNFAJOFM : public ::System::Object
{
public:
	::Il2CppArray<::KLHCIPAKMEG*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::AKDAJBNDPED DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBKNFAJOFM_CHLEALKAOJO_OFFSET))(this);
	}
};
