#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define KKBKKOEIEEG_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xBCFD120)
#define KKBKKOEIEEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFD160)
#define KKBKKOEIEEG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBCFD080)
#define KKBKKOEIEEG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCFCE50)
#define KKBKKOEIEEG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBCFCFB0)
#define KKBKKOEIEEG__ONTICK_OFFSET UNITYSDK_OFFSET(0xBCFD0C0)
#define KKBKKOEIEEG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBCFD040)

inline static constexpr unsigned int KKBKKOEIEEG_TypeDefinitionIndex = 73465;

	class KKBKKOEIEEG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKBKKOEIEEG__ONTICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_CGDNPIJGNNK_OFFSET))(this);
		}

	};
