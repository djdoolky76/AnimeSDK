#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace UnityEngine::Formats::Alembic::Sdk { class PinnedListImpl_ListData; }

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(8) PinnedListImpl_Caster
	{
		::System::Object* list; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::PinnedListImpl_ListData* data; // 0x10
	};
}
