#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLESHOWUIPAGETEXTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD86850)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleShowUIPageTextParam_TypeDefinitionIndex = 73880;

	class BattleShowUIPageTextParam : public ::System::Object
	{
	public:
		::System::String* SDFPath; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* ParamList; // 0x18
		::System::String* TextPath; // 0x20
		::RPG::Client::TextID TextContent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESHOWUIPAGETEXTPARAM_CTOR_OFFSET))(this);
		}

	};
}
