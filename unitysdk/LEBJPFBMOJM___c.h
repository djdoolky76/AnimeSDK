#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEBJPFBMOJM;
namespace System { class Object; }

#define LEBJPFBMOJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC43250)
#define LEBJPFBMOJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC43290)
#define LEBJPFBMOJM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC432A0)

inline static constexpr unsigned int LEBJPFBMOJM___c_TypeDefinitionIndex = 25739;

	class LEBJPFBMOJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEBJPFBMOJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM___C_CTOR_OFFSET))(this);
		}

		::LEBJPFBMOJM* __cctor_b__38_0()
		{
			return ((::LEBJPFBMOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBJPFBMOJM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
