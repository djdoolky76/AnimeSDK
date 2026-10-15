#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MFGGGCLCOLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8FA3E0)
#define MFGGGCLCOLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FA420)
#define MFGGGCLCOLD___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET UNITYSDK_OFFSET(0xB8FA430)

	class MFGGGCLCOLD___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F710);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEdgeIndexByRay_b__14_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + MFGGGCLCOLD___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET))(this, a1, a2);
		}

	};
