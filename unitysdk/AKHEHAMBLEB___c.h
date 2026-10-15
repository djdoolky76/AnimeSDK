#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEHAMBLEB;
namespace System { class Object; }

#define AKHEHAMBLEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39E650)
#define AKHEHAMBLEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39E690)
#define AKHEHAMBLEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E39E6A0)

inline static constexpr unsigned int AKHEHAMBLEB___c_TypeDefinitionIndex = 29259;

	class AKHEHAMBLEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C_CTOR_OFFSET))(this);
		}

		::AKHEHAMBLEB* __cctor_b__28_0()
		{
			return ((::AKHEHAMBLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEHAMBLEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
