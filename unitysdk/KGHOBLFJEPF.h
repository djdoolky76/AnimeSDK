#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEAFJGEEPAN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EDHLEHIDOEN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGHOBLFJEPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B146820)
#define KGHOBLFJEPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B1465F0)
#define KGHOBLFJEPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B146760)
#define KGHOBLFJEPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B146900)
#define KGHOBLFJEPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B146600)
#define KGHOBLFJEPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B146A40)
#define KGHOBLFJEPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B146290)
#define KGHOBLFJEPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B146270)
#define KGHOBLFJEPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B146510)
#define KGHOBLFJEPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B146A30)

inline static constexpr unsigned int KGHOBLFJEPF_TypeDefinitionIndex = 13472;

class KGHOBLFJEPF : public ::System::Object
{
public:
	::Il2CppArray<::EDHLEHIDOEN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::HEAFJGEEPAN DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHOBLFJEPF_CHLEALKAOJO_OFFSET))(this);
	}
};
