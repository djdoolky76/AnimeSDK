#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLKBKFPPDB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FHFHIMOKGGJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IICIEJDKMAK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5DE4F0)
#define IICIEJDKMAK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5DE290)
#define IICIEJDKMAK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5DE430)
#define IICIEJDKMAK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5DE5D0)
#define IICIEJDKMAK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5DE2A0)
#define IICIEJDKMAK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5DDEF0)
#define IICIEJDKMAK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5DDED0)
#define IICIEJDKMAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5DE1B0)
#define IICIEJDKMAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5DE700)

inline static constexpr unsigned int IICIEJDKMAK_TypeDefinitionIndex = 10114;

class IICIEJDKMAK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::FHFHIMOKGGJ*>* OJMBOGGMIKO; // 0x20
	::INLKBKFPPDB DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IICIEJDKMAK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IICIEJDKMAK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICIEJDKMAK_CHLEALKAOJO_OFFSET))(this);
	}
};
