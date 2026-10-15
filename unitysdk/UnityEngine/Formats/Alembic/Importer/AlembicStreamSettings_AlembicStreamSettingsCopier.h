#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace UnityEngine::Formats::Alembic::Importer { class AlembicStreamSettings; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMSETTINGS_ALEMBICSTREAMSETTINGSCOPIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F178A90)

namespace UnityEngine::Formats::Alembic::Importer
{
	class AlembicStreamSettings_AlembicStreamSettingsCopier : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicStreamSettings* abcSettings; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMSETTINGS_ALEMBICSTREAMSETTINGSCOPIER_CTOR_OFFSET))(this);
		}

	};
}
