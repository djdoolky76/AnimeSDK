#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCNNOGGIDO;
namespace System { class Object; }

#define KPCNNOGGIDO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9DE0)
#define KPCNNOGGIDO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B9E10)
#define KPCNNOGGIDO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E8B9E20)

inline static constexpr unsigned int KPCNNOGGIDO___c_TypeDefinitionIndex = 31339;

	class KPCNNOGGIDO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCNNOGGIDO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCNNOGGIDO___C_CTOR_OFFSET))(this);
		}

		::KPCNNOGGIDO* __cctor_b__48_0()
		{
			return ((::KPCNNOGGIDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCNNOGGIDO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
