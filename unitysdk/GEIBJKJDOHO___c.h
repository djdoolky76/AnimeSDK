#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEIBJKJDOHO;
namespace System { class Object; }

#define GEIBJKJDOHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C5E0)
#define GEIBJKJDOHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42C620)
#define GEIBJKJDOHO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E42C630)

inline static constexpr unsigned int GEIBJKJDOHO___c_TypeDefinitionIndex = 29493;

	class GEIBJKJDOHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIBJKJDOHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO___C_CTOR_OFFSET))(this);
		}

		::GEIBJKJDOHO* __cctor_b__33_0()
		{
			return ((::GEIBJKJDOHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
