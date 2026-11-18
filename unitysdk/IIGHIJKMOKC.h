#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFHFNHBBPB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PKDLLAOKGLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IIGHIJKMOKC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1934F2F0)
#define IIGHIJKMOKC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1934F0B0)
#define IIGHIJKMOKC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1934F230)
#define IIGHIJKMOKC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1934F780)
#define IIGHIJKMOKC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1934F3D0)
#define IIGHIJKMOKC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1934F0C0)
#define IIGHIJKMOKC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1934F550)
#define IIGHIJKMOKC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1934F850)
#define IIGHIJKMOKC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1934ED00)
#define IIGHIJKMOKC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1934F760)
#define IIGHIJKMOKC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1934ECE0)
#define IIGHIJKMOKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1934EFC0)
#define IIGHIJKMOKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1934F500)

inline static constexpr unsigned int IIGHIJKMOKC_TypeDefinitionIndex = 12954;

class IIGHIJKMOKC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::PKDLLAOKGLH*>* OJMBOGGMIKO; // 0x28
	::AKFHFNHBBPB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_FINALIZE_OFFSET))(this);
	}

	::PKDLLAOKGLH* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PKDLLAOKGLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PKDLLAOKGLH*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PKDLLAOKGLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IIGHIJKMOKC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
