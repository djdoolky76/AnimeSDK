#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLKJLFCLOI;
class IAMCCGHEIJK;
class MDHABEDMBPM;
class MJCABDDEGOE;
class MJCABDDEGOE_ECLGEDENJDJ;
class OBMAPDEEEBC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAMCCGHEIJK_OEHEMIFDMCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E1AE30)
#define IAMCCGHEIJK_OEHEMIFDMCM_ENTER_OFFSET UNITYSDK_OFFSET(0x15E1E880)
#define IAMCCGHEIJK_OEHEMIFDMCM_EXIT_OFFSET UNITYSDK_OFFSET(0x15E1F090)
#define IAMCCGHEIJK_OEHEMIFDMCM_KIALBGHMMDC_OFFSET UNITYSDK_OFFSET(0x15E1F000)
#define IAMCCGHEIJK_OEHEMIFDMCM_TICK_OFFSET UNITYSDK_OFFSET(0x15E1EBE0)

	class IAMCCGHEIJK_OEHEMIFDMCM : public ::System::Object
	{
	public:
		::MDHABEDMBPM* KNPEICCHBGJ; // 0x10
		::BNLKJLFCLOI* PJBGKDHJBDA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::OBMAPDEEEBC*>* LFFCKACBEGK; // 0x20
		::MJCABDDEGOE_ECLGEDENJDJ* GNOEGILFEMD; // 0x28
		::MJCABDDEGOE* JGJMFOCIEAM; // 0x30
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_OEHEMIFDMCM_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_OEHEMIFDMCM_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_OEHEMIFDMCM_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_OEHEMIFDMCM_EXIT_OFFSET))(this);
		}

		::System::Boolean KIALBGHMMDC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_OEHEMIFDMCM_KIALBGHMMDC_OFFSET))(this, a1);
		}

	};
