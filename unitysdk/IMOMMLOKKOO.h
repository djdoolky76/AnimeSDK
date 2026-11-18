#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADFGKAEOBPO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IGIJCADMOGJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMOMMLOKKOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x193541D0)
#define IMOMMLOKKOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19353FA0)
#define IMOMMLOKKOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19354110)
#define IMOMMLOKKOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x193542B0)
#define IMOMMLOKKOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19353FB0)
#define IMOMMLOKKOO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x193543F0)
#define IMOMMLOKKOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19353C00)
#define IMOMMLOKKOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19353BE0)
#define IMOMMLOKKOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19353EC0)
#define IMOMMLOKKOO__CTOR_OFFSET UNITYSDK_OFFSET(0x193543E0)

inline static constexpr unsigned int IMOMMLOKKOO_TypeDefinitionIndex = 17059;

class IMOMMLOKKOO : public ::System::Object
{
public:
	::Il2CppArray<::IGIJCADMOGJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::ADFGKAEOBPO DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOMMLOKKOO_CHLEALKAOJO_OFFSET))(this);
	}
};
