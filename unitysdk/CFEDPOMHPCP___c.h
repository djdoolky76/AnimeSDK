#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEDPOMHPCP;
namespace System { class Object; }

#define CFEDPOMHPCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E073700)
#define CFEDPOMHPCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E073740)
#define CFEDPOMHPCP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E073750)

inline static constexpr unsigned int CFEDPOMHPCP___c_TypeDefinitionIndex = 28162;

	class CFEDPOMHPCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEDPOMHPCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP___C_CTOR_OFFSET))(this);
		}

		::CFEDPOMHPCP* __cctor_b__58_0()
		{
			return ((::CFEDPOMHPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDPOMHPCP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
