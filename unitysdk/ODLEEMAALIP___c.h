#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODLEEMAALIP;
namespace System { class Object; }

#define ODLEEMAALIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C1A90)
#define ODLEEMAALIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C1AD0)
#define ODLEEMAALIP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F0C1AE0)

inline static constexpr unsigned int ODLEEMAALIP___c_TypeDefinitionIndex = 32468;

	class ODLEEMAALIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODLEEMAALIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLEEMAALIP___C_CTOR_OFFSET))(this);
		}

		::ODLEEMAALIP* __cctor_b__58_0()
		{
			return ((::ODLEEMAALIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLEEMAALIP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
