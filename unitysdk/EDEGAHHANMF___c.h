#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEGAHHANMF;
namespace System { class Object; }

#define EDEGAHHANMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F384B50)
#define EDEGAHHANMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F384B90)
#define EDEGAHHANMF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F384BA0)

inline static constexpr unsigned int EDEGAHHANMF___c_TypeDefinitionIndex = 29478;

	class EDEGAHHANMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEGAHHANMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF___C_CTOR_OFFSET))(this);
		}

		::EDEGAHHANMF* __cctor_b__43_0()
		{
			return ((::EDEGAHHANMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
