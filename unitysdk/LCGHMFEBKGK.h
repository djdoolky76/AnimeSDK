#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PAJHHABHAMK.h"
#include "unitysdk/System/Object.h"

class BPLELJIMKGP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LCGHMFEBKGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190F9760)
#define LCGHMFEBKGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190F9530)
#define LCGHMFEBKGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190F96A0)
#define LCGHMFEBKGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190F9840)
#define LCGHMFEBKGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190F9540)
#define LCGHMFEBKGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190F99C0)
#define LCGHMFEBKGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190F9190)
#define LCGHMFEBKGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190F9170)
#define LCGHMFEBKGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190F9450)
#define LCGHMFEBKGK__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9970)

inline static constexpr unsigned int LCGHMFEBKGK_TypeDefinitionIndex = 15031;

class LCGHMFEBKGK : public ::System::Object
{
public:
	::Il2CppArray<::BPLELJIMKGP*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::PAJHHABHAMK DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LCGHMFEBKGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
