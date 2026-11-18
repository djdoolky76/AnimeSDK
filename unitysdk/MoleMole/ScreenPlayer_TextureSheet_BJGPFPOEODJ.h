#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BJGPFPOEODJ_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x1C0BE920)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BJGPFPOEODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BE910)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_BJGPFPOEODJ_TypeDefinitionIndex = 46484;

	class ScreenPlayer_TextureSheet_BJGPFPOEODJ : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* IGAAKDOIPNN; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BJGPFPOEODJ__CTOR_OFFSET))(this);
		}

		::System::Void HNNOAOBAHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_BJGPFPOEODJ_HNNOAOBAHPC_OFFSET))(this);
		}
	};
}
