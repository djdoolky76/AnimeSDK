#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

#define PLJNLHLGILF_CTOR_OFFSET UNITYSDK_OFFSET(0xC308A50)

	class PLJNLHLGILF : public ::System::Object
	{
	public:
		::RPG::Client::UIFloatingTextType GMPGDEINODK; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AABNPBGMOFN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJNLHLGILF_CTOR_OFFSET))(this);
		}

	};
