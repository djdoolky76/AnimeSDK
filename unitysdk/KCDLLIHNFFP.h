#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LHCOLPDKKNN.h"
#include "unitysdk/System/Object.h"

class COAOGGFKABH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KCDLLIHNFFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5F6730)
#define KCDLLIHNFFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5F64C0)
#define KCDLLIHNFFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5F6670)
#define KCDLLIHNFFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F6810)
#define KCDLLIHNFFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5F64D0)
#define KCDLLIHNFFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5F6110)
#define KCDLLIHNFFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5F60F0)
#define KCDLLIHNFFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5F63D0)
#define KCDLLIHNFFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F6940)

inline static constexpr unsigned int KCDLLIHNFFP_TypeDefinitionIndex = 10632;

class KCDLLIHNFFP : public ::System::Object
{
public:
	::LHCOLPDKKNN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::COAOGGFKABH*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDLLIHNFFP_CHLEALKAOJO_OFFSET))(this);
	}
};
