#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADFEKNEBOJF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LDACPECBCDM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBGBLOBDAKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB0AB90)
#define LBGBLOBDAKJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB0A950)
#define LBGBLOBDAKJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB0AAD0)
#define LBGBLOBDAKJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB0AC70)
#define LBGBLOBDAKJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB0A960)
#define LBGBLOBDAKJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB0ADB0)
#define LBGBLOBDAKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB0A5D0)
#define LBGBLOBDAKJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB0A5B0)
#define LBGBLOBDAKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB0A860)
#define LBGBLOBDAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0ADA0)

inline static constexpr unsigned int LBGBLOBDAKJ_TypeDefinitionIndex = 11628;

class LBGBLOBDAKJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x10
	::ADFEKNEBOJF DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::LDACPECBCDM*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LBGBLOBDAKJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
