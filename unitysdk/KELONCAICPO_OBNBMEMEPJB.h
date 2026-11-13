#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KELONCAICPO_OBNBMEMEPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E1850)
#define KELONCAICPO_OBNBMEMEPJB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B5E1B00)
#define KELONCAICPO_OBNBMEMEPJB_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x1B5E1B70)

inline static constexpr unsigned int KELONCAICPO_OBNBMEMEPJB_TypeDefinitionIndex = 73681;

	class KELONCAICPO_OBNBMEMEPJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_OBNBMEMEPJB_CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_OBNBMEMEPJB_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_OBNBMEMEPJB_GET_TEXTPATH_OFFSET))(this);
		}

	};
