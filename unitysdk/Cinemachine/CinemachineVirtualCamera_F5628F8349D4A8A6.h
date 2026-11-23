#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6_AA77335DD7CCDFF8_OFFSET UNITYSDK_OFFSET(0x2A5F870)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6_E5094EEF81E6D309_OFFSET UNITYSDK_OFFSET(0x2A5F770)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A5F8D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_F5628F8349D4A8A6_TypeDefinitionIndex = 18381;

	class CinemachineVirtualCamera_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Cinemachine::CinemachineVirtualCamera_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::Cinemachine::CinemachineComponentBase*>** StaticGet_EA1384BFAE1D85DA()
		{
			return (::System::ADDF5F55A85EB950<::Cinemachine::CinemachineComponentBase*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::Cinemachine::CinemachineComponentBase*, ::System::Boolean>** StaticGet_EDEA753A261B8A05()
		{
			return (::System::Func_2<::Cinemachine::CinemachineComponentBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineVirtualCamera_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 AA77335DD7CCDFF8(::Cinemachine::CinemachineComponentBase* A64886CA86DF769A, ::Cinemachine::CinemachineComponentBase* EDC812878A8F27BB)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineComponentBase*, ::Cinemachine::CinemachineComponentBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6_AA77335DD7CCDFF8_OFFSET))(this, A64886CA86DF769A, EDC812878A8F27BB);
		}

		::System::Boolean E5094EEF81E6D309(::Cinemachine::CinemachineComponentBase* A97F5B807CC19082)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineComponentBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_F5628F8349D4A8A6_E5094EEF81E6D309_OFFSET))(this, A97F5B807CC19082);
		}
	};
}
