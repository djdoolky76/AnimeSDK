#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDOEMNHNKBB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NCIAPNHPKCI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BHBBFOGAHON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADB4FF0)
#define BHBBFOGAHON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADB4DB0)
#define BHBBFOGAHON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADB4F30)
#define BHBBFOGAHON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADB50D0)
#define BHBBFOGAHON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADB4DC0)
#define BHBBFOGAHON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADB5250)
#define BHBBFOGAHON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADB4A00)
#define BHBBFOGAHON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADB49E0)
#define BHBBFOGAHON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADB4CC0)
#define BHBBFOGAHON__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5200)

inline static constexpr unsigned int BHBBFOGAHON_TypeDefinitionIndex = 15101;

class BHBBFOGAHON : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::BDOEMNHNKBB DHDJDGFNBOA; // 0x20
	::Il2CppArray<::NCIAPNHPKCI*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BHBBFOGAHON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BHBBFOGAHON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BHBBFOGAHON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBBFOGAHON_CHLEALKAOJO_OFFSET))(this);
	}
};
