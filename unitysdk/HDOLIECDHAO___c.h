#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDOLIECDHAO;
namespace System { class Object; }

#define HDOLIECDHAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F84C800)
#define HDOLIECDHAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84C840)
#define HDOLIECDHAO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F84C850)

inline static constexpr unsigned int HDOLIECDHAO___c_TypeDefinitionIndex = 29944;

	class HDOLIECDHAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOLIECDHAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO___C_CTOR_OFFSET))(this);
		}

		::HDOLIECDHAO* __cctor_b__18_0()
		{
			return ((::HDOLIECDHAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOLIECDHAO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
