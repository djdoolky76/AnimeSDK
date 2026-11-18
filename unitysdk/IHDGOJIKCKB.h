#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFDJIBJHLN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KGBKFEHEKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHDGOJIKCKB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19540A00)
#define IHDGOJIKCKB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195407D0)
#define IHDGOJIKCKB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19540940)
#define IHDGOJIKCKB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19540AE0)
#define IHDGOJIKCKB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195407E0)
#define IHDGOJIKCKB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19540C20)
#define IHDGOJIKCKB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19540430)
#define IHDGOJIKCKB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19540410)
#define IHDGOJIKCKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195406F0)
#define IHDGOJIKCKB__CTOR_OFFSET UNITYSDK_OFFSET(0x19540C10)

inline static constexpr unsigned int IHDGOJIKCKB_TypeDefinitionIndex = 13739;

class IHDGOJIKCKB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::BOFDJIBJHLN DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::KGBKFEHEKJP*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDGOJIKCKB_CHLEALKAOJO_OFFSET))(this);
	}
};
