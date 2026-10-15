#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSampleSelector.h"
namespace UnityEngine::Formats::Alembic::Importer { class AlembicTreeNode; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F173950)

namespace UnityEngine::Formats::Alembic::Importer
{
	class AlembicStream_ImportContext : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* alembicTreeNode; // 0x10
		::System::Boolean createMissingNodes; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector ss; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCONTEXT_CTOR_OFFSET))(this);
		}

	};
}
