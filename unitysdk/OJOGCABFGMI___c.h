#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJOGCABFGMI;
namespace System { class Object; }

#define OJOGCABFGMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A8B60)
#define OJOGCABFGMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A8BA0)
#define OJOGCABFGMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6A8BB0)

inline static constexpr unsigned int OJOGCABFGMI___c_TypeDefinitionIndex = 28712;

	class OJOGCABFGMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJOGCABFGMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI___C_CTOR_OFFSET))(this);
		}

		::OJOGCABFGMI* __cctor_b__28_0()
		{
			return ((::OJOGCABFGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOGCABFGMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
