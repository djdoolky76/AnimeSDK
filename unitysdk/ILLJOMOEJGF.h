#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ILLJOMOEJGF_CTOR_OFFSET UNITYSDK_OFFSET(0x164C5A00)

inline static constexpr unsigned int ILLJOMOEJGF_TypeDefinitionIndex = 52505;

	class ILLJOMOEJGF : public ::System::Object
	{
	public:
		::System::String* DNOIFDEGGNA; // 0x10
		::System::String* LHAOGGODHCB; // 0x18
		::System::String* PHFMCACHFIJ; // 0x20
		::RPG::Client::TextID GDLFBAPFPBF; // 0x28
		::RPG::GameCore::ButtonShowPriority DOPGIAJMFFO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLJOMOEJGF_CTOR_OFFSET))(this);
		}

	};
