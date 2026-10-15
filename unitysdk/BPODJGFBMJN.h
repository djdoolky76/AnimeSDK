#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPODJGFBMJN_BDGELOGOIKA_OFFSET UNITYSDK_OFFSET(0xC1ABDA0)
#define BPODJGFBMJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC1ABA60)
#define BPODJGFBMJN_NLJFGDDFJMH_OFFSET UNITYSDK_OFFSET(0xC1ABB00)
#define BPODJGFBMJN_PBBODGEKGDH_OFFSET UNITYSDK_OFFSET(0xC1ABDE0)
#define BPODJGFBMJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC1ABC30)
#define BPODJGFBMJN_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC1ABCE0)

inline static constexpr unsigned int BPODJGFBMJN_TypeDefinitionIndex = 67056;

	class BPODJGFBMJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* OLDOJJDKBOO; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* FICEEDILADP; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + BPODJGFBMJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPODJGFBMJN_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPODJGFBMJN_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void NLJFGDDFJMH(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + BPODJGFBMJN_NLJFGDDFJMH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* BDGELOGOIKA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPODJGFBMJN_BDGELOGOIKA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* PBBODGEKGDH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPODJGFBMJN_PBBODGEKGDH_OFFSET))(this);
		}

	};
