#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDOMFBJMKE;
namespace System { class Object; }

#define NDDOMFBJMKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE55F0)
#define NDDOMFBJMKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE5630)
#define NDDOMFBJMKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAE5640)

inline static constexpr unsigned int NDDOMFBJMKE___c_TypeDefinitionIndex = 25202;

	class NDDOMFBJMKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDDOMFBJMKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE___C_CTOR_OFFSET))(this);
		}

		::NDDOMFBJMKE* __cctor_b__33_0()
		{
			return ((::NDDOMFBJMKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDOMFBJMKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
