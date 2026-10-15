#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLBGONGJBNC;
namespace System { class Object; }

#define DLBGONGJBNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B0270)
#define DLBGONGJBNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B02B0)
#define DLBGONGJBNC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1B02C0)

inline static constexpr unsigned int DLBGONGJBNC___c_TypeDefinitionIndex = 28769;

	class DLBGONGJBNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34790);
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
