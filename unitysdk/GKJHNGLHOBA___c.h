#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJHNGLHOBA;
namespace System { class Object; }

#define GKJHNGLHOBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48AF50)
#define GKJHNGLHOBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48AF90)
#define GKJHNGLHOBA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E48AFA0)

inline static constexpr unsigned int GKJHNGLHOBA___c_TypeDefinitionIndex = 31289;

	class GKJHNGLHOBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C_CTOR_OFFSET))(this);
		}

		::GKJHNGLHOBA* __cctor_b__33_0()
		{
			return ((::GKJHNGLHOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
