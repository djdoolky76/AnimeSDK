#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMOKIJCNBBL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EOJDBGJIBHM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EOJEPIFAOFJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AEC340)
#define EOJEPIFAOFJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AEC100)
#define EOJEPIFAOFJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AEC280)
#define EOJEPIFAOFJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AEC420)
#define EOJEPIFAOFJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AEC110)
#define EOJEPIFAOFJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AEC5C0)
#define EOJEPIFAOFJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AEC7F0)
#define EOJEPIFAOFJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AEBD50)
#define EOJEPIFAOFJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AEC5A0)
#define EOJEPIFAOFJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AEBD30)
#define EOJEPIFAOFJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AEC010)
#define EOJEPIFAOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEC550)

inline static constexpr unsigned int EOJEPIFAOFJ_TypeDefinitionIndex = 13650;

class EOJEPIFAOFJ : public ::System::Object
{
public:
	::FMOKIJCNBBL DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::EOJDBGJIBHM*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::EOJDBGJIBHM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EOJDBGJIBHM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EOJEPIFAOFJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
