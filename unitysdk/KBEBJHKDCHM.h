#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECECOAEFKF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GDHAPAEANMP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KBEBJHKDCHM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17492440)
#define KBEBJHKDCHM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x174921C0)
#define KBEBJHKDCHM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x174921D0)
#define KBEBJHKDCHM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17492290)
#define KBEBJHKDCHM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x174923C0)
#define KBEBJHKDCHM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17492840)
#define KBEBJHKDCHM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17492590)
#define KBEBJHKDCHM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17491E20)
#define KBEBJHKDCHM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17492570)
#define KBEBJHKDCHM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17491E00)
#define KBEBJHKDCHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x174920E0)
#define KBEBJHKDCHM__CTOR_OFFSET UNITYSDK_OFFSET(0x17492520)

inline static constexpr unsigned int KBEBJHKDCHM_TypeDefinitionIndex = 12944;

class KBEBJHKDCHM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::GDHAPAEANMP*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::FECECOAEFKF DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GDHAPAEANMP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GDHAPAEANMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBEBJHKDCHM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
