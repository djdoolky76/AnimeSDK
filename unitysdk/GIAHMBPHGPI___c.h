#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIAHMBPHGPI;
namespace System { class Object; }

#define GIAHMBPHGPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC6080)
#define GIAHMBPHGPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC60C0)
#define GIAHMBPHGPI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBC60D0)

inline static constexpr unsigned int GIAHMBPHGPI___c_TypeDefinitionIndex = 31480;

	class GIAHMBPHGPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIAHMBPHGPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI___C_CTOR_OFFSET))(this);
		}

		::GIAHMBPHGPI* __cctor_b__33_0()
		{
			return ((::GIAHMBPHGPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHMBPHGPI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
