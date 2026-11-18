#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PFBBPKMOKFJ.h"
#include "unitysdk/System/Object.h"

class PJPIMGKOIFN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HCFJBKAFFFF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152D6210)
#define HCFJBKAFFFF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152D5FB0)
#define HCFJBKAFFFF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152D6150)
#define HCFJBKAFFFF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152D62F0)
#define HCFJBKAFFFF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152D5FC0)
#define HCFJBKAFFFF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152D5C10)
#define HCFJBKAFFFF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152D5BF0)
#define HCFJBKAFFFF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152D5ED0)
#define HCFJBKAFFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x152D6420)

inline static constexpr unsigned int HCFJBKAFFFF_TypeDefinitionIndex = 10587;

class HCFJBKAFFFF : public ::System::Object
{
public:
	::PFBBPKMOKFJ DHDJDGFNBOA; // 0x10
	::Il2CppArray<::PJPIMGKOIFN*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFJBKAFFFF_CHLEALKAOJO_OFFSET))(this);
	}
};
