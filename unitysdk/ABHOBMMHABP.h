#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIANKPBNIMI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OALFOLDDAJG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABHOBMMHABP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A6B140)
#define ABHOBMMHABP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A6AF10)
#define ABHOBMMHABP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A6B080)
#define ABHOBMMHABP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A6B220)
#define ABHOBMMHABP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A6AF20)
#define ABHOBMMHABP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A6B550)
#define ABHOBMMHABP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A6B380)
#define ABHOBMMHABP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A6AB70)
#define ABHOBMMHABP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A6B360)
#define ABHOBMMHABP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A6AB50)
#define ABHOBMMHABP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A6AE30)
#define ABHOBMMHABP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6B350)

inline static constexpr unsigned int ABHOBMMHABP_TypeDefinitionIndex = 15753;

class ABHOBMMHABP : public ::System::Object
{
public:
	::Il2CppArray<::OALFOLDDAJG*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::EIANKPBNIMI DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ABHOBMMHABP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ABHOBMMHABP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ABHOBMMHABP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHOBMMHABP_CHLEALKAOJO_OFFSET))(this);
	}

	::OALFOLDDAJG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OALFOLDDAJG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABHOBMMHABP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
