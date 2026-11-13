#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC2DA10)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2DA50)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_0_OFFSET UNITYSDK_OFFSET(0x1AC2DA60)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_1_OFFSET UNITYSDK_OFFSET(0x1AC2DA70)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AC2DA80)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1AC2DA90)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1AC2DAA0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1AC2DAB0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportDataLong___c_TypeDefinitionIndex = 50237;

	class LightSetExportDataLong___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x12690);
		}

		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x12698);
		}

		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x126A0);
		}

		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x126A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x126B0);
		}

		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x126B8);
		}

		static ::System::Func_3<::System::Int32, ::System::Int64, ::System::Int32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::System::Int32, ::System::Int64, ::System::Int32>**)UnitySDK::FromName("ScenenLightManager", "<>c")->GetStaticField(0x126C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _CompareDataToOther_b__3_0(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_0_OFFSET))(this, a1);
		}

		::System::Int64 _CompareDataToOther_b__3_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_1_OFFSET))(this, a1);
		}

		::System::Int64 _Equals_b__4_0(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_0_OFFSET))(this, a1);
		}

		::System::Int64 _Equals_b__4_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_1_OFFSET))(this, a1);
		}

		::System::Int64 _GetHashCode_b__5_0(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetHashCode_b__5_1(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_1_OFFSET))(this, a1, a2);
		}

	};
}
