#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomizedMonsterStanceBarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class KILLLKIAIDO;
class KLJLODIBPDF;
namespace RPG::Client { class BattleMonsterCustomizedWeaknessSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0xD1C4D50)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD1C52D0)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GETACTIVESOURCE_OFFSET UNITYSDK_OFFSET(0xD1C4DD0)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xD1C4D00)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GET_STANCEBARTYPE_OFFSET UNITYSDK_OFFSET(0xD1C4CE0)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_REMOVE_OFFSET UNITYSDK_OFFSET(0xD1C5220)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_REPLACE_OFFSET UNITYSDK_OFFSET(0xD1C4E20)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_SET_STANCEBARTYPE_OFFSET UNITYSDK_OFFSET(0xD1C4CF0)
#define RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xD1C4FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSingleMonsterCustomizedWeaknessData_TypeDefinitionIndex = 73800;

	class BattleSingleMonsterCustomizedWeaknessData : public ::System::Object
	{
	public:
		::RPG::Client::BattleMonsterCustomizedWeaknessSource* _Source; // 0x10
		::System::String* _UniqueName; // 0x18
		::RPG::GameCore::CustomizedMonsterStanceBarType _StanceBarType_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CustomizedMonsterStanceBarType get_StanceBarType()
		{
			return ((::RPG::GameCore::CustomizedMonsterStanceBarType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GET_STANCEBARTYPE_OFFSET))(this);
		}

		::System::Void set_StanceBarType(::RPG::GameCore::CustomizedMonsterStanceBarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomizedMonsterStanceBarType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_SET_STANCEBARTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_CONTAINS_OFFSET))(this, a1);
		}

		::RPG::Client::BattleMonsterCustomizedWeaknessSource* GetActiveSource()
		{
			return ((::RPG::Client::BattleMonsterCustomizedWeaknessSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_GETACTIVESOURCE_OFFSET))(this);
		}

		::System::Void Replace(::System::String* a1, ::RPG::GameCore::CustomizedMonsterStanceBarType a2, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>* a3, ::KLJLODIBPDF* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::CustomizedMonsterStanceBarType, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>*, ::KLJLODIBPDF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_REPLACE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Update(::System::String* a1, ::System::Boolean a2, ::System::Nullable_1<::System::Single> a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_UPDATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Remove(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESINGLEMONSTERCUSTOMIZEDWEAKNESSDATA_REMOVE_OFFSET))(this, a1);
		}

	};
}
