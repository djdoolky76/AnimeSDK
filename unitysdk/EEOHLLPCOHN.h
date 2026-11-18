#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIAGHOLPCF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CEKLDGLHPBI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EEOHLLPCOHN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADD0E70)
#define EEOHLLPCOHN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADD0C40)
#define EEOHLLPCOHN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADD0DB0)
#define EEOHLLPCOHN_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1ADD10F0)
#define EEOHLLPCOHN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADD0F50)
#define EEOHLLPCOHN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADD0C50)
#define EEOHLLPCOHN_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1ADD11C0)
#define EEOHLLPCOHN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADD13A0)
#define EEOHLLPCOHN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADD08A0)
#define EEOHLLPCOHN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADD10D0)
#define EEOHLLPCOHN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADD0880)
#define EEOHLLPCOHN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADD0B60)
#define EEOHLLPCOHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD1080)

inline static constexpr unsigned int EEOHLLPCOHN_TypeDefinitionIndex = 15516;

class EEOHLLPCOHN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::AGIAGHOLPCF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::CEKLDGLHPBI*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CEKLDGLHPBI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CEKLDGLHPBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CEKLDGLHPBI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::CEKLDGLHPBI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEOHLLPCOHN_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
