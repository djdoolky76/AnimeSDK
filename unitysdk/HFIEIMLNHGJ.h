#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBLOHKONHIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CLFDHFLCJMG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFIEIMLNHGJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B122710)
#define HFIEIMLNHGJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B1224E0)
#define HFIEIMLNHGJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B122650)
#define HFIEIMLNHGJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B1227F0)
#define HFIEIMLNHGJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B1224F0)
#define HFIEIMLNHGJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B122970)
#define HFIEIMLNHGJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B122140)
#define HFIEIMLNHGJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B122120)
#define HFIEIMLNHGJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B122400)
#define HFIEIMLNHGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B122920)

inline static constexpr unsigned int HFIEIMLNHGJ_TypeDefinitionIndex = 15971;

class HFIEIMLNHGJ : public ::System::Object
{
public:
	::EBLOHKONHIH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::CLFDHFLCJMG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFIEIMLNHGJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
