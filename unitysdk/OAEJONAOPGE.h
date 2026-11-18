#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GANMOLIGBAL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CPDEMCDMKAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OAEJONAOPGE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C099D90)
#define OAEJONAOPGE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C099B10)
#define OAEJONAOPGE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C099B20)
#define OAEJONAOPGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C099BE0)
#define OAEJONAOPGE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C099D10)
#define OAEJONAOPGE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C099EC0)
#define OAEJONAOPGE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C099760)
#define OAEJONAOPGE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C099740)
#define OAEJONAOPGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C099A20)
#define OAEJONAOPGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C099E70)

inline static constexpr unsigned int OAEJONAOPGE_TypeDefinitionIndex = 9575;

class OAEJONAOPGE : public ::System::Object
{
public:
	::Il2CppArray<::CPDEMCDMKAF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::GANMOLIGBAL DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OAEJONAOPGE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OAEJONAOPGE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEJONAOPGE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OAEJONAOPGE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
