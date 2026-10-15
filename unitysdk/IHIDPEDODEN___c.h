#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHIDPEDODEN;
namespace System { class Object; }

#define IHIDPEDODEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E651AE0)
#define IHIDPEDODEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E651B20)
#define IHIDPEDODEN___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x1E651B30)

inline static constexpr unsigned int IHIDPEDODEN___c_TypeDefinitionIndex = 25517;

	class IHIDPEDODEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHIDPEDODEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIDPEDODEN___C_CTOR_OFFSET))(this);
		}

		::IHIDPEDODEN* __cctor_b__49_0()
		{
			return ((::IHIDPEDODEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIDPEDODEN___C___CCTOR_B__49_0_OFFSET))(this);
		}

	};
