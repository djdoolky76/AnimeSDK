#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDHLHNEACHP;
namespace System { class Object; }

#define HDHLHNEACHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54C160)
#define HDHLHNEACHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54C1A0)
#define HDHLHNEACHP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E54C1B0)

inline static constexpr unsigned int HDHLHNEACHP___c_TypeDefinitionIndex = 28423;

	class HDHLHNEACHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHLHNEACHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP___C_CTOR_OFFSET))(this);
		}

		::HDHLHNEACHP* __cctor_b__38_0()
		{
			return ((::HDHLHNEACHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHLHNEACHP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
