#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HODMAGEMEJD;
namespace System { class Object; }

#define HODMAGEMEJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2003B8A0)
#define HODMAGEMEJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2003B8E0)
#define HODMAGEMEJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2003B8F0)

inline static constexpr unsigned int HODMAGEMEJD___c_TypeDefinitionIndex = 29814;

	class HODMAGEMEJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODMAGEMEJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODMAGEMEJD___C_CTOR_OFFSET))(this);
		}

		::HODMAGEMEJD* __cctor_b__33_0()
		{
			return ((::HODMAGEMEJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODMAGEMEJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
