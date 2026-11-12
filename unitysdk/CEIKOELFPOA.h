#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
class CEIKOELFPOA;
class NHLGPCOOCMA;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEIKOELFPOA_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xD3465E0)
#define CEIKOELFPOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD3463A0)
#define CEIKOELFPOA_CTOR_OFFSET UNITYSDK_OFFSET(0xD346450)
#define CEIKOELFPOA_FHFMMFPGNOF_OFFSET UNITYSDK_OFFSET(0xD346490)
#define CEIKOELFPOA_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xD346860)

inline static constexpr unsigned int CEIKOELFPOA_TypeDefinitionIndex = 76748;

	class CEIKOELFPOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* ILDKEOAMPAO; // 0x10
		::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x18
		::System::Collections::Generic::List_1<::NHLGPCOOCMA*>* GGGKAACPPJF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKOELFPOA_CTOR_OFFSET))(this);
		}

		static ::CEIKOELFPOA* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::CEIKOELFPOA*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CEIKOELFPOA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKOELFPOA_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKOELFPOA_OKPLPEELPBC_OFFSET))(this);
		}

		::System::Void FHFMMFPGNOF(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + CEIKOELFPOA_FHFMMFPGNOF_OFFSET))(this, a1);
		}

	};
