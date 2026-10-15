#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HFKMPIEIIOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C7BE90)
#define HFKMPIEIIOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7BE80)
#define HFKMPIEIIOI_OKCEBMECNGL_1_OFFSET UNITYSDK_OFFSET(0x15C7BD70)
#define HFKMPIEIIOI_OKCEBMECNGL_OFFSET UNITYSDK_OFFSET(0x15C7BC30)
#define HFKMPIEIIOI_PKKGONHEFGN_OFFSET UNITYSDK_OFFSET(0x15C7BC20)

inline static constexpr unsigned int HFKMPIEIIOI_TypeDefinitionIndex = 61211;

	class HFKMPIEIIOI : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EOOMOFHGOBI()
		{
			return (::System::String**)UnitySDK::FromName("", "HFKMPIEIIOI")->GetStaticField(0x13370);
		}

		// static const ::System::String* NGGKBANBKEO; // 0x0
		// static const ::System::String* KMFALPBKAGC; // 0x0
		// static const ::System::String* CJMKLLAPEJD; // 0x0
		// static const ::System::String* FAPNHKLEJBG; // 0x0
		// static const ::System::String* HPOBCLBMJNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKMPIEIIOI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKMPIEIIOI_CCTOR_OFFSET))();
		}

		static ::System::String* PKKGONHEFGN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HFKMPIEIIOI_PKKGONHEFGN_OFFSET))();
		}

		static ::System::Void OKCEBMECNGL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFKMPIEIIOI_OKCEBMECNGL_OFFSET))(a1);
		}

		static ::System::Void OKCEBMECNGL_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HFKMPIEIIOI_OKCEBMECNGL_1_OFFSET))(a1, a2);
		}

	};
