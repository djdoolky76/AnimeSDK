#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLCKAFPJCI;
namespace System { class Object; }

#define GDLCKAFPJCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73C080)
#define GDLCKAFPJCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73C0C0)
#define GDLCKAFPJCI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F73C0D0)

inline static constexpr unsigned int GDLCKAFPJCI___c_TypeDefinitionIndex = 34288;

	class GDLCKAFPJCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLCKAFPJCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI___C_CTOR_OFFSET))(this);
		}

		::GDLCKAFPJCI* __cctor_b__33_0()
		{
			return ((::GDLCKAFPJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLCKAFPJCI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
