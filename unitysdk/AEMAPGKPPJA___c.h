#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEMAPGKPPJA;
namespace System { class Object; }

#define AEMAPGKPPJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E1960)
#define AEMAPGKPPJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E1990)
#define AEMAPGKPPJA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E0E19A0)

inline static constexpr unsigned int AEMAPGKPPJA___c_TypeDefinitionIndex = 27310;

	class AEMAPGKPPJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x347A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEMAPGKPPJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA___C_CTOR_OFFSET))(this);
		}

		::AEMAPGKPPJA* __cctor_b__43_0()
		{
			return ((::AEMAPGKPPJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMAPGKPPJA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
