#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEFAKCMDGNB;
namespace System { class Object; }

#define LEFAKCMDGNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FACD0)
#define LEFAKCMDGNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FAD00)
#define LEFAKCMDGNB___C___CCTOR_B__67_0_OFFSET UNITYSDK_OFFSET(0x1E8FAD10)

inline static constexpr unsigned int LEFAKCMDGNB___c_TypeDefinitionIndex = 33188;

	class LEFAKCMDGNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEFAKCMDGNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAKCMDGNB___C_CTOR_OFFSET))(this);
		}

		::LEFAKCMDGNB* __cctor_b__67_0()
		{
			return ((::LEFAKCMDGNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFAKCMDGNB___C___CCTOR_B__67_0_OFFSET))(this);
		}

	};
