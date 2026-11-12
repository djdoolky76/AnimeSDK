#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGPLPCCDBJ;
namespace System { class Object; }

#define JBGPLPCCDBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA02030)
#define JBGPLPCCDBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA02070)
#define JBGPLPCCDBJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA02080)

inline static constexpr unsigned int JBGPLPCCDBJ___c_TypeDefinitionIndex = 33393;

	class JBGPLPCCDBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGPLPCCDBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ___C_CTOR_OFFSET))(this);
		}

		::JBGPLPCCDBJ* __cctor_b__33_0()
		{
			return ((::JBGPLPCCDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGPLPCCDBJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
