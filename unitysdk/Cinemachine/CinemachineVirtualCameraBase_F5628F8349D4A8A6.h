#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineExtension; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6_A34B2C891F6EB773_OFFSET UNITYSDK_OFFSET(0x2A5F7F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A5F940)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_F5628F8349D4A8A6_TypeDefinitionIndex = 18352;

	class CinemachineVirtualCameraBase_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCameraBase_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Cinemachine::CinemachineVirtualCameraBase_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCameraBase_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::Cinemachine::CinemachineExtension*, ::System::Boolean>** StaticGet_B34481B753BBF85D()
		{
			return (::System::Func_2<::Cinemachine::CinemachineExtension*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCameraBase_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean A34B2C891F6EB773(::Cinemachine::CinemachineExtension* B3E827B54E76CC52)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineExtension*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_F5628F8349D4A8A6_A34B2C891F6EB773_OFFSET))(this, B3E827B54E76CC52);
		}
	};
}
