#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKGLCLFLAKO;
namespace System { class Object; }

#define IKGLCLFLAKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E673970)
#define IKGLCLFLAKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6739B0)
#define IKGLCLFLAKO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6739C0)

inline static constexpr unsigned int IKGLCLFLAKO___c_TypeDefinitionIndex = 34405;

	class IKGLCLFLAKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKGLCLFLAKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO___C_CTOR_OFFSET))(this);
		}

		::IKGLCLFLAKO* __cctor_b__18_0()
		{
			return ((::IKGLCLFLAKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGLCLFLAKO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
