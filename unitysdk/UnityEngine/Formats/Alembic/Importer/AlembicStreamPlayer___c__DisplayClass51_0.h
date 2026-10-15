#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMPLAYER___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F177B90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMPLAYER___C__DISPLAYCLASS51_0__INITIALIZEAFTERLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1F1785E0)

namespace UnityEngine::Formats::Alembic::Importer
{
	class AlembicStreamPlayer___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* defaultMat; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMPLAYER___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void _InitializeAfterLoad_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMPLAYER___C__DISPLAYCLASS51_0__INITIALIZEAFTERLOAD_B__0_OFFSET))(this, a1);
		}

	};
}
