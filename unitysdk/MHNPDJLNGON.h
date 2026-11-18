#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAJAIKEOAH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KOKBKDLNDGO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MHNPDJLNGON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C17B800)
#define MHNPDJLNGON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C17B5D0)
#define MHNPDJLNGON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C17B740)
#define MHNPDJLNGON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C17B8E0)
#define MHNPDJLNGON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C17B5E0)
#define MHNPDJLNGON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C17BA60)
#define MHNPDJLNGON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C17B230)
#define MHNPDJLNGON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C17B210)
#define MHNPDJLNGON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C17B4F0)
#define MHNPDJLNGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17BA10)

inline static constexpr unsigned int MHNPDJLNGON_TypeDefinitionIndex = 13279;

class MHNPDJLNGON : public ::System::Object
{
public:
	::BDAJAIKEOAH DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::KOKBKDLNDGO*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MHNPDJLNGON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MHNPDJLNGON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MHNPDJLNGON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNPDJLNGON_CHLEALKAOJO_OFFSET))(this);
	}
};
