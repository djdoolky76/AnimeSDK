#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KELONCAICPO_MCKDEGAHCBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB377400)
#define KELONCAICPO_MCKDEGAHCBN_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB377460)
#define KELONCAICPO_MCKDEGAHCBN_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0xB3774D0)

inline static constexpr unsigned int KELONCAICPO_MCKDEGAHCBN_TypeDefinitionIndex = 71693;

	class KELONCAICPO_MCKDEGAHCBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_MCKDEGAHCBN_CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_MCKDEGAHCBN_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_MCKDEGAHCBN_GET_TEXTPATH_OFFSET))(this);
		}

	};
