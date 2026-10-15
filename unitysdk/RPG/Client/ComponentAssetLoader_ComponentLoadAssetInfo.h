#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_GEKEPINAKDO_OFFSET UNITYSDK_OFFSET(0xCBB1DD0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xE4490)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_PIMLMFFPGML_OFFSET UNITYSDK_OFFSET(0xCBB1D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadAssetInfo_TypeDefinitionIndex = 68390;

	struct alignas(8) ComponentAssetLoader_ComponentLoadAssetInfo
	{
		::Il2CppArray<::System::String*>* ParamArray; // 0x10
		/*
		::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo NBHCPBBGAKA()
		{
			return ((::RPG::Client::ComponentAssetLoader_ComponentLoadAssetInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_NBHCPBBGAKA_OFFSET))(this);
		}
		*/

		static ::System::String* PIMLMFFPGML(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_PIMLMFFPGML_OFFSET))(a1);
		}

		static ::System::Boolean GEKEPINAKDO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADASSETINFO_GEKEPINAKDO_OFFSET))(a1);
		}

	};
}
