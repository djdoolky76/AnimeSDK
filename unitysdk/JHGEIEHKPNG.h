#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LongPressEvent; }
namespace System { class Nullable; }

#define JHGEIEHKPNG_FLEFHOLLKDK_OFFSET UNITYSDK_OFFSET(0xB1B3130)

	class JHGEIEHKPNG : public ::System::Object
	{
	public:
		static ::RPG::Client::LongPressEvent* FLEFHOLLKDK(::RPG::Client::AnimatorButton* a1, ::System::Nullable* a2, ::System::Nullable* a3, ::System::Nullable* a4)
		{
			return ((::RPG::Client::LongPressEvent*(*)(::RPG::Client::AnimatorButton*, ::System::Nullable*, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + JHGEIEHKPNG_FLEFHOLLKDK_OFFSET))(a1, a2, a3, a4);
		}

	};
