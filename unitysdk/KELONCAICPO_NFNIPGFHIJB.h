#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KELONCAICPO_NFNIPGFHIJB_CTOR_OFFSET UNITYSDK_OFFSET(0xB37E120)
#define KELONCAICPO_NFNIPGFHIJB_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB37E350)
#define KELONCAICPO_NFNIPGFHIJB_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0xB37E3C0)

	class KELONCAICPO_NFNIPGFHIJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFNIPGFHIJB_CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFNIPGFHIJB_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFNIPGFHIJB_GET_TEXTPATH_OFFSET))(this);
		}

	};
