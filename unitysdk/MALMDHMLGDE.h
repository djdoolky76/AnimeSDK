#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MALMDHMLGDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B4580)
#define MALMDHMLGDE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC0B4520)
#define MALMDHMLGDE_GET_HINTTYPE_OFFSET UNITYSDK_OFFSET(0xC0B4500)
#define MALMDHMLGDE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC0B4540)
#define MALMDHMLGDE_GET_UIINDEX_OFFSET UNITYSDK_OFFSET(0xC0B4560)
#define MALMDHMLGDE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC0B4530)
#define MALMDHMLGDE_SET_HINTTYPE_OFFSET UNITYSDK_OFFSET(0xC0B4510)
#define MALMDHMLGDE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC0B4550)
#define MALMDHMLGDE_SET_UIINDEX_OFFSET UNITYSDK_OFFSET(0xC0B4570)

inline static constexpr unsigned int MALMDHMLGDE_TypeDefinitionIndex = 83604;

	class MALMDHMLGDE : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::Int32 _Priority_k__BackingField; // 0x18
		::System::Int32 _UIIndex_k__BackingField; // 0x1C
		::RPG::GameCore::ModifierHintType _HintType_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MALMDHMLGDE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ModifierHintType get_HintType()
		{
			return ((::RPG::GameCore::ModifierHintType(*)(::PVOID))((::PBYTE)hIl2Cpp + MALMDHMLGDE_GET_HINTTYPE_OFFSET))(this);
		}

		::System::Void set_HintType(::RPG::GameCore::ModifierHintType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierHintType))((::PBYTE)hIl2Cpp + MALMDHMLGDE_SET_HINTTYPE_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MALMDHMLGDE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MALMDHMLGDE_SET_DESC_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALMDHMLGDE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MALMDHMLGDE_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 get_UIIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MALMDHMLGDE_GET_UIINDEX_OFFSET))(this);
		}

		::System::Void set_UIIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MALMDHMLGDE_SET_UIINDEX_OFFSET))(this, a1);
		}

	};
