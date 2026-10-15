#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define EDEPICFGMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x13312DC0)
#define EDEPICFGMDM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x13312D70)

inline static constexpr unsigned int EDEPICFGMDM_TypeDefinitionIndex = 82303;

	class EDEPICFGMDM : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* NDJKPABPJHO; // 0x10
		::System::String* GKHIHPGCLIK; // 0x18
		::UnityEngine::Object* POJACDBBJDL; // 0x20
		::System::Int64 GDBJDAOOCOH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPICFGMDM_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPICFGMDM_KHGIKBFDLFB_OFFSET))(this);
		}

	};
