#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineComponentBase; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1669A090)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1669A0C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__46_0_OFFSET UNITYSDK_OFFSET(0x1669A0D0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera___c_TypeDefinitionIndex = 39768;

	class CinemachineVirtualCamera___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x530B0);
		}

		static ::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>** StaticGet___9__46_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineComponentBase*>**)UnitySDK::FromName("Cinemachine", "<>c")->GetStaticField(0x530B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateComponentPipeline_b__46_0(::Cinemachine::CinemachineComponentBase* a1, ::Cinemachine::CinemachineComponentBase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineComponentBase*, ::Cinemachine::CinemachineComponentBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA___C__UPDATECOMPONENTPIPELINE_B__46_0_OFFSET))(this, a1, a2);
		}

	};
}
