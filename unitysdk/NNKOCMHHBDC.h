#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PJAFLOIAGBA.h"
#include "unitysdk/System/Object.h"

class OPAKBGBDJEC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NNKOCMHHBDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DC9870)
#define NNKOCMHHBDC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DC9630)
#define NNKOCMHHBDC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DC97B0)
#define NNKOCMHHBDC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DC9950)
#define NNKOCMHHBDC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DC9640)
#define NNKOCMHHBDC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DC9AD0)
#define NNKOCMHHBDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DC9280)
#define NNKOCMHHBDC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DC9260)
#define NNKOCMHHBDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DC9540)
#define NNKOCMHHBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC9A80)

inline static constexpr unsigned int NNKOCMHHBDC_TypeDefinitionIndex = 16848;

class NNKOCMHHBDC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::OPAKBGBDJEC*>* OJMBOGGMIKO; // 0x18
	::PJAFLOIAGBA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOCMHHBDC_CHLEALKAOJO_OFFSET))(this);
	}
};
