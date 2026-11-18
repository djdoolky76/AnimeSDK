#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJIIACFOAKA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JFMMIIDOKKO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MGMCDCLIGPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA94F80)
#define MGMCDCLIGPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA94D40)
#define MGMCDCLIGPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA94EC0)
#define MGMCDCLIGPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA95060)
#define MGMCDCLIGPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA94D50)
#define MGMCDCLIGPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA951E0)
#define MGMCDCLIGPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA94990)
#define MGMCDCLIGPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA94970)
#define MGMCDCLIGPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA94C50)
#define MGMCDCLIGPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA95190)

inline static constexpr unsigned int MGMCDCLIGPO_TypeDefinitionIndex = 11363;

class MGMCDCLIGPO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::JFMMIIDOKKO*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FJIIACFOAKA DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MGMCDCLIGPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
