#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEANDBKCDHA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FAPACKPFFHF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JODPCNHMBAM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1954F900)
#define JODPCNHMBAM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1954F6C0)
#define JODPCNHMBAM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1954F840)
#define JODPCNHMBAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1954F9E0)
#define JODPCNHMBAM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1954F6D0)
#define JODPCNHMBAM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1954FB20)
#define JODPCNHMBAM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1954F310)
#define JODPCNHMBAM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1954F2F0)
#define JODPCNHMBAM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1954F5D0)
#define JODPCNHMBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1954FB10)

inline static constexpr unsigned int JODPCNHMBAM_TypeDefinitionIndex = 15906;

class JODPCNHMBAM : public ::System::Object
{
public:
	::Il2CppArray<::FAPACKPFFHF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::DEANDBKCDHA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JODPCNHMBAM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JODPCNHMBAM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JODPCNHMBAM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODPCNHMBAM_CHLEALKAOJO_OFFSET))(this);
	}
};
