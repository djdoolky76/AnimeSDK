#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKIACMJGIKN;
namespace System { class Object; }

#define KKIACMJGIKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E879600)
#define KKIACMJGIKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E879630)
#define KKIACMJGIKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E879640)

inline static constexpr unsigned int KKIACMJGIKN___c_TypeDefinitionIndex = 27928;

	class KKIACMJGIKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKIACMJGIKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN___C_CTOR_OFFSET))(this);
		}

		::KKIACMJGIKN* __cctor_b__33_0()
		{
			return ((::KKIACMJGIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
