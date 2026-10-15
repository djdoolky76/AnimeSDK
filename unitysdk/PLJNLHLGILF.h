#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define PLJNLHLGILF_CTOR_OFFSET UNITYSDK_OFFSET(0xC301060)

inline static constexpr unsigned int PLJNLHLGILF_TypeDefinitionIndex = 73282;

	class PLJNLHLGILF : public ::System::Object
	{
	public:
		::RPG::Client::TextID AABNPBGMOFN; // 0x10
		::RPG::Client::UIFloatingTextType GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNLHLGILF_CTOR_OFFSET))(this);
		}

	};
