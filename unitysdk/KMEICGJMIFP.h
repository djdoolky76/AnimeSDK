#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class Object; }

#define KMEICGJMIFP_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB53E6A0)
#define KMEICGJMIFP_BBOCKDKLHNK_OFFSET UNITYSDK_OFFSET(0xB53F570)
#define KMEICGJMIFP_CLKHHBNJJHH_OFFSET UNITYSDK_OFFSET(0xB53E8F0)
#define KMEICGJMIFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB53E690)
#define KMEICGJMIFP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB53EA00)
#define KMEICGJMIFP_GOFBEDNHEPP_OFFSET UNITYSDK_OFFSET(0xB53F440)
#define KMEICGJMIFP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB53E6E0)
#define KMEICGJMIFP_PPAGEAIINMC_OFFSET UNITYSDK_OFFSET(0xB53ED40)
#define KMEICGJMIFP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB53E830)
#define KMEICGJMIFP___SHOWFAILUI_B__7_0_OFFSET UNITYSDK_OFFSET(0xB53F6B0)
#define KMEICGJMIFP___SHOWSUCCESSUI_B__6_0_OFFSET UNITYSDK_OFFSET(0xB53F6A0)

inline static constexpr unsigned int KMEICGJMIFP_TypeDefinitionIndex = 76663;

	class KMEICGJMIFP : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* LLIMLCCEBAH; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::System::Boolean JBDHLNBBAAJ; // 0x28
		::System::Boolean BFEBAPJBGHE; // 0x29
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + KMEICGJMIFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_TEARDOWN_OFFSET))(this);
		}

		::System::Void CLKHHBNJJHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMEICGJMIFP_CLKHHBNJJHH_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_EXECUTE_OFFSET))(this);
		}

		::System::Void GOFBEDNHEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_GOFBEDNHEPP_OFFSET))(this);
		}

		::System::Void BBOCKDKLHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_BBOCKDKLHNK_OFFSET))(this);
		}

		::System::Boolean PPAGEAIINMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP_PPAGEAIINMC_OFFSET))(this);
		}

		::System::Void __ShowSuccessUI_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP___SHOWSUCCESSUI_B__6_0_OFFSET))(this);
		}

		::System::Void __ShowFailUI_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEICGJMIFP___SHOWFAILUI_B__7_0_OFFSET))(this);
		}

	};
