#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPICFPDHEO;
namespace System { class Object; }

#define PKPICFPDHEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6CE40)
#define PKPICFPDHEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6CE70)
#define PKPICFPDHEO___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1DF6CE80)

inline static constexpr unsigned int PKPICFPDHEO___c_TypeDefinitionIndex = 30359;

	class PKPICFPDHEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPICFPDHEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPICFPDHEO___C_CTOR_OFFSET))(this);
		}

		::PKPICFPDHEO* __cctor_b__93_0()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPICFPDHEO___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
