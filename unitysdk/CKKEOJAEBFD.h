#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
class CKKEOJAEBFD;
class NHLGPCOOCMA;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKKEOJAEBFD_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xD760BC0)
#define CKKEOJAEBFD_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xD7609C0)
#define CKKEOJAEBFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD760390)
#define CKKEOJAEBFD_CTOR_OFFSET UNITYSDK_OFFSET(0xD760440)
#define CKKEOJAEBFD_FHFMMFPGNOF_1_OFFSET UNITYSDK_OFFSET(0xD760480)
#define CKKEOJAEBFD_FHFMMFPGNOF_OFFSET UNITYSDK_OFFSET(0xD760A70)
#define CKKEOJAEBFD_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xD760E40)

	class CKKEOJAEBFD : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x10
		::System::Collections::Generic::List_1<::NHLGPCOOCMA*>* GGGKAACPPJF; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* ILDKEOAMPAO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_CTOR_OFFSET))(this);
		}

		static ::CKKEOJAEBFD* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::System::Collections::Generic::IEnumerable_1<::NHLGPCOOCMA*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::CKKEOJAEBFD*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::Collections::Generic::IEnumerable_1<::NHLGPCOOCMA*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::CKKEOJAEBFD* BPLPBPMEODA_1(::RPG::Client::NavMap::IMapDataSource* a1, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::CKKEOJAEBFD*(*)(::RPG::Client::NavMap::IMapDataSource*, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_BPLPBPMEODA_1_OFFSET))(a1, a2, a3);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_OKPLPEELPBC_OFFSET))(this);
		}

		::System::Void FHFMMFPGNOF(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_FHFMMFPGNOF_OFFSET))(this, a1);
		}

		::System::Void FHFMMFPGNOF_1(::System::Collections::Generic::IEnumerable_1<::NHLGPCOOCMA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::NHLGPCOOCMA*>*))((::PBYTE)hIl2Cpp + CKKEOJAEBFD_FHFMMFPGNOF_1_OFFSET))(this, a1);
		}

	};
