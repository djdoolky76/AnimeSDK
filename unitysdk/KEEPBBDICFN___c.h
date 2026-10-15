#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEEPBBDICFN;
namespace System { class Object; }

#define KEEPBBDICFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCA40)
#define KEEPBBDICFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCA80)
#define KEEPBBDICFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7DCA90)

inline static constexpr unsigned int KEEPBBDICFN___c_TypeDefinitionIndex = 29223;

	class KEEPBBDICFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x115F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEEPBBDICFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN___C_CTOR_OFFSET))(this);
		}

		::KEEPBBDICFN* __cctor_b__28_0()
		{
			return ((::KEEPBBDICFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPBBDICFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
