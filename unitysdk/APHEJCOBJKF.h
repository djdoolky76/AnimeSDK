#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCEPDBIFMCE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NEBJOMDKKEJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define APHEJCOBJKF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x194F40C0)
#define APHEJCOBJKF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x194F3E90)
#define APHEJCOBJKF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x194F4000)
#define APHEJCOBJKF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x194F41A0)
#define APHEJCOBJKF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x194F3EA0)
#define APHEJCOBJKF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x194F4340)
#define APHEJCOBJKF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x194F4570)
#define APHEJCOBJKF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x194F3AF0)
#define APHEJCOBJKF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x194F4320)
#define APHEJCOBJKF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x194F3AD0)
#define APHEJCOBJKF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x194F3DB0)
#define APHEJCOBJKF__CTOR_OFFSET UNITYSDK_OFFSET(0x194F42D0)

inline static constexpr unsigned int APHEJCOBJKF_TypeDefinitionIndex = 9779;

class APHEJCOBJKF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::FCEPDBIFMCE DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::NEBJOMDKKEJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APHEJCOBJKF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + APHEJCOBJKF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_NAMKJOJBAOA_OFFSET))(this);
	}

	::NEBJOMDKKEJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NEBJOMDKKEJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APHEJCOBJKF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + APHEJCOBJKF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHEJCOBJKF_CHLEALKAOJO_OFFSET))(this);
	}
};
