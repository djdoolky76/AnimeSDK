#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OOMLFKEKINN.h"
#include "unitysdk/System/Object.h"

class GNELGGDEPBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PLNKGBGHEFK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAC89E0)
#define PLNKGBGHEFK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAC8870)
#define PLNKGBGHEFK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1FC22390)
#define PLNKGBGHEFK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAC8AC0)
#define PLNKGBGHEFK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAC8880)
#define PLNKGBGHEFK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1FC221C0)
#define PLNKGBGHEFK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAC84D0)
#define PLNKGBGHEFK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAC84B0)
#define PLNKGBGHEFK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAC8790)
#define PLNKGBGHEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC22170)

inline static constexpr unsigned int PLNKGBGHEFK_TypeDefinitionIndex = 14636;

class PLNKGBGHEFK : public ::System::Object
{
public:
	::OOMLFKEKINN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::GNELGGDEPBO*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNKGBGHEFK_CHLEALKAOJO_OFFSET))(this);
	}
};
