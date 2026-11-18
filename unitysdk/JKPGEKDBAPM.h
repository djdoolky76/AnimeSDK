#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPDEDCPMAFM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MLILBAKCGJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JKPGEKDBAPM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1611A740)
#define JKPGEKDBAPM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1611A4C0)
#define JKPGEKDBAPM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1611A4D0)
#define JKPGEKDBAPM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1611AA70)
#define JKPGEKDBAPM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1611A590)
#define JKPGEKDBAPM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1611A6C0)
#define JKPGEKDBAPM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1611A890)
#define JKPGEKDBAPM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1611AB40)
#define JKPGEKDBAPM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1611A110)
#define JKPGEKDBAPM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1611A870)
#define JKPGEKDBAPM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1611A0F0)
#define JKPGEKDBAPM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1611A3D0)
#define JKPGEKDBAPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1611A820)

inline static constexpr unsigned int JKPGEKDBAPM_TypeDefinitionIndex = 10009;

class JKPGEKDBAPM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::EPDEDCPMAFM DHDJDGFNBOA; // 0x28
	::Il2CppArray<::MLILBAKCGJA*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_NAMKJOJBAOA_OFFSET))(this);
	}

	::MLILBAKCGJA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MLILBAKCGJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MLILBAKCGJA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MLILBAKCGJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPGEKDBAPM_CHLEALKAOJO_OFFSET))(this);
	}
};
