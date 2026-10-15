#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB086A20)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB086A60)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__ONAFTERDESERIALIZE_B__28_0_OFFSET UNITYSDK_OFFSET(0xB086AD0)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__SORTSPLITPOINTS_B__23_0_OFFSET UNITYSDK_OFFSET(0xB086A70)

namespace RPGTools::HoudiniToUnity
{
	class CurveAttribute___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPGTools.HoudiniToUnity", "<>c")->GetStaticField(0x3A210);
		}

		static ::System::Func_2<::System::Single, ::System::String*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::Single, ::System::String*>**)UnitySDK::FromName("RPGTools.HoudiniToUnity", "<>c")->GetStaticField(0x3A218);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("RPGTools.HoudiniToUnity", "<>c")->GetStaticField(0x3A220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortSplitPoints_b__23_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__SORTSPLITPOINTS_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::String* _OnAfterDeserialize_b__28_0(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__ONAFTERDESERIALIZE_B__28_0_OFFSET))(this, a1);
		}

	};
}
