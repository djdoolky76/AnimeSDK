#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDOGOGJPHAM_BDGELOGOIKA_OFFSET UNITYSDK_OFFSET(0x16601E60)
#define JDOGOGJPHAM_CTOR_OFFSET UNITYSDK_OFFSET(0x16601CA0)
#define JDOGOGJPHAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16601D50)
#define JDOGOGJPHAM_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16601DE0)

inline static constexpr unsigned int JDOGOGJPHAM_TypeDefinitionIndex = 67046;

	class JDOGOGJPHAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* OLDOJJDKBOO; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + JDOGOGJPHAM_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOGOGJPHAM_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOGOGJPHAM_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* BDGELOGOIKA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOGOGJPHAM_BDGELOGOIKA_OFFSET))(this);
		}

	};
