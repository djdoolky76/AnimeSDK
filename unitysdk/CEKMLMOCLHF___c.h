#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEKMLMOCLHF;
namespace System { class Object; }

#define CEKMLMOCLHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F35F3B0)
#define CEKMLMOCLHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F35F3F0)
#define CEKMLMOCLHF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F35F400)

inline static constexpr unsigned int CEKMLMOCLHF___c_TypeDefinitionIndex = 28635;

	class CEKMLMOCLHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEKMLMOCLHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF___C_CTOR_OFFSET))(this);
		}

		::CEKMLMOCLHF* __cctor_b__38_0()
		{
			return ((::CEKMLMOCLHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKMLMOCLHF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
