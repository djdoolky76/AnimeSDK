#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNDIFMAINIM;
namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LFIANKBMPJJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1998B9E0)
#define LFIANKBMPJJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1998B730)
#define LFIANKBMPJJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1998B8F0)
#define LFIANKBMPJJ_ECIGHMMFFHE_OFFSET UNITYSDK_OFFSET(0x1998BBD0)
#define LFIANKBMPJJ_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1998BBC0)

inline static constexpr unsigned int LFIANKBMPJJ_TypeDefinitionIndex = 39995;

class LFIANKBMPJJ : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMonsterAlerts** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigMonsterAlerts**)Il2CppClass::FromTypeDefinitionIndex(LFIANKBMPJJ_TypeDefinitionIndex)->GetStaticField(0x446F0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigMonsterAlerts* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMonsterAlerts*(*)())((::PBYTE)hIl2Cpp + LFIANKBMPJJ_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigMonsterAlerts* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::PNDIFMAINIM* ECIGHMMFFHE(::System::String* MCOHLHMKLIP)
	{
		return ((::PNDIFMAINIM*(*)(::System::String*))((::PBYTE)hIl2Cpp + LFIANKBMPJJ_ECIGHMMFFHE_OFFSET))(MCOHLHMKLIP);
	}
};
