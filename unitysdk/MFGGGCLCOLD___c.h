#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MFGGGCLCOLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17C84530)
#define MFGGGCLCOLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17C84570)
#define MFGGGCLCOLD___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x17C84580)

inline static constexpr unsigned int MFGGGCLCOLD___c_TypeDefinitionIndex = 63587;

	class MFGGGCLCOLD___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Double, ::System::Int32>>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Double, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x733F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x733F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEdgeIndexByRay_b__14_0(::System::ValueTuple_2<::System::Double, ::System::Int32> a1, ::System::ValueTuple_2<::System::Double, ::System::Int32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Double, ::System::Int32>, ::System::ValueTuple_2<::System::Double, ::System::Int32>))((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET))(this, a1, a2);
		}

	};
