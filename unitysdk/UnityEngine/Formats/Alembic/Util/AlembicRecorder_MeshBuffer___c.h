#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F183EB0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F183EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPOSE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1F183F00)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshBuffer___c_TypeDefinitionIndex = 45763;

	class AlembicRecorder_MeshBuffer___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.Formats.Alembic.Util", "<>c")->GetStaticField(0x16D00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.Formats.Alembic.Util", "<>c")->GetStaticField(0x16D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__14_0(::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPOSE_B__14_0_OFFSET))(this, a1);
		}

	};
}
