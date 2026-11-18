#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMIFGIDIMD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KNFMNINAKKP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GABPPEMPMDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AF6CB0)
#define GABPPEMPMDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AF6A50)
#define GABPPEMPMDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AF6BF0)
#define GABPPEMPMDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AF6D90)
#define GABPPEMPMDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AF6A60)
#define GABPPEMPMDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AF66B0)
#define GABPPEMPMDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AF6690)
#define GABPPEMPMDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AF6970)
#define GABPPEMPMDM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF6EC0)

inline static constexpr unsigned int GABPPEMPMDM_TypeDefinitionIndex = 11673;

class GABPPEMPMDM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::KNFMNINAKKP*>* OJMBOGGMIKO; // 0x20
	::HGMIFGIDIMD DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GABPPEMPMDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GABPPEMPMDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABPPEMPMDM_CHLEALKAOJO_OFFSET))(this);
	}
};
