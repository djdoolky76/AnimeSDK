#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client { class ChooseDeliveryGroup; }
namespace RPG::Client { class ChooseDeliveryToastConfig; }
namespace RPG::GameCore { class ChooseDeliveryRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFHLLGLIJAC_FLFMJGDNBOG_OFFSET UNITYSDK_OFFSET(0xB162AE0)
#define BFHLLGLIJAC_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xB162950)
#define BFHLLGLIJAC_OCHBPHJEPAM_OFFSET UNITYSDK_OFFSET(0xB162A30)

inline static constexpr unsigned int BFHLLGLIJAC_TypeDefinitionIndex = 63519;

	class BFHLLGLIJAC : public ::System::Object
	{
	public:
		static ::RPG::Client::ChooseDeliveryEntry* LHLALAKKKKJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChooseDeliveryEntry*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFHLLGLIJAC_LHLALAKKKKJ_OFFSET))(a1);
		}

		static ::RPG::Client::ChooseDeliveryToastConfig* OCHBPHJEPAM(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChooseDeliveryToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFHLLGLIJAC_OCHBPHJEPAM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* FLFMJGDNBOG(::RPG::GameCore::ChooseDeliveryRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*(*)(::RPG::GameCore::ChooseDeliveryRow*))((::PBYTE)hIl2Cpp + BFHLLGLIJAC_FLFMJGDNBOG_OFFSET))(a1);
		}

	};
