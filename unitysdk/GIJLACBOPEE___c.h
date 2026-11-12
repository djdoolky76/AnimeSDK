#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIJLACBOPEE;
namespace System { class Object; }

#define GIJLACBOPEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F78F1A0)
#define GIJLACBOPEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F78F1E0)
#define GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F78F1F0)

inline static constexpr unsigned int GIJLACBOPEE___c_TypeDefinitionIndex = 35348;

	class GIJLACBOPEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C_CTOR_OFFSET))(this);
		}

		::GIJLACBOPEE* __cctor_b__33_0()
		{
			return ((::GIJLACBOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLACBOPEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
