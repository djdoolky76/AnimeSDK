#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PATMatPropertyControllerBehavior_MatBlockType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class PATRenderer;
namespace System { class String; }

#define RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5E3C0)
#define RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDA5E370)

namespace RPG::Client
{
	class PATMatPropertyControllerMonoPlugin
	{
	public:
		::System::String* PropertyName; // 0x30
		::RPG::Client::PATMatPropertyControllerBehavior_MatBlockType DataType; // 0x38
		::System::Single FloatData; // 0x3C
		::UnityEngine::Color ColorData; // 0x40
		::UnityEngine::Vector4 VectorData; // 0x50
		::PATRenderer* TargetPatRenderer; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
