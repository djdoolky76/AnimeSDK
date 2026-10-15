#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BattleAssetPreload; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGGEFMPCOLN_AJMACDJHGHE_OFFSET UNITYSDK_OFFSET(0x1575DB60)
#define FGGEFMPCOLN_BCPOKGLOLOC_OFFSET UNITYSDK_OFFSET(0x1575DBE0)
#define FGGEFMPCOLN_CKOCCOFBBNK_1_OFFSET UNITYSDK_OFFSET(0x1575D750)
#define FGGEFMPCOLN_CKOCCOFBBNK_OFFSET UNITYSDK_OFFSET(0x1575D550)
#define FGGEFMPCOLN_EMPJKLCECFH_OFFSET UNITYSDK_OFFSET(0x1575CEA0)
#define FGGEFMPCOLN_HFLGAELOHNI_OFFSET UNITYSDK_OFFSET(0x1575D6A0)
#define FGGEFMPCOLN_KALIOKHPGLL_OFFSET UNITYSDK_OFFSET(0x1575D2D0)

inline static constexpr unsigned int FGGEFMPCOLN_TypeDefinitionIndex = 59674;

	class FGGEFMPCOLN : public ::System::Object
	{
	public:
		static ::System::Void EMPJKLCECFH(::RPG::Client::BattleAssetPreload* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_EMPJKLCECFH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void KALIOKHPGLL(::RPG::Client::BattleAssetPreload* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_KALIOKHPGLL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CKOCCOFBBNK(::RPG::Client::BattleAssetPreload* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_CKOCCOFBBNK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CKOCCOFBBNK_1(::RPG::Client::BattleAssetPreload* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_CKOCCOFBBNK_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 AJMACDJHGHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_AJMACDJHGHE_OFFSET))(a1);
		}

		static ::System::Void HFLGAELOHNI(::RPG::Client::BattleAssetPreload* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a3, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::Il2CppArray<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_HFLGAELOHNI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BCPOKGLOLOC(::RPG::Client::BattleAssetPreload* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::Client::BattleAssetPreload*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FGGEFMPCOLN_BCPOKGLOLOC_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
