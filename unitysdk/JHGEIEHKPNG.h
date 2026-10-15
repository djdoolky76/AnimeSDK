#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LongPressEvent; }

#define JHGEIEHKPNG_FLEFHOLLKDK_OFFSET UNITYSDK_OFFSET(0xB1ACD90)

inline static constexpr unsigned int JHGEIEHKPNG_TypeDefinitionIndex = 49872;

	class JHGEIEHKPNG : public ::System::Object
	{
	public:
		static ::RPG::Client::LongPressEvent* FLEFHOLLKDK(::RPG::Client::AnimatorButton* a1, ::System::Nullable_1<::System::Single> a2, ::System::Nullable_1<::System::Single> a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::RPG::Client::LongPressEvent*(*)(::RPG::Client::AnimatorButton*, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + JHGEIEHKPNG_FLEFHOLLKDK_OFFSET))(a1, a2, a3, a4);
		}

	};
