#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOAJJMEGIFO;
namespace System { class Object; }

#define OOAJJMEGIFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19DC10)
#define OOAJJMEGIFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19DC50)
#define OOAJJMEGIFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F19DC60)

inline static constexpr unsigned int OOAJJMEGIFO___c_TypeDefinitionIndex = 35248;

	class OOAJJMEGIFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOAJJMEGIFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO___C_CTOR_OFFSET))(this);
		}

		::OOAJJMEGIFO* __cctor_b__28_0()
		{
			return ((::OOAJJMEGIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAJJMEGIFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
