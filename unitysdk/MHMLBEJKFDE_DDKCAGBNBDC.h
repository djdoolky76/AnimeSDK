#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AvatarEmotionClipConfig; }
namespace RPG::Client { class EmotionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHMLBEJKFDE_DDKCAGBNBDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB941790)

inline static constexpr unsigned int MHMLBEJKFDE_DDKCAGBNBDC_TypeDefinitionIndex = 69422;

	class MHMLBEJKFDE_DDKCAGBNBDC : public ::System::Object
	{
	public:
		::RPG::Client::AvatarEmotionClipConfig* GOKEDCLBHIJ; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EmotionData*>* PLNAPDCODIB; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EmotionID, ::RPG::Client::EmotionData*>* AKNFCDPDNFF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLBEJKFDE_DDKCAGBNBDC_CTOR_OFFSET))(this);
		}

	};
