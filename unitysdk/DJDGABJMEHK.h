#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/ONGCJMAGLJC.h"
#include "unitysdk/System/Object.h"

class FNMNGEICFEF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DJDGABJMEHK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9A81B0)
#define DJDGABJMEHK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9A7F70)
#define DJDGABJMEHK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9A80F0)
#define DJDGABJMEHK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9A8290)
#define DJDGABJMEHK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9A7F80)
#define DJDGABJMEHK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9A8410)
#define DJDGABJMEHK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9A7BC0)
#define DJDGABJMEHK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9A7BA0)
#define DJDGABJMEHK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9A7E80)
#define DJDGABJMEHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A83C0)

inline static constexpr unsigned int DJDGABJMEHK_TypeDefinitionIndex = 17661;

class DJDGABJMEHK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::ONGCJMAGLJC DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::FNMNGEICFEF*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DJDGABJMEHK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DJDGABJMEHK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDGABJMEHK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DJDGABJMEHK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
