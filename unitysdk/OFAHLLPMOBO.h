#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APOGNPMEHDK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFAHLLPMOBO_AAFGKEMLFBM_OFFSET UNITYSDK_OFFSET(0xBE3A2B0)
#define OFAHLLPMOBO_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0xBE3A900)
#define OFAHLLPMOBO_BOGEMFPOPPL_OFFSET UNITYSDK_OFFSET(0xBE3A5D0)
#define OFAHLLPMOBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE39FF0)
#define OFAHLLPMOBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE3A080)
#define OFAHLLPMOBO_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xBE3A940)
#define OFAHLLPMOBO_PALNHOCIHDK_OFFSET UNITYSDK_OFFSET(0xBE3A7C0)

inline static constexpr unsigned int OFAHLLPMOBO_TypeDefinitionIndex = 60224;

	class OFAHLLPMOBO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BMFEMCEAFBP; // 0x10
		::System::Boolean CNNEAPBBDIP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_DISPOSE_OFFSET))(this);
		}

		::System::Void AAFGKEMLFBM(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::APOGNPMEHDK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::APOGNPMEHDK*))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_AAFGKEMLFBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOGEMFPOPPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_BOGEMFPOPPL_OFFSET))(this);
		}

		::System::Void PALNHOCIHDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_PALNHOCIHDK_OFFSET))(this, a1);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAHLLPMOBO_NIBJNBCAAIA_OFFSET))(this);
		}

	};
