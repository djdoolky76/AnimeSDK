#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MapRotationSnapshot; }
namespace System { class Object; }

#define PROTO_MAPROTATIONSNAPSHOT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2020E4E0)
#define PROTO_MAPROTATIONSNAPSHOT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2020E520)
#define PROTO_MAPROTATIONSNAPSHOT___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2020E530)

namespace Proto
{
	inline static constexpr unsigned int MapRotationSnapshot___c_TypeDefinitionIndex = 26346;

	class MapRotationSnapshot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x52A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C_CTOR_OFFSET))(this);
		}

		::Proto::MapRotationSnapshot* __cctor_b__33_0()
		{
			return ((::Proto::MapRotationSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
