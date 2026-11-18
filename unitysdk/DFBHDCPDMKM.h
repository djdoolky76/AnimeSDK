#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFGODEBLLCK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ICGFBMEAAGM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFBHDCPDMKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F18C00)
#define DFBHDCPDMKM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F189D0)
#define DFBHDCPDMKM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F18B40)
#define DFBHDCPDMKM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F18CE0)
#define DFBHDCPDMKM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F189E0)
#define DFBHDCPDMKM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F18E20)
#define DFBHDCPDMKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F18630)
#define DFBHDCPDMKM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F18610)
#define DFBHDCPDMKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F188F0)
#define DFBHDCPDMKM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F18E10)

inline static constexpr unsigned int DFBHDCPDMKM_TypeDefinitionIndex = 9407;

class DFBHDCPDMKM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::FFGODEBLLCK DHDJDGFNBOA; // 0x18
	::Il2CppArray<::ICGFBMEAAGM*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFBHDCPDMKM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
