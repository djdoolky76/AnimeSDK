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

#define IAMCCGHEIJK_OEHEMIFDMCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0DEF0)
#define IAMCCGHEIJK_OEHEMIFDMCM_ENTER_OFFSET UNITYSDK_OFFSET(0x15E11960)
#define IAMCCGHEIJK_OEHEMIFDMCM_EXIT_OFFSET UNITYSDK_OFFSET(0x15E12170)
#define IAMCCGHEIJK_OEHEMIFDMCM_KIALBGHMMDC_OFFSET UNITYSDK_OFFSET(0x15E120E0)
#define IAMCCGHEIJK_OEHEMIFDMCM_TICK_OFFSET UNITYSDK_OFFSET(0x15E11CC0)

inline static constexpr unsigned int IAMCCGHEIJK_OEHEMIFDMCM_TypeDefinitionIndex = 62288;

	class IAMCCGHEIJK_OEHEMIFDMCM : public ::System::Object
	{
	public:
		::MJCABDDEGOE_ECLGEDENJDJ* GNOEGILFEMD; // 0x10
		::MJCABDDEGOE* JGJMFOCIEAM; // 0x18
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x20
		::BNLKJLFCLOI* PJBGKDHJBDA; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::OBMAPDEEEBC*>* LFFCKACBEGK; // 0x30
		::MDHABEDMBPM* KNPEICCHBGJ; // 0x38
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
