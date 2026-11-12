#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CurveUndirectedEdgeSetting; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1D9CD0)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE1D9D10)
#define RPG_CLIENT_MONOCURVEUNDIRECTEDGRAPH___C__GENERATECURVEEDGES_B__7_0_OFFSET UNITYSDK_OFFSET(0xE1D9D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveUndirectedGraph___c_TypeDefinitionIndex = 70522;

	class MonoCurveUndirectedGraph___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A990);
		}

		static ::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::CurveUndirectedEdgeSetting*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A998);
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
