#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNJKHPMDMBP_AFNNJDNFAGA_OFFSET UNITYSDK_OFFSET(0xC33A9D0)
#define PNJKHPMDMBP_CBDGOGAJJAA_OFFSET UNITYSDK_OFFSET(0xC33A790)
#define PNJKHPMDMBP_CCTOR_OFFSET UNITYSDK_OFFSET(0xC33BB80)
#define PNJKHPMDMBP_LNJBKCCGMJC_OFFSET UNITYSDK_OFFSET(0xC33B260)

	class PNJKHPMDMBP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FHAECKKMCCN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "PNJKHPMDMBP")->GetStaticField(0x6FEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNJKHPMDMBP_CCTOR_OFFSET))();
		}

		static ::System::Void CBDGOGAJJAA(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJKHPMDMBP_CBDGOGAJJAA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AFNNJDNFAGA(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJKHPMDMBP_AFNNJDNFAGA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LNJBKCCGMJC(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNJKHPMDMBP_LNJBKCCGMJC_OFFSET))(a1, a2, a3, a4);
		}

	};
