#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIPLAHLMKM;
namespace System { class Object; }

#define FLIPLAHLMKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C4050)
#define FLIPLAHLMKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C4090)
#define FLIPLAHLMKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6C40A0)

inline static constexpr unsigned int FLIPLAHLMKM___c_TypeDefinitionIndex = 28934;

	class FLIPLAHLMKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ADC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPLAHLMKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM___C_CTOR_OFFSET))(this);
		}

		::FLIPLAHLMKM* __cctor_b__23_0()
		{
			return ((::FLIPLAHLMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
