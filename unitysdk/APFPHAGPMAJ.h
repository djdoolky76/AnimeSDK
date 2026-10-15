#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APFPHAGPMAJ;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APFPHAGPMAJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B9D6E0)
#define APFPHAGPMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9D790)
#define APFPHAGPMAJ_DCCILJIBPNK_OFFSET UNITYSDK_OFFSET(0x15B9D1A0)
#define APFPHAGPMAJ_IFAECDEFCHA_OFFSET UNITYSDK_OFFSET(0x15B9D300)
#define APFPHAGPMAJ_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0x15B9D480)

inline static constexpr unsigned int APFPHAGPMAJ_TypeDefinitionIndex = 69774;

	class APFPHAGPMAJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* AFNHAJCMJAJ; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* MAHNOPJIPCB; // 0x18
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFPHAGPMAJ_CTOR_OFFSET))(this);
		}

		::APFPHAGPMAJ* DCCILJIBPNK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::APFPHAGPMAJ*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APFPHAGPMAJ_DCCILJIBPNK_OFFSET))(this, a1);
		}

		::System::Void IFAECDEFCHA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APFPHAGPMAJ_IFAECDEFCHA_OFFSET))(this, a1);
		}

		::System::Void MFCFABPGFGB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + APFPHAGPMAJ_MFCFABPGFGB_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFPHAGPMAJ_CLEAR_OFFSET))(this);
		}

	};
