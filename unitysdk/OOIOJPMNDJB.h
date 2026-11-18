#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBBIFODPFDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KJDBMLGLOPD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OOIOJPMNDJB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DD3040)
#define OOIOJPMNDJB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DD2E00)
#define OOIOJPMNDJB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DD2F80)
#define OOIOJPMNDJB_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19DD3260)
#define OOIOJPMNDJB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DD3120)
#define OOIOJPMNDJB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DD2E10)
#define OOIOJPMNDJB_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19DD3350)
#define OOIOJPMNDJB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DD3530)
#define OOIOJPMNDJB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DD2A50)
#define OOIOJPMNDJB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DD3330)
#define OOIOJPMNDJB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DD2A30)
#define OOIOJPMNDJB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DD2D10)
#define OOIOJPMNDJB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD3250)

inline static constexpr unsigned int OOIOJPMNDJB_TypeDefinitionIndex = 12650;

class OOIOJPMNDJB : public ::System::Object
{
public:
	::Il2CppArray<::KJDBMLGLOPD*>* OJMBOGGMIKO; // 0x10
	::HBBIFODPFDM DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::KJDBMLGLOPD*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::KJDBMLGLOPD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_EJABHIAHIAN_OFFSET))(this);
	}

	::KJDBMLGLOPD* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KJDBMLGLOPD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OOIOJPMNDJB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
