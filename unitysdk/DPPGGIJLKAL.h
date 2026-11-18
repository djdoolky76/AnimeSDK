#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCFEPEPBDFI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HLGIHILKPGL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DPPGGIJLKAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195161E0)
#define DPPGGIJLKAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19515FA0)
#define DPPGGIJLKAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19516120)
#define DPPGGIJLKAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195162C0)
#define DPPGGIJLKAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19515FB0)
#define DPPGGIJLKAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19516440)
#define DPPGGIJLKAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19516690)
#define DPPGGIJLKAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19515BF0)
#define DPPGGIJLKAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19516670)
#define DPPGGIJLKAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19515BD0)
#define DPPGGIJLKAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19515EB0)
#define DPPGGIJLKAL__CTOR_OFFSET UNITYSDK_OFFSET(0x195163F0)

inline static constexpr unsigned int DPPGGIJLKAL_TypeDefinitionIndex = 12981;

class DPPGGIJLKAL : public ::System::Object
{
public:
	::Il2CppArray<::HLGIHILKPGL*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::HCFEPEPBDFI DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_CHLEALKAOJO_OFFSET))(this);
	}

	::HLGIHILKPGL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HLGIHILKPGL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPGGIJLKAL_NAMKJOJBAOA_OFFSET))(this);
	}
};
