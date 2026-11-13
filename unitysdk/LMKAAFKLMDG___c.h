#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKAAFKLMDG;
namespace System { class Object; }

#define LMKAAFKLMDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF55BD0)
#define LMKAAFKLMDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF55C10)
#define LMKAAFKLMDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF55C20)

inline static constexpr unsigned int LMKAAFKLMDG___c_TypeDefinitionIndex = 31422;

	class LMKAAFKLMDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C_CTOR_OFFSET))(this);
		}

		::LMKAAFKLMDG* __cctor_b__33_0()
		{
			return ((::LMKAAFKLMDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAFKLMDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
