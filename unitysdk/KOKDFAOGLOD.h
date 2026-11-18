#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOGBJNMNEEO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KEOGLGJMMJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOKDFAOGLOD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BDDE20)
#define KOKDFAOGLOD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BDDBF0)
#define KOKDFAOGLOD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BDDD60)
#define KOKDFAOGLOD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BDDF00)
#define KOKDFAOGLOD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BDDC00)
#define KOKDFAOGLOD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BDE230)
#define KOKDFAOGLOD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BDE060)
#define KOKDFAOGLOD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BDD850)
#define KOKDFAOGLOD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BDE040)
#define KOKDFAOGLOD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BDD830)
#define KOKDFAOGLOD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BDDB10)
#define KOKDFAOGLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDE030)

inline static constexpr unsigned int KOKDFAOGLOD_TypeDefinitionIndex = 16282;

class KOKDFAOGLOD : public ::System::Object
{
public:
	::Il2CppArray<::KEOGLGJMMJP*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::IOGBJNMNEEO DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_CHLEALKAOJO_OFFSET))(this);
	}

	::KEOGLGJMMJP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KEOGLGJMMJP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOKDFAOGLOD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
