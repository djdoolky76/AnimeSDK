#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABAJJKIIFBG;
namespace System { class Object; }

#define ABAJJKIIFBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC94C0)
#define ABAJJKIIFBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC9500)
#define ABAJJKIIFBG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EFC9510)

inline static constexpr unsigned int ABAJJKIIFBG___c_TypeDefinitionIndex = 34127;

	class ABAJJKIIFBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x330E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAJJKIIFBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG___C_CTOR_OFFSET))(this);
		}

		::ABAJJKIIFBG* __cctor_b__33_0()
		{
			return ((::ABAJJKIIFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAJJKIIFBG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
