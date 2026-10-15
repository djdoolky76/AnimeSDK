#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGEDFOBAEBC;
namespace System { class Object; }

#define PGEDFOBAEBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2E170)
#define PGEDFOBAEBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2E1B0)
#define PGEDFOBAEBC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF2E1C0)

inline static constexpr unsigned int PGEDFOBAEBC___c_TypeDefinitionIndex = 27247;

	class PGEDFOBAEBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGEDFOBAEBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEDFOBAEBC___C_CTOR_OFFSET))(this);
		}

		::PGEDFOBAEBC* __cctor_b__33_0()
		{
			return ((::PGEDFOBAEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGEDFOBAEBC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
