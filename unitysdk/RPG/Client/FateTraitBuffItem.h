#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/System/Object.h"
class KDBJEKOLPDE;
class OMGHALDIJHL;
class PMAJDIAJMKG;
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitBuffItem; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xD95F780)
#define RPG_CLIENT_FATETRAITBUFFITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD95F770)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD95FE50)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD9600B0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_MODE_OFFSET UNITYSDK_OFFSET(0xD95FFF0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_REQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0xD960050)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD95FBA0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD95FEF0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TAG_OFFSET UNITYSDK_OFFSET(0xD95FF90)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0xD95FE30)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xD95FCE0)
#define RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0xD95FE40)
#define RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD95FD40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitBuffItem_TypeDefinitionIndex = 65451;

	class FateTraitBuffItem : public ::System::Object
	{
	public:
		::KDBJEKOLPDE* _Row; // 0x10
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x18
		::PMAJDIAJMKG* _DynamicParamTextData; // 0x20
		::System::UInt32 _TraitBuffID_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateTraitBuffItem* Create(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2, ::OMGHALDIJHL* a3)
		{
			return ((::RPG::Client::FateTraitBuffItem*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_TraitBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET))(this);
		}

		::System::Void set_TraitBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET))(this, a1);
		}

		::KDBJEKOLPDE* get_Row()
		{
			return ((::KDBJEKOLPDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITID_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitTag get_Tag()
		{
			return ((::RPG::GameCore::FateTraitTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TAG_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitMode get_Mode()
		{
			return ((::RPG::GameCore::FateTraitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_MODE_OFFSET))(this);
		}

		::System::UInt32 get_RequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_REQUIRECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_ISACTIVE_OFFSET))(this);
		}

	};
}
