#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJNIPEPHAM;
namespace System { class Object; }

#define DCJNIPEPHAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E145BE0)
#define DCJNIPEPHAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E145C20)
#define DCJNIPEPHAM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E145C30)

inline static constexpr unsigned int DCJNIPEPHAM___c_TypeDefinitionIndex = 34833;

	class DCJNIPEPHAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJNIPEPHAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM___C_CTOR_OFFSET))(this);
		}

		::DCJNIPEPHAM* __cctor_b__28_0()
		{
			return ((::DCJNIPEPHAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
