#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRole_GridFightRoleBuilder.h"
class ADLOAGJAOAN;
class BBBAFPOIMLI;
class KJHOBKCJPMB;
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BBBAFPOIMLI_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15E80F00)
#define BBBAFPOIMLI_CLEAR_OFFSET UNITYSDK_OFFSET(0x15E81110)
#define BBBAFPOIMLI_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x15E811A0)
#define BBBAFPOIMLI_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15E812B0)
#define BBBAFPOIMLI_CREATEEQUIPITEMS_OFFSET UNITYSDK_OFFSET(0x15E81540)
#define BBBAFPOIMLI_CREATEPROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x15E81220)
#define BBBAFPOIMLI_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15E813B0)
#define BBBAFPOIMLI_CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x15E815E0)
#define BBBAFPOIMLI_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0x15E81440)
#define BBBAFPOIMLI_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0x15E816A0)
#define BBBAFPOIMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E81750)
#define BBBAFPOIMLI_IPCMLHNOBOD_OFFSET UNITYSDK_OFFSET(0x15E810C0)

inline static constexpr unsigned int BBBAFPOIMLI_TypeDefinitionIndex = 65115;

	class BBBAFPOIMLI : public ::RPG::Client::GridFightRole_GridFightRoleBuilder
	{
	public:
		::RPG::GameCore::BattleGridFightAvatarData* INONCCKFAEH; // 0x28
		::RPG::Client::GridFightBattleGameContext* GDCKBJKFJEH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CTOR_OFFSET))(this);
		}

		static ::BBBAFPOIMLI* ACMKLFOMPFC(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::BBBAFPOIMLI*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_ACMKLFOMPFC_OFFSET))(a1);
		}

		::System::Void IPCMLHNOBOD(::RPG::Client::GridFightBattleGameContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleGameContext*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_IPCMLHNOBOD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CLEAR_OFFSET))(this);
		}

		::KJHOBKCJPMB* CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::KJHOBKCJPMB*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
		}

		::ADLOAGJAOAN* CreatePropertyProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::ADLOAGJAOAN*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEPROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATETRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEVALUECOMPONENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* CreateEquipItems(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEEQUIPITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* CreateTraits(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATETRAITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* CreateValueMap(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + BBBAFPOIMLI_CREATEVALUEMAP_OFFSET))(this, a1);
		}

	};
