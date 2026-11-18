#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JODJCPEIIHG;
namespace MoleMole::Config { class ConfigTriggerCache; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKHFNCCLAHH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x17A56D50)
#define HKHFNCCLAHH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x17A56C20)
#define HKHFNCCLAHH_KBHFIHOHNLD_OFFSET UNITYSDK_OFFSET(0x17A56DA0)
#define HKHFNCCLAHH_NJFAAFDICHG_OFFSET UNITYSDK_OFFSET(0x17A56FC0)

inline static constexpr unsigned int HKHFNCCLAHH_TypeDefinitionIndex = 71490;

class HKHFNCCLAHH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigTriggerCache*>*>** StaticGet_NEJOIHMBGPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigTriggerCache*>*>**)Il2CppClass::FromTypeDefinitionIndex(HKHFNCCLAHH_TypeDefinitionIndex)->GetStaticField(0x4D0A0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void KBHFIHOHNLD(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_KBHFIHOHNLD_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void NJFAAFDICHG(::System::Collections::Generic::List_1<::System::String*>* JHILIEPBPOG, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*&))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_NJFAAFDICHG_OFFSET))(JHILIEPBPOG, IGAAKDOIPNN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HKHFNCCLAHH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
