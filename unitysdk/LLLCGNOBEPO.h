#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PPHGEPFCGAD.h"
#include "unitysdk/System/Object.h"

class GDEIHCDCCIC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LLLCGNOBEPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B654170)
#define LLLCGNOBEPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B653F10)
#define LLLCGNOBEPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B6540B0)
#define LLLCGNOBEPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B654250)
#define LLLCGNOBEPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B653F20)
#define LLLCGNOBEPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B653B70)
#define LLLCGNOBEPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B653B50)
#define LLLCGNOBEPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B653E30)
#define LLLCGNOBEPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B654380)

inline static constexpr unsigned int LLLCGNOBEPO_TypeDefinitionIndex = 11519;

class LLLCGNOBEPO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::PPHGEPFCGAD DHDJDGFNBOA; // 0x18
	::Il2CppArray<::GDEIHCDCCIC*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCGNOBEPO_CHLEALKAOJO_OFFSET))(this);
	}
};
