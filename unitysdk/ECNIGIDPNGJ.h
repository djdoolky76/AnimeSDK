#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECNIGIDPNGJ_InteractType.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECNIGIDPNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E04D0)
#define ECNIGIDPNGJ_FLKJFAFEPOM_OFFSET UNITYSDK_OFFSET(0x1C3E0300)
#define ECNIGIDPNGJ_LACLJCPCOEI_OFFSET UNITYSDK_OFFSET(0x1C3DF9B0)
#define ECNIGIDPNGJ_OLCJBIANECH_OFFSET UNITYSDK_OFFSET(0x1C3DF8E0)

inline static constexpr unsigned int ECNIGIDPNGJ_TypeDefinitionIndex = 70223;

	class ECNIGIDPNGJ : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNIGIDPNGJ_CTOR_OFFSET))(this);
		}

		::System::Boolean OLCJBIANECH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNIGIDPNGJ_OLCJBIANECH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LACLJCPCOEI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECNIGIDPNGJ_LACLJCPCOEI_OFFSET))(this, a1);
		}

		::System::Void FLKJFAFEPOM(::RPG::GameCore::GameEntity* a1, ::ECNIGIDPNGJ_InteractType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::ECNIGIDPNGJ_InteractType))((::PBYTE)hIl2Cpp + ECNIGIDPNGJ_FLKJFAFEPOM_OFFSET))(this, a1, a2);
		}

	};
