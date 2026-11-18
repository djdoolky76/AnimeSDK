#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIGNPDPILEA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IDHGLIALDDD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEGLDODICDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4EB430)
#define IEGLDODICDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4EB200)
#define IEGLDODICDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4EB370)
#define IEGLDODICDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4EB510)
#define IEGLDODICDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4EB210)
#define IEGLDODICDO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4EB880)
#define IEGLDODICDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4EB6B0)
#define IEGLDODICDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4EAE60)
#define IEGLDODICDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4EB690)
#define IEGLDODICDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4EAE40)
#define IEGLDODICDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4EB120)
#define IEGLDODICDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EB640)

inline static constexpr unsigned int IEGLDODICDO_TypeDefinitionIndex = 14603;

class IEGLDODICDO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::EIGNPDPILEA DHDJDGFNBOA; // 0x18
	::Il2CppArray<::IDHGLIALDDD*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEGLDODICDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEGLDODICDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGLDODICDO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEGLDODICDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IDHGLIALDDD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IDHGLIALDDD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEGLDODICDO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
