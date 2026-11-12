#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAEKHIDCFHF;
namespace System { class Object; }

#define GAEKHIDCFHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F709170)
#define GAEKHIDCFHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7091B0)
#define GAEKHIDCFHF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7091C0)

inline static constexpr unsigned int GAEKHIDCFHF___c_TypeDefinitionIndex = 30503;

	class GAEKHIDCFHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C_CTOR_OFFSET))(this);
		}

		::GAEKHIDCFHF* __cctor_b__38_0()
		{
			return ((::GAEKHIDCFHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEKHIDCFHF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
