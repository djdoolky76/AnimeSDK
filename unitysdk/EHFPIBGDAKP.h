#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PamChatQuickFunctionConfigRow; }

#define EHFPIBGDAKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15499B80)
#define EHFPIBGDAKP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15499BD0)
#define EHFPIBGDAKP_GET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x15499BF0)
#define EHFPIBGDAKP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15499BB0)
#define EHFPIBGDAKP_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15499BE0)
#define EHFPIBGDAKP_SET_SENDTEXT_OFFSET UNITYSDK_OFFSET(0x15499C00)
#define EHFPIBGDAKP_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x15499BC0)

inline static constexpr unsigned int EHFPIBGDAKP_TypeDefinitionIndex = 63288;

	class EHFPIBGDAKP : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Name_k__BackingField; // 0x10
		::RPG::Client::PamChatQuickFunctionType _Type_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _SendText_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::PamChatQuickFunctionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PamChatQuickFunctionConfigRow*))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PamChatQuickFunctionType get_Type()
		{
			return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::PamChatQuickFunctionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SendText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_GET_SENDTEXT_OFFSET))(this);
		}

		::System::Void set_SendText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EHFPIBGDAKP_SET_SENDTEXT_OFFSET))(this, a1);
		}

	};
