#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFBMAGFALIG_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x157E6C50)
#define KFBMAGFALIG_CIBAMCIJEDJ_OFFSET UNITYSDK_OFFSET(0x157E6590)
#define KFBMAGFALIG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x157E6300)
#define KFBMAGFALIG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x157E6B60)
#define KFBMAGFALIG_NHCLLECONLO_OFFSET UNITYSDK_OFFSET(0x157E68A0)
#define KFBMAGFALIG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x157E6850)
#define KFBMAGFALIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x157E62F0)
#define KFBMAGFALIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E62E0)

inline static constexpr unsigned int KFBMAGFALIG_TypeDefinitionIndex = 84901;

class KFBMAGFALIG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherEntry>** StaticGet_IGMBBBJCLOL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherEntry>**)Il2CppClass::FromTypeDefinitionIndex(KFBMAGFALIG_TypeDefinitionIndex)->GetStaticField(0x51550);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry>** StaticGet_DPHNMGDCFLB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry>**)Il2CppClass::FromTypeDefinitionIndex(KFBMAGFALIG_TypeDefinitionIndex)->GetStaticField(0x51558);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMAGFALIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBMAGFALIG__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KFBMAGFALIG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean CIBAMCIJEDJ(::System::String* MIHBPMANGOH, ::MoleMole::DynamicOverrideWeatherV2Entry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry&))((::PBYTE)hIl2Cpp + KFBMAGFALIG_CIBAMCIJEDJ_OFFSET))(MIHBPMANGOH, EGEGIMGMJHN);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBMAGFALIG_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Boolean NHCLLECONLO(::System::String* MIHBPMANGOH, ::MoleMole::DynamicOverrideWeatherEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::DynamicOverrideWeatherEntry&))((::PBYTE)hIl2Cpp + KFBMAGFALIG_NHCLLECONLO_OFFSET))(MIHBPMANGOH, EGEGIMGMJHN);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KFBMAGFALIG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* HPKNOEKCHKJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>*))((::PBYTE)hIl2Cpp + KFBMAGFALIG_BBAECOMOFLL_OFFSET))(HPKNOEKCHKJ);
	}
};
