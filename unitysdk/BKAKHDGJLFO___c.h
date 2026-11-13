#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAKHDGJLFO;
namespace System { class Object; }

#define BKAKHDGJLFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD8510)
#define BKAKHDGJLFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD8550)
#define BKAKHDGJLFO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAD8560)

inline static constexpr unsigned int BKAKHDGJLFO___c_TypeDefinitionIndex = 30308;

	class BKAKHDGJLFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKAKHDGJLFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO___C_CTOR_OFFSET))(this);
		}

		::BKAKHDGJLFO* __cctor_b__23_0()
		{
			return ((::BKAKHDGJLFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAKHDGJLFO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
