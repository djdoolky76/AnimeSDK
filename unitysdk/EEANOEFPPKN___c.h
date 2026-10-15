#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEANOEFPPKN;
namespace System { class Object; }

#define EEANOEFPPKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E237CB0)
#define EEANOEFPPKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E237CF0)
#define EEANOEFPPKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E237D00)

inline static constexpr unsigned int EEANOEFPPKN___c_TypeDefinitionIndex = 31901;

	class EEANOEFPPKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEANOEFPPKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN___C_CTOR_OFFSET))(this);
		}

		::EEANOEFPPKN* __cctor_b__28_0()
		{
			return ((::EEANOEFPPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
