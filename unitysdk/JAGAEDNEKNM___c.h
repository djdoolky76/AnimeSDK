#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAGAEDNEKNM;
namespace System { class Object; }

#define JAGAEDNEKNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEEF3D0)
#define JAGAEDNEKNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEF410)
#define JAGAEDNEKNM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FEEF420)

inline static constexpr unsigned int JAGAEDNEKNM___c_TypeDefinitionIndex = 26848;

	class JAGAEDNEKNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAGAEDNEKNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM___C_CTOR_OFFSET))(this);
		}

		::JAGAEDNEKNM* __cctor_b__33_0()
		{
			return ((::JAGAEDNEKNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGAEDNEKNM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
