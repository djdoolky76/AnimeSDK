#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LOFBEFDOAPO.h"
#include "unitysdk/System/Object.h"

class NELNIMNNGCK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOHNIHDOBHK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4E0A80)
#define GOHNIHDOBHK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4E0840)
#define GOHNIHDOBHK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4E09C0)
#define GOHNIHDOBHK_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A4E0D60)
#define GOHNIHDOBHK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4E0B60)
#define GOHNIHDOBHK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4E0850)
#define GOHNIHDOBHK_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A4E0E50)
#define GOHNIHDOBHK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4E1020)
#define GOHNIHDOBHK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4E04F0)
#define GOHNIHDOBHK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4E0E30)
#define GOHNIHDOBHK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4E04D0)
#define GOHNIHDOBHK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4E0750)
#define GOHNIHDOBHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E0C90)

inline static constexpr unsigned int GOHNIHDOBHK_TypeDefinitionIndex = 12084;

class GOHNIHDOBHK : public ::System::Object
{
public:
	::LOFBEFDOAPO DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::NELNIMNNGCK*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::NELNIMNNGCK*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::NELNIMNNGCK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_NAMKJOJBAOA_OFFSET))(this);
	}

	::NELNIMNNGCK* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::NELNIMNNGCK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOHNIHDOBHK_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
