#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define CGINBJLGGEO_AFIFMGOAMHF_OFFSET UNITYSDK_OFFSET(0xD6379A0)
#define CGINBJLGGEO_CTOR_OFFSET UNITYSDK_OFFSET(0xD637AA0)

inline static constexpr unsigned int CGINBJLGGEO_TypeDefinitionIndex = 83832;

	class CGINBJLGGEO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGINBJLGGEO_CTOR_OFFSET))(this);
		}

		::System::String* AFIFMGOAMHF(::RPG::Client::TextID a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CGINBJLGGEO_AFIFMGOAMHF_OFFSET))(this, a1);
		}

	};
