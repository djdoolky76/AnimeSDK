#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPOFAPDKBJA;
namespace System { class Object; }

#define KPOFAPDKBJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E895630)
#define KPOFAPDKBJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895670)
#define KPOFAPDKBJA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E895680)

inline static constexpr unsigned int KPOFAPDKBJA___c_TypeDefinitionIndex = 33108;

	class KPOFAPDKBJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPOFAPDKBJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA___C_CTOR_OFFSET))(this);
		}

		::KPOFAPDKBJA* __cctor_b__43_0()
		{
			return ((::KPOFAPDKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOFAPDKBJA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
