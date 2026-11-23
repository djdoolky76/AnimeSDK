#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { class String; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6_B7B369353422E63E_OFFSET UNITYSDK_OFFSET(0x171B7D0)
#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6_E336A02457F37C2F_OFFSET UNITYSDK_OFFSET(0x2A5F720)
#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A5F9B0)
#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace E7ED61E0B00DDE0C
{
	inline static constexpr unsigned int FDBF4FD73B809E89_F5628F8349D4A8A6_TypeDefinitionIndex = 18374;

	class FDBF4FD73B809E89_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::E7ED61E0B00DDE0C::FDBF4FD73B809E89_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FDBF4FD73B809E89_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::ADDF5F55A85EB950<::Cinemachine::CinemachineVirtualCameraBase*>** StaticGet_F343E8F0EA5266E6()
		{
			return (::System::ADDF5F55A85EB950<::Cinemachine::CinemachineVirtualCameraBase*>**)Il2CppClass::FromTypeDefinitionIndex(FDBF4FD73B809E89_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Int32 E336A02457F37C2F(::Cinemachine::CinemachineVirtualCameraBase* BB8C609F76620E45, ::Cinemachine::CinemachineVirtualCameraBase* A0A0D02932F12CFD)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6_E336A02457F37C2F_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Single B7B369353422E63E(::System::String* A24289F86856ED60)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F5628F8349D4A8A6_B7B369353422E63E_OFFSET))(this, A24289F86856ED60);
		}
	};
}
