#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Prop/V470CurveMovePuzzle_KDKCMJDOPDB.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18704E40)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18704E80)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C___BUILDALIASSPEEDPOINTS_B__21_0_OFFSET UNITYSDK_OFFSET(0x18704E90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int V470CurveMovePuzzle___c_TypeDefinitionIndex = 81686;

	class V470CurveMovePuzzle___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x62BC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x62BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildAliasSpeedPoints_b__21_0(::RPG::Client::Prop::V470CurveMovePuzzle_KDKCMJDOPDB a1, ::RPG::Client::Prop::V470CurveMovePuzzle_KDKCMJDOPDB a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::V470CurveMovePuzzle_KDKCMJDOPDB, ::RPG::Client::Prop::V470CurveMovePuzzle_KDKCMJDOPDB))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE___C___BUILDALIASSPEEDPOINTS_B__21_0_OFFSET))(this, a1, a2);
		}

	};
}
