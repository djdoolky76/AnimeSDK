#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KELONCAICPO_NFFMPLMMGAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB37E110)
#define KELONCAICPO_NFFMPLMMGAI_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB37E270)
#define KELONCAICPO_NFFMPLMMGAI_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0xB37E2E0)

inline static constexpr unsigned int KELONCAICPO_NFFMPLMMGAI_TypeDefinitionIndex = 71692;

	class KELONCAICPO_NFFMPLMMGAI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFFMPLMMGAI_CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFFMPLMMGAI_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_TextPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELONCAICPO_NFFMPLMMGAI_GET_TEXTPATH_OFFSET))(this);
		}

	};
