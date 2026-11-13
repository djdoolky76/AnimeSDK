#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIICGMJNBO;
namespace System { class Object; }

#define HDIICGMJNBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F876310)
#define HDIICGMJNBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F876340)
#define HDIICGMJNBO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F876350)

inline static constexpr unsigned int HDIICGMJNBO___c_TypeDefinitionIndex = 34210;

	class HDIICGMJNBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIICGMJNBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO___C_CTOR_OFFSET))(this);
		}

		::HDIICGMJNBO* __cctor_b__33_0()
		{
			return ((::HDIICGMJNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
