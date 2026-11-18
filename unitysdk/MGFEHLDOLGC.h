#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOGONKCNMII.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NIJFELFPFFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MGFEHLDOLGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7F9E90)
#define MGFEHLDOLGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7F9C60)
#define MGFEHLDOLGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7F9DD0)
#define MGFEHLDOLGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7F9F70)
#define MGFEHLDOLGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7F9C70)
#define MGFEHLDOLGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7FA0F0)
#define MGFEHLDOLGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7F98C0)
#define MGFEHLDOLGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7F98A0)
#define MGFEHLDOLGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7F9B80)
#define MGFEHLDOLGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FA0A0)

inline static constexpr unsigned int MGFEHLDOLGC_TypeDefinitionIndex = 9655;

class MGFEHLDOLGC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::NIJFELFPFFM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::IOGONKCNMII DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MGFEHLDOLGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
