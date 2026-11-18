#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNGPMAPNHMF.h"
#include "unitysdk/System/Object.h"

class MAGCPANACKA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KIEMKGPLMMM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17498AD0)
#define KIEMKGPLMMM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17498870)
#define KIEMKGPLMMM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17498A10)
#define KIEMKGPLMMM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17498F60)
#define KIEMKGPLMMM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17498BB0)
#define KIEMKGPLMMM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17498880)
#define KIEMKGPLMMM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17498D50)
#define KIEMKGPLMMM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174984D0)
#define KIEMKGPLMMM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17498D30)
#define KIEMKGPLMMM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174984B0)
#define KIEMKGPLMMM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17498790)
#define KIEMKGPLMMM__CTOR_OFFSET UNITYSDK_OFFSET(0x17498CE0)

inline static constexpr unsigned int KIEMKGPLMMM_TypeDefinitionIndex = 10809;

class KIEMKGPLMMM : public ::System::Object
{
public:
	::MNGPMAPNHMF DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::MAGCPANACKA*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_NAMKJOJBAOA_OFFSET))(this);
	}

	::MAGCPANACKA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MAGCPANACKA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MAGCPANACKA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MAGCPANACKA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMKGPLMMM_EJABHIAHIAN_OFFSET))(this);
	}
};
