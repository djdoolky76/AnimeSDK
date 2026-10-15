#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
class NHLGPCOOCMA;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PICMINKDDFA_FMAKAHMBAPF_1_OFFSET UNITYSDK_OFFSET(0xC25CF60)
#define PICMINKDDFA_FMAKAHMBAPF_2_OFFSET UNITYSDK_OFFSET(0xC25CFF0)
#define PICMINKDDFA_FMAKAHMBAPF_OFFSET UNITYSDK_OFFSET(0xC25CD50)

inline static constexpr unsigned int PICMINKDDFA_TypeDefinitionIndex = 74598;

	class PICMINKDDFA : public ::System::Object
	{
	public:
		static ::NHLGPCOOCMA* FMAKAHMBAPF(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::NHLGPCOOCMA*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + PICMINKDDFA_FMAKAHMBAPF_OFFSET))(a1, a2, a3);
		}

		static ::NHLGPCOOCMA* FMAKAHMBAPF_1(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfos* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::NHLGPCOOCMA*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfos*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + PICMINKDDFA_FMAKAHMBAPF_1_OFFSET))(a1, a2, a3);
		}

		static ::NHLGPCOOCMA* FMAKAHMBAPF_2(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::NHLGPCOOCMA*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + PICMINKDDFA_FMAKAHMBAPF_2_OFFSET))(a1, a2, a3);
		}

	};
