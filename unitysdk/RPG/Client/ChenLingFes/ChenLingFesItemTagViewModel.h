#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace RPG::GameCore { class ChenLingFesTagRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA95AA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCAC1C90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCAC1670)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TAGUISTATE_OFFSET UNITYSDK_OFFSET(0xCAC1750)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xCAC16C0)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesItemTagViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::GameCore::ChenLingFesTagRow* _Row; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_TagUIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGVIEWMODEL_GET_TAGUISTATE_OFFSET))(this);
		}

	};
}
