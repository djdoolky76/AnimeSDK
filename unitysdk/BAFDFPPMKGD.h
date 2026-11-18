#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGHKFAOKPNA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DCJFHNGNHIO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BAFDFPPMKGD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B98ADC0)
#define BAFDFPPMKGD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B98AB80)
#define BAFDFPPMKGD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B98AD00)
#define BAFDFPPMKGD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B98AEA0)
#define BAFDFPPMKGD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B98AB90)
#define BAFDFPPMKGD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B98B020)
#define BAFDFPPMKGD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B98A7D0)
#define BAFDFPPMKGD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B98A7B0)
#define BAFDFPPMKGD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B98AA90)
#define BAFDFPPMKGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98AFD0)

inline static constexpr unsigned int BAFDFPPMKGD_TypeDefinitionIndex = 15142;

class BAFDFPPMKGD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::DCJFHNGNHIO*>* OJMBOGGMIKO; // 0x18
	::IGHKFAOKPNA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFDFPPMKGD_CHLEALKAOJO_OFFSET))(this);
	}
};
