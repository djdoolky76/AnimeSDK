#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
class MALMDHMLGDE;
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOFHFKPKKJI_AKPAGENDBPC_OFFSET UNITYSDK_OFFSET(0x16720EC0)
#define AOFHFKPKKJI_AOKFNOCKOJM_OFFSET UNITYSDK_OFFSET(0x167214B0)
#define AOFHFKPKKJI_BECEIDBKPGF_OFFSET UNITYSDK_OFFSET(0x167215D0)
#define AOFHFKPKKJI_CTOR_OFFSET UNITYSDK_OFFSET(0x16720DC0)
#define AOFHFKPKKJI_DDAKDFCBIMM_OFFSET UNITYSDK_OFFSET(0x16721560)
#define AOFHFKPKKJI_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x16721390)
#define AOFHFKPKKJI_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16721310)
#define AOFHFKPKKJI_GET_MODIFIERCONFIGUIPRIORITY_OFFSET UNITYSDK_OFFSET(0x16721350)
#define AOFHFKPKKJI_GET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x16721690)
#define AOFHFKPKKJI_GET_MODIFIERINSTANCEUIINDEX_OFFSET UNITYSDK_OFFSET(0x16721370)
#define AOFHFKPKKJI_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16720FD0)
#define AOFHFKPKKJI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16721330)
#define AOFHFKPKKJI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x16721450)
#define AOFHFKPKKJI_KHDMOKLGOMK_OFFSET UNITYSDK_OFFSET(0x167213F0)
#define AOFHFKPKKJI_KLHMDMNOACG_OFFSET UNITYSDK_OFFSET(0x16721210)
#define AOFHFKPKKJI_MIHPFKGKLIK_OFFSET UNITYSDK_OFFSET(0x16721630)
#define AOFHFKPKKJI_OMABJMOGGHN_OFFSET UNITYSDK_OFFSET(0x167216B0)
#define AOFHFKPKKJI_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x16720FF0)
#define AOFHFKPKKJI_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16721320)
#define AOFHFKPKKJI_SET_MODIFIERCONFIGUIPRIORITY_OFFSET UNITYSDK_OFFSET(0x16721360)
#define AOFHFKPKKJI_SET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x167216A0)
#define AOFHFKPKKJI_SET_MODIFIERINSTANCEUIINDEX_OFFSET UNITYSDK_OFFSET(0x16721380)
#define AOFHFKPKKJI_SET_NAME_OFFSET UNITYSDK_OFFSET(0x16720FE0)
#define AOFHFKPKKJI_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x16721340)

inline static constexpr unsigned int AOFHFKPKKJI_TypeDefinitionIndex = 83606;

	class AOFHFKPKKJI : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::WeakReference_1<::RPG::GameCore::TurnBasedModifierInstance*>* CLDNCBHCAKI; // 0x18
		::System::Collections::Generic::List_1<::MALMDHMLGDE*>* _ModifierHintList_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::Int32 _ModifierConfigUIPriority_k__BackingField; // 0x38
		::System::Int32 _ModifierInstanceUIIndex_k__BackingField; // 0x3C
		::RPG::GameCore::EnumStatusType _Type_k__BackingField; // 0x40
		// static const ::System::String* OHNPCDAGLEP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedModifierInstance* AKPAGENDBPC()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_AKPAGENDBPC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* PNLLINHJDJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_PNLLINHJDJF_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnumStatusType get_Type()
		{
			return ((::RPG::GameCore::EnumStatusType(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::EnumStatusType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierConfigUIPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_MODIFIERCONFIGUIPRIORITY_OFFSET))(this);
		}

		::System::Void set_ModifierConfigUIPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_MODIFIERCONFIGUIPRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierInstanceUIIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_MODIFIERINSTANCEUIINDEX_OFFSET))(this);
		}

		::System::Void set_ModifierInstanceUIIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_MODIFIERINSTANCEUIINDEX_OFFSET))(this, a1);
		}

		::System::Int32 EGKLFHBCGCB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_EGKLFHBCGCB_OFFSET))(this);
		}

		::System::Int32 KHDMOKLGOMK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_KHDMOKLGOMK_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean AOKFNOCKOJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_AOKFNOCKOJM_OFFSET))(this);
		}

		::System::Boolean DDAKDFCBIMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_DDAKDFCBIMM_OFFSET))(this);
		}

		::System::Int32 BECEIDBKPGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_BECEIDBKPGF_OFFSET))(this);
		}

		::System::Int32 MIHPFKGKLIK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_MIHPFKGKLIK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MALMDHMLGDE*>* get_ModifierHintList()
		{
			return ((::System::Collections::Generic::List_1<::MALMDHMLGDE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_GET_MODIFIERHINTLIST_OFFSET))(this);
		}

		::System::Void set_ModifierHintList(::System::Collections::Generic::List_1<::MALMDHMLGDE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MALMDHMLGDE*>*))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_SET_MODIFIERHINTLIST_OFFSET))(this, a1);
		}

		::System::Int32 OMABJMOGGHN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_OMABJMOGGHN_OFFSET))(this);
		}

		static ::System::Boolean KLHMDMNOACG(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + AOFHFKPKKJI_KLHMDMNOACG_OFFSET))(a1, a2);
		}

	};
