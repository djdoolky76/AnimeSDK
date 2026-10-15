#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKFBFJCHFB;
namespace System { class Object; }

#define IAKFBFJCHFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E607CB0)
#define IAKFBFJCHFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E607CF0)
#define IAKFBFJCHFB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E607D00)

inline static constexpr unsigned int IAKFBFJCHFB___c_TypeDefinitionIndex = 34703;

	class IAKFBFJCHFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKFBFJCHFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKFBFJCHFB___C_CTOR_OFFSET))(this);
		}

		::IAKFBFJCHFB* __cctor_b__33_0()
		{
			return ((::IAKFBFJCHFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKFBFJCHFB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
