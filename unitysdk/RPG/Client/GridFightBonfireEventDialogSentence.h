#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonfireEventDialogSentence; }
namespace RPG::GameCore { class GridFightBonfireEventDialogConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_CREATE_OFFSET UNITYSDK_OFFSET(0xDA7ED00)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7EF50)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDA7EF30)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_PETICON_OFFSET UNITYSDK_OFFSET(0xDA7EF10)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_SENTENCEID_OFFSET UNITYSDK_OFFSET(0xDA7EED0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_SENTENCESHOW_OFFSET UNITYSDK_OFFSET(0xDA7EEF0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xDA7EF40)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_PETICON_OFFSET UNITYSDK_OFFSET(0xDA7EF20)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_SENTENCEID_OFFSET UNITYSDK_OFFSET(0xDA7EEE0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_SENTENCESHOW_OFFSET UNITYSDK_OFFSET(0xDA7EF00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireEventDialogSentence_TypeDefinitionIndex = 65870;

	class GridFightBonfireEventDialogSentence : public ::System::Object
	{
	public:
		::System::String* _PetIcon_k__BackingField; // 0x10
		::System::UInt32 _SentenceShow_k__BackingField; // 0x18
		::System::UInt32 _SentenceID_k__BackingField; // 0x1C
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_SENTENCEID_OFFSET))(this);
		}

		::System::Void set_SentenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_SENTENCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SentenceShow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_SENTENCESHOW_OFFSET))(this);
		}

		::System::Void set_SentenceShow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_SENTENCESHOW_OFFSET))(this, a1);
		}

		::System::String* get_PetIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_PETICON_OFFSET))(this);
		}

		::System::Void set_PetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_PETICON_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_SET_DESC_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightBonfireEventDialogSentence* Create(::RPG::GameCore::GridFightBonfireEventDialogConfigRow* a1)
		{
			return ((::RPG::Client::GridFightBonfireEventDialogSentence*(*)(::RPG::GameCore::GridFightBonfireEventDialogConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOGSENTENCE_CREATE_OFFSET))(a1);
		}

	};
}
