#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KELONCAICPO_PPJLCJPKCAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E1840)
#define KELONCAICPO_PPJLCJPKCAD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B5E1BC0)
#define KELONCAICPO_PPJLCJPKCAD_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x1B5E1C30)

inline static constexpr unsigned int KELONCAICPO_PPJLCJPKCAD_TypeDefinitionIndex = 73680;

	class KELONCAICPO_PPJLCJPKCAD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_PPJLCJPKCAD_CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_PPJLCJPKCAD_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_PPJLCJPKCAD_GET_TEXTPATH_OFFSET))(this);
		}

	};
