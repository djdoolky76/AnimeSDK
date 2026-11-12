#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGACDOLAOF;
namespace System { class Object; }

#define OGGACDOLAOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F7900)
#define OGGACDOLAOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F7930)
#define OGGACDOLAOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0F7940)

inline static constexpr unsigned int OGGACDOLAOF___c_TypeDefinitionIndex = 26430;

	class OGGACDOLAOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x136F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGGACDOLAOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF___C_CTOR_OFFSET))(this);
		}

		::OGGACDOLAOF* __cctor_b__28_0()
		{
			return ((::OGGACDOLAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGACDOLAOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
