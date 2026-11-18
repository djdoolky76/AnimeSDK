#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/CommandBuilder_ScopeColor.h"
#include "unitysdk/MoleMole/CommandBuilder_ScopePersist.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_COMMANDBUILDER_ARROWHEADARC_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define MOLEMOLE_COMMANDBUILDER_GET_INGAME_OFFSET UNITYSDK_OFFSET(0x20072970)
#define MOLEMOLE_COMMANDBUILDER_WIRESPHERE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define MOLEMOLE_COMMANDBUILDER_WITHCOLOR_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define MOLEMOLE_COMMANDBUILDER_WITHDURATION_OFFSET UNITYSDK_OFFSET(0x3B9490)

namespace MoleMole
{
	inline static constexpr unsigned int CommandBuilder_TypeDefinitionIndex = 37208;

	struct alignas(8) CommandBuilder
	{
		static ::MoleMole::CommandBuilder* StaticGet_builder()
		{
			return (::MoleMole::CommandBuilder*)Il2CppClass::FromTypeDefinitionIndex(CommandBuilder_TypeDefinitionIndex)->GetStaticField(0x2BCF0);
		}
		::Il2CppArray<::UnityEngine::Camera*>* _cameraTargets; // 0x10

		/*
		static ::MoleMole::CommandBuilder& get_ingame()
		{
			return ((::MoleMole::CommandBuilder&(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_GET_INGAME_OFFSET))();
		}
		*/

		::MoleMole::CommandBuilder_ScopeColor WithColor(::UnityEngine::Color color)
		{
			return ((::MoleMole::CommandBuilder_ScopeColor(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_WITHCOLOR_OFFSET))(this, color);
		}

		::MoleMole::CommandBuilder_ScopePersist WithDuration(::System::Single duration)
		{
			return ((::MoleMole::CommandBuilder_ScopePersist(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_WITHDURATION_OFFSET))(this, duration);
		}

		::System::Void WireSphere(::Unity::Mathematics::float3 position, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_WIRESPHERE_OFFSET))(this, position, radius);
		}

		::System::Void ArrowheadArc(::Unity::Mathematics::float3 origin, ::Unity::Mathematics::float3 direction, ::System::Single offset, ::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDBUILDER_ARROWHEADARC_OFFSET))(this, origin, direction, offset, width);
		}
	};
}
