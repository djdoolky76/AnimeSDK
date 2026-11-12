#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_CANGOTONEXTAREA_OFFSET UNITYSDK_OFFSET(0xE6EB410)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F0210)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6F0170)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0xE6EFE10)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_GOTONEXTAREA_OFFSET UNITYSDK_OFFSET(0xE6EBAC0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_INIT_OFFSET UNITYSDK_OFFSET(0xE6EDEE0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_RESET_OFFSET UNITYSDK_OFFSET(0xE6EC0A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleStreet_TypeDefinitionIndex = 81164;

	class ChimeraBattlePuzzleStreet : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraBattlePuzzleArea*>* IHLBAMHPGFG; // 0x18
		::System::Int32 EMPIDADIBKO; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* VolumeName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_INIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CanGotoNextArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_CANGOTONEXTAREA_OFFSET))(this);
		}

		::System::Void GotoNextArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_GOTONEXTAREA_OFFSET))(this);
		}

		::RPG::Client::ChimeraBattlePuzzleArea* get_CurrentArea()
		{
			return ((::RPG::Client::ChimeraBattlePuzzleArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET_GET_CURRENTAREA_OFFSET))(this);
		}

	};
}
