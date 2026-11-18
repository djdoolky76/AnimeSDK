#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/NPCCrowd/NPCCrowdUtils_CrowdWeatherTypeFlag.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;
class DOCIGCANGFO;
class GIGFDLPMNND;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDUTILS_APPLYCURRENTTIMEPERIODTAG_OFFSET UNITYSDK_OFFSET(0x10049630)
#define NPCCROWD_NPCCROWDUTILS_APPLYTIMEPERIODTAG_OFFSET UNITYSDK_OFFSET(0x10049730)
#define NPCCROWD_NPCCROWDUTILS_CONVERTWEATHERTYPETOFLAG_OFFSET UNITYSDK_OFFSET(0x10049500)
#define NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1003A270)
#define NPCCROWD_NPCCROWDUTILS_GETCURRENTTIMEPERIODFORTAGSYNC_OFFSET UNITYSDK_OFFSET(0x10049A30)
#define NPCCROWD_NPCCROWDUTILS_GETCURTIMEDATA_OFFSET UNITYSDK_OFFSET(0x100490E0)
#define NPCCROWD_NPCCROWDUTILS_GETCURWEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x10049450)
#define NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10048CD0)
#define NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10048A90)
#define NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x10049070)
#define NPCCROWD_NPCCROWDUTILS_ISGPUMODEENABLEDINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x10048F10)
#define NPCCROWD_NPCCROWDUTILS_MATCHWEATHERFLAG_OFFSET UNITYSDK_OFFSET(0x10049560)
#define NPCCROWD_NPCCROWDUTILS_STATIC_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x10049400)
#define NPCCROWD_NPCCROWDUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x10049C50)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_TypeDefinitionIndex = 63472;

	class NPCCrowdUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::ProtoScript::TimePeriodType, ::Foundation::Unreal::FGameplayTag>** StaticGet_TimePeriodTagCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::ProtoScript::TimePeriodType, ::Foundation::Unreal::FGameplayTag>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdUtils_TypeDefinitionIndex)->GetStaticField(0x3CC90);
		}
		static ::System::Boolean* StaticGet__timePeriodTagCacheBuilt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdUtils_TypeDefinitionIndex)->GetStaticField(0xDEA0);
		}
		// static const ::System::Int32 INVALID_ID = 0x0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetTagComponent(::System::UInt32 entityID, ::DOCIGCANGFO*& tagComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::DOCIGCANGFO*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET))(entityID, tagComponent);
		}

		static ::System::Boolean GetCrowdComponent(::System::UInt32 entityID, ::COCJHGGDBCA*& crowdComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET))(entityID, crowdComponent);
		}

		static ::System::Boolean GetMaterialComponent(::System::UInt32 entityID, ::GIGFDLPMNND*& matComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::GIGFDLPMNND*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET))(entityID, matComponent);
		}

		static ::System::Boolean IsGpuModeEnabledInCurrentScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_ISGPUMODEENABLEDINCURRENTSCENE_OFFSET))();
		}

		static ::System::Boolean IsCrowdStreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET))();
		}

		static ::System::Void GetCurTimeData(::ProtoScript::TimePeriodType& period, ::System::DayOfWeek& dayOfWeek)
		{
			return ((::System::Void(*)(::ProtoScript::TimePeriodType&, ::System::DayOfWeek&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURTIMEDATA_OFFSET))(period, dayOfWeek);
		}

		static ::System::Void GetCurWeatherType(::MoleMole::Config::WeatherType& weatherType)
		{
			return ((::System::Void(*)(::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURWEATHERTYPE_OFFSET))(weatherType);
		}

		static ::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag ConvertWeatherTypeToFlag(::MoleMole::Config::WeatherType weatherType)
		{
			return ((::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag(*)(::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_CONVERTWEATHERTYPETOFLAG_OFFSET))(weatherType);
		}

		static ::System::Boolean MatchWeatherFlag(::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag weatherFlags, ::MoleMole::Config::WeatherType weatherType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::NPCCrowdUtils_CrowdWeatherTypeFlag, ::MoleMole::Config::WeatherType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_MATCHWEATHERFLAG_OFFSET))(weatherFlags, weatherType);
		}

		static ::System::Boolean ApplyCurrentTimePeriodTag(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_APPLYCURRENTTIMEPERIODTAG_OFFSET))(entityID);
		}

		static ::System::Boolean ApplyTimePeriodTag(::DOCIGCANGFO* tagComponent, ::ProtoScript::TimePeriodType period)
		{
			return ((::System::Boolean(*)(::DOCIGCANGFO*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_APPLYTIMEPERIODTAG_OFFSET))(tagComponent, period);
		}

		static ::System::Void GetCurrentTimePeriodForTagSync(::ProtoScript::TimePeriodType& period)
		{
			return ((::System::Void(*)(::ProtoScript::TimePeriodType&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCURRENTTIMEPERIODFORTAGSYNC_OFFSET))(period);
		}

		static ::ProtoScript::TimePeriodType Static_ConvertFrom(::GIFOBKBCCMA gameDayPeriod)
		{
			return ((::ProtoScript::TimePeriodType(*)(::GIFOBKBCCMA))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_STATIC_CONVERTFROM_OFFSET))(gameDayPeriod);
		}
	};
}
