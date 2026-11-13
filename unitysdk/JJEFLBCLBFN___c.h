#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEFLBCLBFN;
namespace System { class Object; }

#define JJEFLBCLBFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF2A300)
#define JJEFLBCLBFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF2A330)
#define JJEFLBCLBFN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF2A340)

inline static constexpr unsigned int JJEFLBCLBFN___c_TypeDefinitionIndex = 31373;

	class JJEFLBCLBFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJEFLBCLBFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN___C_CTOR_OFFSET))(this);
		}

		::JJEFLBCLBFN* __cctor_b__33_0()
		{
			return ((::JJEFLBCLBFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEFLBCLBFN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
