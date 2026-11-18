#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBKIANAMDGN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BIAHGGNIHDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OMODBPAENNJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1736C390)
#define OMODBPAENNJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1736C150)
#define OMODBPAENNJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1736C2D0)
#define OMODBPAENNJ_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1736C9C0)
#define OMODBPAENNJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1736C470)
#define OMODBPAENNJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1736C160)
#define OMODBPAENNJ_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1736C5F0)
#define OMODBPAENNJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1736C7F0)
#define OMODBPAENNJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1736BDA0)
#define OMODBPAENNJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1736C7D0)
#define OMODBPAENNJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1736BD80)
#define OMODBPAENNJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1736C060)
#define OMODBPAENNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1736C5A0)

inline static constexpr unsigned int OMODBPAENNJ_TypeDefinitionIndex = 16349;

class OMODBPAENNJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::BIAHGGNIHDA*>* OJMBOGGMIKO; // 0x20
	::EBKIANAMDGN DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMODBPAENNJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OMODBPAENNJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_CHLEALKAOJO_OFFSET))(this);
	}

	::BIAHGGNIHDA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BIAHGGNIHDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMODBPAENNJ_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OMODBPAENNJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BIAHGGNIHDA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BIAHGGNIHDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMODBPAENNJ_EJABHIAHIAN_OFFSET))(this);
	}
};
