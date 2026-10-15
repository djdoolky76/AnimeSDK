#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHBGJDOBIE;
namespace System { class Object; }

#define FCHBGJDOBIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E319AD0)
#define FCHBGJDOBIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E319B10)
#define FCHBGJDOBIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E319B20)

inline static constexpr unsigned int FCHBGJDOBIE___c_TypeDefinitionIndex = 34494;

	class FCHBGJDOBIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHBGJDOBIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE___C_CTOR_OFFSET))(this);
		}

		::FCHBGJDOBIE* __cctor_b__28_0()
		{
			return ((::FCHBGJDOBIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHBGJDOBIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
