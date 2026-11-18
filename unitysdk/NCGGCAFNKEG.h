#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OJCCLJKKNKM.h"
#include "unitysdk/System/Object.h"

class KJOAMALLCBI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NCGGCAFNKEG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAA2E80)
#define NCGGCAFNKEG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAA2C40)
#define NCGGCAFNKEG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAA2DC0)
#define NCGGCAFNKEG_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BAA3310)
#define NCGGCAFNKEG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAA2F60)
#define NCGGCAFNKEG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAA2C50)
#define NCGGCAFNKEG_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BAA3100)
#define NCGGCAFNKEG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAA33E0)
#define NCGGCAFNKEG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAA2890)
#define NCGGCAFNKEG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAA30E0)
#define NCGGCAFNKEG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAA2870)
#define NCGGCAFNKEG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAA2B50)
#define NCGGCAFNKEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA3090)

inline static constexpr unsigned int NCGGCAFNKEG_TypeDefinitionIndex = 12728;

class NCGGCAFNKEG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::KJOAMALLCBI*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::OJCCLJKKNKM DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_NAMKJOJBAOA_OFFSET))(this);
	}

	::KJOAMALLCBI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJOAMALLCBI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::KJOAMALLCBI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::KJOAMALLCBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NCGGCAFNKEG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
