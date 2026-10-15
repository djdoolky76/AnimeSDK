#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Introduce { class IntroduceViewModel; }
namespace RPG::GameCore { class IntroDataRow; }

#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD357530)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD3574B0)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD357440)
#define RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xD357390)

namespace RPG::Client::Introduce
{
	class IntroduceViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::IntroDataRow* _Row; // 0x10
		::System::Void _ctor(::RPG::GameCore::IntroDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		static ::RPG::Client::Introduce::IntroduceViewModel* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::Introduce::IntroduceViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTRODUCE_INTRODUCEVIEWMODEL_TRYCREATE_OFFSET))(a1);
		}

	};
}
