#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }

#define HBCMHADMLOP_CTOR_OFFSET UNITYSDK_OFFSET(0x16B28E30)
#define HBCMHADMLOP_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x16B28DA0)
#define HBCMHADMLOP_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16B28E20)
#define HBCMHADMLOP_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x16B28E10)
#define HBCMHADMLOP_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x16B28C10)
#define HBCMHADMLOP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16B28B40)
#define HBCMHADMLOP_NDAKFHEBOEG_OFFSET UNITYSDK_OFFSET(0x16B28E00)
#define HBCMHADMLOP_ONINIT_OFFSET UNITYSDK_OFFSET(0x16B28CC0)
#define HBCMHADMLOP_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x16B28D00)
#define HBCMHADMLOP_TICK_OFFSET UNITYSDK_OFFSET(0x16B28D40)

inline static constexpr unsigned int HBCMHADMLOP_TypeDefinitionIndex = 59051;

	class HBCMHADMLOP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Object* MMHPIKHEFCI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameWorld* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Object*))((::PBYTE)hIl2Cpp + HBCMHADMLOP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBCMHADMLOP_TICK_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBCMHADMLOP_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* NDAKFHEBOEG()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_NDAKFHEBOEG_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean get_NeedLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCMHADMLOP_GET_NEEDLATEUPDATE_OFFSET))(this);
		}

	};
