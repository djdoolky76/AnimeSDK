#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAONCDHOEHP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GGMPCIBDBFH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JAHMBGIDIGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152F25C0)
#define JAHMBGIDIGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152F2380)
#define JAHMBGIDIGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152F2500)
#define JAHMBGIDIGA_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x152F2820)
#define JAHMBGIDIGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152F26A0)
#define JAHMBGIDIGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152F2390)
#define JAHMBGIDIGA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x152F2910)
#define JAHMBGIDIGA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152F2AF0)
#define JAHMBGIDIGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152F1FD0)
#define JAHMBGIDIGA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152F28F0)
#define JAHMBGIDIGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152F1FB0)
#define JAHMBGIDIGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152F2290)
#define JAHMBGIDIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x152F27D0)

inline static constexpr unsigned int JAHMBGIDIGA_TypeDefinitionIndex = 16835;

class JAHMBGIDIGA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::CAONCDHOEHP DHDJDGFNBOA; // 0x18
	::Il2CppArray<::GGMPCIBDBFH*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::GGMPCIBDBFH*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GGMPCIBDBFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GGMPCIBDBFH* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::GGMPCIBDBFH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAHMBGIDIGA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
