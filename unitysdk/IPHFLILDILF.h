#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POHGGMFCGKN.h"
#include "unitysdk/System/Object.h"

class NPNKMFOGODF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPHFLILDILF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7D5290)
#define IPHFLILDILF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7D5060)
#define IPHFLILDILF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7D51D0)
#define IPHFLILDILF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7D5370)
#define IPHFLILDILF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7D5070)
#define IPHFLILDILF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7D54B0)
#define IPHFLILDILF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7D4CC0)
#define IPHFLILDILF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7D4CA0)
#define IPHFLILDILF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7D4F80)
#define IPHFLILDILF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D54A0)

inline static constexpr unsigned int IPHFLILDILF_TypeDefinitionIndex = 11927;

class IPHFLILDILF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::POHGGMFCGKN DHDJDGFNBOA; // 0x18
	::Il2CppArray<::NPNKMFOGODF*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IPHFLILDILF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IPHFLILDILF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IPHFLILDILF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHFLILDILF_CHLEALKAOJO_OFFSET))(this);
	}
};
