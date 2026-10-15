#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace System { class Action; }

#define JPDCGBNGKLL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2AD900)
#define JPDCGBNGKLL_FJJELPCBFNE_OFFSET UNITYSDK_OFFSET(0xB2AD350)
#define JPDCGBNGKLL_GFDHEJEAAKJ_OFFSET UNITYSDK_OFFSET(0xB2AD5B0)
#define JPDCGBNGKLL_IHMOBDGAOMD_OFFSET UNITYSDK_OFFSET(0xB2AD420)
#define JPDCGBNGKLL_KNOEMFGLKPI_OFFSET UNITYSDK_OFFSET(0xB2AD500)

inline static constexpr unsigned int JPDCGBNGKLL_TypeDefinitionIndex = 60849;

	class JPDCGBNGKLL : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_KMFBDEHCLFG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JPDCGBNGKLL")->GetStaticField(0x80E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDCGBNGKLL_CCTOR_OFFSET))();
		}

		static ::System::Void FJJELPCBFNE(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPDCGBNGKLL_FJJELPCBFNE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IHMOBDGAOMD(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPDCGBNGKLL_IHMOBDGAOMD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KNOEMFGLKPI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDCGBNGKLL_KNOEMFGLKPI_OFFSET))();
		}

		static ::System::Void GFDHEJEAAKJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::GameEntityList* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + JPDCGBNGKLL_GFDHEJEAAKJ_OFFSET))(a1, a2, a3);
		}

	};
