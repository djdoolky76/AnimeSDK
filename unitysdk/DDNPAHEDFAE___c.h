#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNPAHEDFAE;
namespace System { class Object; }

#define DDNPAHEDFAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9E940)
#define DDNPAHEDFAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9E980)
#define DDNPAHEDFAE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF9E990)

inline static constexpr unsigned int DDNPAHEDFAE___c_TypeDefinitionIndex = 34973;

	class DDNPAHEDFAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNPAHEDFAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNPAHEDFAE___C_CTOR_OFFSET))(this);
		}

		::DDNPAHEDFAE* __cctor_b__33_0()
		{
			return ((::DDNPAHEDFAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNPAHEDFAE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
