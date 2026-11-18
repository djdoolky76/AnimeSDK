#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGGIANGKPDB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DLEPPGBBILH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HDOEHLFALAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4E9680)
#define HDOEHLFALAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4E9440)
#define HDOEHLFALAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4E95C0)
#define HDOEHLFALAJ_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A4E9D60)
#define HDOEHLFALAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4E9760)
#define HDOEHLFALAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4E9450)
#define HDOEHLFALAJ_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A4E9AE0)
#define HDOEHLFALAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4E98E0)
#define HDOEHLFALAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4E8FC0)
#define HDOEHLFALAJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4E9AC0)
#define HDOEHLFALAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4E8F90)
#define HDOEHLFALAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4E9280)
#define HDOEHLFALAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E9890)

inline static constexpr unsigned int HDOEHLFALAJ_TypeDefinitionIndex = 9416;

class HDOEHLFALAJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::HGGIANGKPDB DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::DLEPPGBBILH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::DLEPPGBBILH* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DLEPPGBBILH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DLEPPGBBILH*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DLEPPGBBILH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOEHLFALAJ_EJABHIAHIAN_OFFSET))(this);
	}
};
