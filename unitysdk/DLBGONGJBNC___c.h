#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLBGONGJBNC;
namespace System { class Object; }

#define DLBGONGJBNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B9CA0)
#define DLBGONGJBNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B9CE0)
#define DLBGONGJBNC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F4B9CF0)

inline static constexpr unsigned int DLBGONGJBNC___c_TypeDefinitionIndex = 29359;

	class DLBGONGJBNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLBGONGJBNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBGONGJBNC___C_CTOR_OFFSET))(this);
		}

		::DLBGONGJBNC* __cctor_b__38_0()
		{
			return ((::DLBGONGJBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBGONGJBNC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
