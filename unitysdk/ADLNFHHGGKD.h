#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OPJKJMFPMKH.h"
#include "unitysdk/System/Object.h"

class LLBJLHGDLOD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADLNFHHGGKD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17744010)
#define ADLNFHHGGKD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17743DE0)
#define ADLNFHHGGKD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17743F50)
#define ADLNFHHGGKD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x177440F0)
#define ADLNFHHGGKD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17743DF0)
#define ADLNFHHGGKD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17744230)
#define ADLNFHHGGKD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17743A40)
#define ADLNFHHGGKD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17743A20)
#define ADLNFHHGGKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17743D00)
#define ADLNFHHGGKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17744220)

inline static constexpr unsigned int ADLNFHHGGKD_TypeDefinitionIndex = 11187;

class ADLNFHHGGKD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::OPJKJMFPMKH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::LLBJLHGDLOD*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNFHHGGKD_CHLEALKAOJO_OFFSET))(this);
	}
};
