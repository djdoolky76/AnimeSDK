#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
class AGCPAMNLCGN;
class EMJIDLCDFMI;
class JBACCAGFHON;
class LGHPKEAODPH;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4029A0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xD405150)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET UNITYSDK_OFFSET(0xD404E30)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD405030)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD403C20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET UNITYSDK_OFFSET(0xD404EE0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceMonoView_TypeDefinitionIndex = 78156;

	class CakeRaceMonoView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* _ShaderComp; // 0x20
		::LGHPKEAODPH* _Context; // 0x28
		::JBACCAGFHON* _Services; // 0x30
		::AGCPAMNLCGN* _Entity; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseShaderPropertyTransition* get_ShaderComp()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET))(this);
		}

		::System::Void SetDitherWithAnim(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET))(this);
		}

	};
}
