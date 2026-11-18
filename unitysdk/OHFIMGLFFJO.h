#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJFNNHOAHA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMOCDDEHLID;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHFIMGLFFJO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD8CB40)
#define OHFIMGLFFJO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD8C900)
#define OHFIMGLFFJO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD8CA80)
#define OHFIMGLFFJO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD8CC20)
#define OHFIMGLFFJO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD8C910)
#define OHFIMGLFFJO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD8CDC0)
#define OHFIMGLFFJO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD8CFF0)
#define OHFIMGLFFJO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD8C550)
#define OHFIMGLFFJO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD8CDA0)
#define OHFIMGLFFJO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD8C530)
#define OHFIMGLFFJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD8C810)
#define OHFIMGLFFJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8CD50)

inline static constexpr unsigned int OHFIMGLFFJO_TypeDefinitionIndex = 16179;

class OHFIMGLFFJO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::IIJFNNHOAHA DHDJDGFNBOA; // 0x28
	::Il2CppArray<::EMOCDDEHLID*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_NAMKJOJBAOA_OFFSET))(this);
	}

	::EMOCDDEHLID* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EMOCDDEHLID*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OHFIMGLFFJO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
