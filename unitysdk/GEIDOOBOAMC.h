#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonQTETaskInputType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEIDOOBOAMC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11DA08C0)
#define GEIDOOBOAMC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11DA1130)
#define GEIDOOBOAMC_GJDCJHMILBB_OFFSET UNITYSDK_OFFSET(0x11DA0360)
#define GEIDOOBOAMC_MIBEBGEJEAE_OFFSET UNITYSDK_OFFSET(0x11DA0FE0)
#define GEIDOOBOAMC_NNLEGJMMEKA_OFFSET UNITYSDK_OFFSET(0x11DA0610)
#define GEIDOOBOAMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA0240)

inline static constexpr unsigned int GEIDOOBOAMC_TypeDefinitionIndex = 54483;

class GEIDOOBOAMC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>** StaticGet_MHGLJKKJCPC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>**)Il2CppClass::FromTypeDefinitionIndex(GEIDOOBOAMC_TypeDefinitionIndex)->GetStaticField(0x4F4F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>** StaticGet_CAEBLEFLPIA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>**)Il2CppClass::FromTypeDefinitionIndex(GEIDOOBOAMC_TypeDefinitionIndex)->GetStaticField(0x4F4F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIDOOBOAMC__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::RealtimeQTETaskEntryBase* GJDCJHMILBB(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::RealtimeQTETaskEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_GJDCJHMILBB_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Config::RealtimeQTEStyleEntryBase* NNLEGJMMEKA(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::RealtimeQTEStyleEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_NNLEGJMMEKA_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean MIBEBGEJEAE(::MoleMole::ButtonQTETaskInputType DBJAKFCAJFO, ::MoleMole::LogicButtonInputType& GLIPLEKODIL, ::MoleMole::InputActionEventType& INMOBMEDEPP, ::MoleMole::InputLogicEventType& DHNEEJCNAID)
	{
		return ((::System::Boolean(*)(::MoleMole::ButtonQTETaskInputType, ::MoleMole::LogicButtonInputType&, ::MoleMole::InputActionEventType&, ::MoleMole::InputLogicEventType&))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_MIBEBGEJEAE_OFFSET))(DBJAKFCAJFO, GLIPLEKODIL, INMOBMEDEPP, DHNEEJCNAID);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
