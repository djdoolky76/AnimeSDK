#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAOLLLOFMKB;
namespace System { class Object; }

#define FAOLLLOFMKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF110)
#define FAOLLLOFMKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF150)
#define FAOLLLOFMKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2FF160)

inline static constexpr unsigned int FAOLLLOFMKB___c_TypeDefinitionIndex = 32773;

	class FAOLLLOFMKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C_CTOR_OFFSET))(this);
		}

		::FAOLLLOFMKB* __cctor_b__33_0()
		{
			return ((::FAOLLLOFMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOLLLOFMKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
