#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KPCEHDEAHML.h"
#include "unitysdk/System/Object.h"

class BNEPACLONFI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMEDECACFKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BF9010)
#define CMEDECACFKM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BF8DA0)
#define CMEDECACFKM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BF8F50)
#define CMEDECACFKM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BF90F0)
#define CMEDECACFKM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BF8DB0)
#define CMEDECACFKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BF89F0)
#define CMEDECACFKM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BF89D0)
#define CMEDECACFKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BF8CB0)
#define CMEDECACFKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF9220)

inline static constexpr unsigned int CMEDECACFKM_TypeDefinitionIndex = 14271;

class CMEDECACFKM : public ::System::Object
{
public:
	::KPCEHDEAHML DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::BNEPACLONFI*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CMEDECACFKM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CMEDECACFKM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDECACFKM_CHLEALKAOJO_OFFSET))(this);
	}
};
