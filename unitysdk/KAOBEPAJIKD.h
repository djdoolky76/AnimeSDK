#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGIMIKPKKIK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IFPHPLPGDKK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KAOBEPAJIKD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BD2900)
#define KAOBEPAJIKD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BD2680)
#define KAOBEPAJIKD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BD2690)
#define KAOBEPAJIKD_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x18BD2EE0)
#define KAOBEPAJIKD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BD2750)
#define KAOBEPAJIKD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BD2880)
#define KAOBEPAJIKD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x18BD2A50)
#define KAOBEPAJIKD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BD2C30)
#define KAOBEPAJIKD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BD22D0)
#define KAOBEPAJIKD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BD2A30)
#define KAOBEPAJIKD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BD22B0)
#define KAOBEPAJIKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BD2590)
#define KAOBEPAJIKD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD29E0)

inline static constexpr unsigned int KAOBEPAJIKD_TypeDefinitionIndex = 10642;

class KAOBEPAJIKD : public ::System::Object
{
public:
	::HGIMIKPKKIK DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::IFPHPLPGDKK*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_NAMKJOJBAOA_OFFSET))(this);
	}

	::IFPHPLPGDKK* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::IFPHPLPGDKK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::IFPHPLPGDKK*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IFPHPLPGDKK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOBEPAJIKD_EJABHIAHIAN_OFFSET))(this);
	}
};
