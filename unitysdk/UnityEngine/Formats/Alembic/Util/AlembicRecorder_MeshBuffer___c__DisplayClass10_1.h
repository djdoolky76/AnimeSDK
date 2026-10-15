#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1837A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CAPTURE_B__5_OFFSET UNITYSDK_OFFSET(0x1F184340)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshBuffer___c__DisplayClass10_1_TypeDefinitionIndex = 45765;

	template <typename T>
	class AlembicRecorder_MeshBuffer___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 smi; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1_CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__5(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHBUFFER___C__DISPLAYCLASS10_1__CAPTURE_B__5_OFFSET))(this, a1);
		}

	};
}
