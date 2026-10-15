#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTOPHINTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xD190340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialTopHintParam_TypeDefinitionIndex = 65512;

	class GridFightGameTutorialTopHintParam : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Boolean IsFinished; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 TotalProgress; // 0x1C
		::System::UInt32 CurProgress; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Title; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTOPHINTPARAM_CTOR_OFFSET))(this);
		}

	};
}
