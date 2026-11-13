#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMACKMNOJBF;
namespace System { class Object; }

#define LMACKMNOJBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF4DB40)
#define LMACKMNOJBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4DB80)
#define LMACKMNOJBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FF4DB90)

inline static constexpr unsigned int LMACKMNOJBF___c_TypeDefinitionIndex = 30863;

	class LMACKMNOJBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x419B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMACKMNOJBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF___C_CTOR_OFFSET))(this);
		}

		::LMACKMNOJBF* __cctor_b__28_0()
		{
			return ((::LMACKMNOJBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
