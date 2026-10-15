#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CurveUndirectedEdgeSetting; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD746840)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD746880)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__GENERATECURVEEDGES_B__7_0_OFFSET UNITYSDK_OFFSET(0xD746890)

namespace RPG::Client
{
	class MonoCurveUndirectedGraph___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B9E0);
		}

		static ::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5B9E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateCurveEdges_b__7_0(::RPG::Client::CurveUndirectedEdgeSetting* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveUndirectedEdgeSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__GENERATECURVEEDGES_B__7_0_OFFSET))(this, a1);
		}

	};
}
