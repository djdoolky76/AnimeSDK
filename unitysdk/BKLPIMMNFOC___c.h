#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKLPIMMNFOC;
namespace System { class Object; }

#define BKLPIMMNFOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5E140)
#define BKLPIMMNFOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5E180)
#define BKLPIMMNFOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC5E190)

inline static constexpr unsigned int BKLPIMMNFOC___c_TypeDefinitionIndex = 26262;

	class BKLPIMMNFOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKLPIMMNFOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC___C_CTOR_OFFSET))(this);
		}

		::BKLPIMMNFOC* __cctor_b__28_0()
		{
			return ((::BKLPIMMNFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLPIMMNFOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
