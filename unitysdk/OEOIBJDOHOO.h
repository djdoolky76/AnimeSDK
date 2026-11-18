#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKECOBPDNLO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AHMELHFMNML;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OEOIBJDOHOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD88060)
#define OEOIBJDOHOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD87E00)
#define OEOIBJDOHOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD87FA0)
#define OEOIBJDOHOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD88140)
#define OEOIBJDOHOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD87E10)
#define OEOIBJDOHOO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD882E0)
#define OEOIBJDOHOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD87A60)
#define OEOIBJDOHOO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD882C0)
#define OEOIBJDOHOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD87A40)
#define OEOIBJDOHOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD87D20)
#define OEOIBJDOHOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD88270)

inline static constexpr unsigned int OEOIBJDOHOO_TypeDefinitionIndex = 12868;

class OEOIBJDOHOO : public ::System::Object
{
public:
	::Il2CppArray<::AHMELHFMNML*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::IKECOBPDNLO DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_CHLEALKAOJO_OFFSET))(this);
	}

	::AHMELHFMNML* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AHMELHFMNML*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEOIBJDOHOO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
