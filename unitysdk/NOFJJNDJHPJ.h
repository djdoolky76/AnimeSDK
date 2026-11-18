#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOFJJNDJHPJ_AKHPEDCFNLD_OFFSET UNITYSDK_OFFSET(0x13170D60)
#define NOFJJNDJHPJ_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x13171960)
#define NOFJJNDJHPJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13170F60)
#define NOFJJNDJHPJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13171570)
#define NOFJJNDJHPJ_MEEGJLLNFJC_OFFSET UNITYSDK_OFFSET(0x13171660)
#define NOFJJNDJHPJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13171520)
#define NOFJJNDJHPJ_PAPMDMLHIHG_OFFSET UNITYSDK_OFFSET(0x131711F0)
#define NOFJJNDJHPJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x13170D50)
#define NOFJJNDJHPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13170D40)

inline static constexpr unsigned int NOFJJNDJHPJ_TypeDefinitionIndex = 56475;

class NOFJJNDJHPJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>** StaticGet_EFJBJGBFBFM()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>**)Il2CppClass::FromTypeDefinitionIndex(NOFJJNDJHPJ_TypeDefinitionIndex)->GetStaticField(0x42590);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>>** StaticGet_GLBBKGNHNCO()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>>**)Il2CppClass::FromTypeDefinitionIndex(NOFJJNDJHPJ_TypeDefinitionIndex)->GetStaticField(0x42598);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFJJNDJHPJ__CCTOR_OFFSET))();
	}

	static ::System::Void AKHPEDCFNLD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_AKHPEDCFNLD_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::WeatherType PAPMDMLHIHG(::System::String* DOAJPOIAPEN)
	{
		return ((::MoleMole::Config::WeatherType(*)(::System::String*))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_PAPMDMLHIHG_OFFSET))(DOAJPOIAPEN);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean MEEGJLLNFJC(::MoleMole::Config::WeatherType LBHFBKBDNHN, ::MoleMole::Config::TimePeriodType LIPBBPKOEEG, ::System::String*& MIHBPMANGOH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::String*&))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_MEEGJLLNFJC_OFFSET))(LBHFBKBDNHN, LIPBBPKOEEG, MIHBPMANGOH);
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* HPKNOEKCHKJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>*))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_BBAECOMOFLL_OFFSET))(HPKNOEKCHKJ);
	}
};
