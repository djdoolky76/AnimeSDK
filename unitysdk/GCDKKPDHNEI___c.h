#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define GCDKKPDHNEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15969910)
#define GCDKKPDHNEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15969940)
#define GCDKKPDHNEI___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x15969950)

inline static constexpr unsigned int GCDKKPDHNEI___c_TypeDefinitionIndex = 60495;

	class GCDKKPDHNEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x533A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCDKKPDHNEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDKKPDHNEI___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__37_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCDKKPDHNEI___C___CCTOR_B__37_0_OFFSET))(this, a1, a2);
		}

	};
