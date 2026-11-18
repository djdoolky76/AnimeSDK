#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14BE10)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14BE50)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D14BED0)
#define MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__15_0_OFFSET UNITYSDK_OFFSET(0x1D14BE60)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ComboManager___c_TypeDefinitionIndex = 20202;

	class ComboManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA730);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA738);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ComboManager___c_TypeDefinitionIndex)->GetStaticField(0xA740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SignComboBody_b__15_0(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__SIGNCOMBOBODY_B__15_0_OFFSET))(this, x, y);
		}

		::System::Void _RequestRedPoint_b__20_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_COMBOMANAGER___C__REQUESTREDPOINT_B__20_0_OFFSET))(this, response);
		}
	};
}
