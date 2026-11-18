#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace MoleMole::Config { class ConfigEntitySkills; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIILFPLEBHA_AKHHFAMJNCN_OFFSET UNITYSDK_OFFSET(0xE1A0D80)
#define NIILFPLEBHA_BKENLPGDDKP_OFFSET UNITYSDK_OFFSET(0xE1A0B70)
#define NIILFPLEBHA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE1A1720)
#define NIILFPLEBHA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE1A1630)
#define NIILFPLEBHA_FBBFCCKAFCH_OFFSET UNITYSDK_OFFSET(0xE1A0FC0)
#define NIILFPLEBHA_GEEPPNBIKHF_OFFSET UNITYSDK_OFFSET(0xE1A08F0)
#define NIILFPLEBHA_GIJMACMPLKP_OFFSET UNITYSDK_OFFSET(0xE1A1820)
#define NIILFPLEBHA_NIDBCKIIMJK_OFFSET UNITYSDK_OFFSET(0xE1A0610)
#define NIILFPLEBHA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xE1A08A0)
#define NIILFPLEBHA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1A0600)

inline static constexpr unsigned int NIILFPLEBHA_TypeDefinitionIndex = 79067;

class NIILFPLEBHA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>** StaticGet_HIPIGKIBMGG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>**)Il2CppClass::FromTypeDefinitionIndex(NIILFPLEBHA_TypeDefinitionIndex)->GetStaticField(0x3C960);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule>** StaticGet_GKBFKDNONHI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule>**)Il2CppClass::FromTypeDefinitionIndex(NIILFPLEBHA_TypeDefinitionIndex)->GetStaticField(0x3C968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIILFPLEBHA__CCTOR_OFFSET))();
	}

	static ::System::Boolean NIDBCKIIMJK(::System::String* MCOHLHMKLIP, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule&))((::PBYTE)hIl2Cpp + NIILFPLEBHA_NIDBCKIIMJK_OFFSET))(MCOHLHMKLIP, LJBPECKCCEA);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIILFPLEBHA_NPOLNFDBOOD_OFFSET))();
	}

	static ::MoleMole::Config::ConfigEntitySkill* GEEPPNBIKHF(::System::String* AADJPMHPNAH)
	{
		return ((::MoleMole::Config::ConfigEntitySkill*(*)(::System::String*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_GEEPPNBIKHF_OFFSET))(AADJPMHPNAH);
	}

	static ::System::Void BKENLPGDDKP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_BKENLPGDDKP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean AKHHFAMJNCN(::System::String* AADJPMHPNAH)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_AKHHFAMJNCN_OFFSET))(AADJPMHPNAH);
	}

	static ::System::Void FBBFCCKAFCH(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>* FGAACFKGCFI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySkills*>*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_FBBFCCKAFCH_OFFSET))(FGAACFKGCFI);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void GIJMACMPLKP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_GIJMACMPLKP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
