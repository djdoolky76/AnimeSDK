#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKLOKLKOCNO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DGEODAJBFML;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MJANIDOIDOE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17346CE0)
#define MJANIDOIDOE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17346AA0)
#define MJANIDOIDOE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17346C20)
#define MJANIDOIDOE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17346DC0)
#define MJANIDOIDOE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17346AB0)
#define MJANIDOIDOE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17346F40)
#define MJANIDOIDOE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x173466F0)
#define MJANIDOIDOE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x173466D0)
#define MJANIDOIDOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x173469B0)
#define MJANIDOIDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x17346EF0)

inline static constexpr unsigned int MJANIDOIDOE_TypeDefinitionIndex = 11917;

class MJANIDOIDOE : public ::System::Object
{
public:
	::JKLOKLKOCNO DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::DGEODAJBFML*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MJANIDOIDOE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MJANIDOIDOE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJANIDOIDOE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MJANIDOIDOE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
