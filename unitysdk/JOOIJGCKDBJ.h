#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PNPKOEAFIEH.h"
#include "unitysdk/System/Object.h"

class GBDLLCIADLL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JOOIJGCKDBJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4FDA00)
#define JOOIJGCKDBJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4FD7C0)
#define JOOIJGCKDBJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4FD940)
#define JOOIJGCKDBJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4FDAE0)
#define JOOIJGCKDBJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4FD7D0)
#define JOOIJGCKDBJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4FDC60)
#define JOOIJGCKDBJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4FD410)
#define JOOIJGCKDBJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4FD3F0)
#define JOOIJGCKDBJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4FD6D0)
#define JOOIJGCKDBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FDC10)

inline static constexpr unsigned int JOOIJGCKDBJ_TypeDefinitionIndex = 9557;

class JOOIJGCKDBJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::PNPKOEAFIEH DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GBDLLCIADLL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIJGCKDBJ_CHLEALKAOJO_OFFSET))(this);
	}
};
