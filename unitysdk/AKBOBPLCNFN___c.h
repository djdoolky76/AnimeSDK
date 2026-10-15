#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBOBPLCNFN;
namespace System { class Object; }

#define AKBOBPLCNFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39B100)
#define AKBOBPLCNFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39B130)
#define AKBOBPLCNFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E39B140)

inline static constexpr unsigned int AKBOBPLCNFN___c_TypeDefinitionIndex = 34627;

	class AKBOBPLCNFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKBOBPLCNFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN___C_CTOR_OFFSET))(this);
		}

		::AKBOBPLCNFN* __cctor_b__23_0()
		{
			return ((::AKBOBPLCNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBOBPLCNFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
