#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNLILOHLKCP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ILNJKEHHFNG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FLMMNIKJKIB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4C9140)
#define FLMMNIKJKIB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4C8F00)
#define FLMMNIKJKIB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4C9080)
#define FLMMNIKJKIB_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A4C93A0)
#define FLMMNIKJKIB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4C9220)
#define FLMMNIKJKIB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4C8F10)
#define FLMMNIKJKIB_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A4C9490)
#define FLMMNIKJKIB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4C9670)
#define FLMMNIKJKIB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4C8B50)
#define FLMMNIKJKIB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4C9470)
#define FLMMNIKJKIB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4C8B30)
#define FLMMNIKJKIB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4C8E10)
#define FLMMNIKJKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C9350)

inline static constexpr unsigned int FLMMNIKJKIB_TypeDefinitionIndex = 17604;

class FLMMNIKJKIB : public ::System::Object
{
public:
	::Il2CppArray<::ILNJKEHHFNG*>* OJMBOGGMIKO; // 0x10
	::HNLILOHLKCP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ILNJKEHHFNG*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ILNJKEHHFNG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_EJABHIAHIAN_OFFSET))(this);
	}

	::ILNJKEHHFNG* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ILNJKEHHFNG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMMNIKJKIB_CHLEALKAOJO_OFFSET))(this);
	}
};
