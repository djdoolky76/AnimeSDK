#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNIGHEEEKBB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PKGGDLEBKME;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DOCPKAIAEKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F40550)
#define DOCPKAIAEKJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F402D0)
#define DOCPKAIAEKJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F402E0)
#define DOCPKAIAEKJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F403A0)
#define DOCPKAIAEKJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F404D0)
#define DOCPKAIAEKJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19F406A0)
#define DOCPKAIAEKJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F408D0)
#define DOCPKAIAEKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F3FF30)
#define DOCPKAIAEKJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F40680)
#define DOCPKAIAEKJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F3FF10)
#define DOCPKAIAEKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F401F0)
#define DOCPKAIAEKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F40630)

inline static constexpr unsigned int DOCPKAIAEKJ_TypeDefinitionIndex = 12047;

class DOCPKAIAEKJ : public ::System::Object
{
public:
	::HNIGHEEEKBB DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::PKGGDLEBKME*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_CHLEALKAOJO_OFFSET))(this);
	}

	::PKGGDLEBKME* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PKGGDLEBKME*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DOCPKAIAEKJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
