#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6_EA5B0CF7AA9D27F9_OFFSET UNITYSDK_OFFSET(0x29E60E0)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x29E6200)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText_F5628F8349D4A8A6_TypeDefinitionIndex = 15744;

	class MiHoYoSDKLinkImageText_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKLinkImageText_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::MiHoYoSDKLinkImageText_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::UnityEngine::UI::Image*>** StaticGet_B59FACF145743799()
		{
			return (::System::E891BA3236FD13E7<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean EA5B0CF7AA9D27F9(::UnityEngine::UI::Image* F49848274A97D1B6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT_F5628F8349D4A8A6_EA5B0CF7AA9D27F9_OFFSET))(this, F49848274A97D1B6);
		}
	};
}
