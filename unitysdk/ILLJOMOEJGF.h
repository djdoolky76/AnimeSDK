#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ILLJOMOEJGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1749E8D0)

inline static constexpr unsigned int ILLJOMOEJGF_TypeDefinitionIndex = 53611;

	class ILLJOMOEJGF : public ::System::Object
	{
	public:
		::System::String* PHFMCACHFIJ; // 0x10
		::System::String* LHAOGGODHCB; // 0x18
		::System::String* DNOIFDEGGNA; // 0x20
		::RPG::GameCore::ButtonShowPriority DOPGIAJMFFO; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GDLFBAPFPBF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLJOMOEJGF_CTOR_OFFSET))(this);
		}

	};
