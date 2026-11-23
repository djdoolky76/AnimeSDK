#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::Iris { class IrisCloud; }
namespace TA::Iris { class IrisRenderingContext; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define EA679C2EAB7B59DA_A4EF9C83F6031AC8_OFFSET UNITYSDK_OFFSET(0x28A45F0)
#define EA679C2EAB7B59DA_A7AE92D502903BFA_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define EA679C2EAB7B59DA_A9E6ECBF47A6C0A3_OFFSET UNITYSDK_OFFSET(0x28A4250)
#define EA679C2EAB7B59DA_B0E90B2F548D04DC_OFFSET UNITYSDK_OFFSET(0x28A4B70)
#define EA679C2EAB7B59DA_BE3E1EE4828B898F_OFFSET UNITYSDK_OFFSET(0x28A49C0)
#define EA679C2EAB7B59DA_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28A44D0)
#define EA679C2EAB7B59DA_EA3D0FA40E5D6CE4_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define EA679C2EAB7B59DA_ED8B06A9F2E589C6_OFFSET UNITYSDK_OFFSET(0x1F63560)
#define EA679C2EAB7B59DA_F4AD5B71ADB55890_OFFSET UNITYSDK_OFFSET(0x28A4EF0)
#define EA679C2EAB7B59DA_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x28A4CB0)
#define EA679C2EAB7B59DA__CTOR_OFFSET UNITYSDK_OFFSET(0x28A4E20)

inline static constexpr unsigned int EA679C2EAB7B59DA_TypeDefinitionIndex = 16218;

class EA679C2EAB7B59DA : public ::System::Object
{
public:
	::UnityEngine::Material* AA7216C8A1DA49A3; // 0x10
	::UnityEngine::Material* A72C41911E2E7B46; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>* F72662A679FFDA57; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>* F0998BCAC79A4307; // 0x28
	::TA::Iris::IrisRenderingContext* F343B014B0323EB4; // 0x30
	::System::Boolean B9F5D2CF5156EE8B; // 0x38
	::System::Byte _padding0[0x7];
	::UnityEngine::Transform* FD4785269787D38E; // 0x40

	::System::Boolean A9E6ECBF47A6C0A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_A9E6ECBF47A6C0A3_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void B0E90B2F548D04DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_B0E90B2F548D04DC_OFFSET))(this);
	}

	::TA::Iris::IrisRenderingContext* A7AE92D502903BFA()
	{
		return ((::TA::Iris::IrisRenderingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_A7AE92D502903BFA_OFFSET))(this);
	}

	::TA::Iris::IrisCloud* F4AD5B71ADB55890()
	{
		return ((::TA::Iris::IrisCloud*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_F4AD5B71ADB55890_OFFSET))(this);
	}

	::UnityEngine::Transform* EA3D0FA40E5D6CE4()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_EA3D0FA40E5D6CE4_OFFSET))(this);
	}

	::System::Void FD792C24FE49920B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_FD792C24FE49920B_OFFSET))(this);
	}

	::System::Void A4EF9C83F6031AC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_A4EF9C83F6031AC8_OFFSET))(this);
	}

	::System::Void BE3E1EE4828B898F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_BE3E1EE4828B898F_OFFSET))(this);
	}

	::System::Boolean ED8B06A9F2E589C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA_ED8B06A9F2E589C6_OFFSET))(this);
	}

	::System::Void _ctor(::TA::Iris::IrisRenderingContext* E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::TA::Iris::IrisRenderingContext*))((::PBYTE)hIl2Cpp + EA679C2EAB7B59DA__CTOR_OFFSET))(this, E6CE7391633EEC68);
	}
};
