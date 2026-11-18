#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGNADAPJKLK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LPCCPHBCGFA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define POKDDOPPIHO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0B7E30)
#define POKDDOPPIHO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0B7BC0)
#define POKDDOPPIHO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0B7D70)
#define POKDDOPPIHO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B7F10)
#define POKDDOPPIHO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0B7BD0)
#define POKDDOPPIHO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0B7810)
#define POKDDOPPIHO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0B77F0)
#define POKDDOPPIHO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0B7AD0)
#define POKDDOPPIHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B8040)

inline static constexpr unsigned int POKDDOPPIHO_TypeDefinitionIndex = 10549;

class POKDDOPPIHO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::DGNADAPJKLK DHDJDGFNBOA; // 0x20
	::Il2CppArray<::LPCCPHBCGFA*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POKDDOPPIHO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POKDDOPPIHO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDDOPPIHO_CHLEALKAOJO_OFFSET))(this);
	}
};
