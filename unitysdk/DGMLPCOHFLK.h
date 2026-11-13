#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDJPCNLFDLN.h"
#include "unitysdk/System/Object.h"
class FLGDGCPIHBP;
class JAODHHPIKGJ;
namespace UnityEngine { class GameObject; }

#define DGMLPCOHFLK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB2D310)
#define DGMLPCOHFLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2D390)

inline static constexpr unsigned int DGMLPCOHFLK_TypeDefinitionIndex = 44176;

	class DGMLPCOHFLK : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* HMFEPLJKFBA; // 0x10
		::FLGDGCPIHBP* BKCDCIOHEJO; // 0x18
		::GDJPCNLFDLN NMIOHOIPNKL; // 0x20
		::JAODHHPIKGJ* MEALLCOMFFH; // 0x50
		::System::Boolean LGLHFIKGEAH; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMLPCOHFLK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMLPCOHFLK_CLEAR_OFFSET))(this);
		}

	};
