#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPPMHDPFML;
namespace System { class Object; }

#define KPPPMHDPFML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2037F4F0)
#define KPPPMHDPFML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2037F530)
#define KPPPMHDPFML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2037F540)

inline static constexpr unsigned int KPPPMHDPFML___c_TypeDefinitionIndex = 35390;

	class KPPPMHDPFML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x230A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPPMHDPFML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML___C_CTOR_OFFSET))(this);
		}

		::KPPPMHDPFML* __cctor_b__23_0()
		{
			return ((::KPPPMHDPFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPPMHDPFML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
