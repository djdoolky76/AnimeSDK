#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MissionCustomValueSnapshotList; }
namespace System { class Object; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E004610)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E004650)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E004660)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshotList___c_TypeDefinitionIndex = 25833;

	class MissionCustomValueSnapshotList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C_CTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshotList* __cctor_b__23_0()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
