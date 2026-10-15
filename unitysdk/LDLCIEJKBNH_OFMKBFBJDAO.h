#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
namespace System { class Nullable; }

#define LDLCIEJKBNH_OFMKBFBJDAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB63C570)

inline static constexpr unsigned int LDLCIEJKBNH_OFMKBFBJDAO_TypeDefinitionIndex = 77811;

	class LDLCIEJKBNH_OFMKBFBJDAO : public ::System::Object
	{
	public:
		::ALMFLCJCHKP* ICLEDKFDACO; // 0x10
		::RPG::MVector3 MELDKNBMIBF; // 0x18
		::System::Nullable* IGDEIKDGBIA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_OFMKBFBJDAO_CTOR_OFFSET))(this);
		}

	};
