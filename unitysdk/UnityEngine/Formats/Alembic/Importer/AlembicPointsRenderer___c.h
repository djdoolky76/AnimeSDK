#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F171310)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F171350)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__ONDESTROY_B__39_0_OFFSET UNITYSDK_OFFSET(0x1F171360)

namespace UnityEngine::Formats::Alembic::Importer
{
	class AlembicPointsRenderer___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__39_0()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Formats.Alembic.Importer", "<>c")->GetStaticField(0x15AB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Formats.Alembic.Importer", "<>c")->GetStaticField(0x15AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnDestroy_b__39_0(::UnityEngine::ComputeBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTSRENDERER___C__ONDESTROY_B__39_0_OFFSET))(this, a1);
		}

	};
}
