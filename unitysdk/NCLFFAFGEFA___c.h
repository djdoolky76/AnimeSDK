#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCLFFAFGEFA;
namespace System { class Object; }

#define NCLFFAFGEFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE09A0)
#define NCLFFAFGEFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE09E0)
#define NCLFFAFGEFA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAE09F0)

inline static constexpr unsigned int NCLFFAFGEFA___c_TypeDefinitionIndex = 33584;

	class NCLFFAFGEFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLFFAFGEFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA___C_CTOR_OFFSET))(this);
		}

		::NCLFFAFGEFA* __cctor_b__18_0()
		{
			return ((::NCLFFAFGEFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFFAFGEFA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
