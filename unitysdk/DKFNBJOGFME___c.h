#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFNBJOGFME;
namespace System { class Object; }

#define DKFNBJOGFME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9140)
#define DKFNBJOGFME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9170)
#define DKFNBJOGFME___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1A9180)

inline static constexpr unsigned int DKFNBJOGFME___c_TypeDefinitionIndex = 34112;

	class DKFNBJOGFME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKFNBJOGFME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFNBJOGFME___C_CTOR_OFFSET))(this);
		}

		::DKFNBJOGFME* __cctor_b__48_0()
		{
			return ((::DKFNBJOGFME*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFNBJOGFME___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
