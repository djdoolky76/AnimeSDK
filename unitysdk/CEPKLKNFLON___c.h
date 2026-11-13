#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEPKLKNFLON;
namespace System { class Object; }

#define CEPKLKNFLON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204D57B0)
#define CEPKLKNFLON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204D57E0)
#define CEPKLKNFLON___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x204D57F0)

inline static constexpr unsigned int CEPKLKNFLON___c_TypeDefinitionIndex = 35358;

	class CEPKLKNFLON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEPKLKNFLON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON___C_CTOR_OFFSET))(this);
		}

		::CEPKLKNFLON* __cctor_b__18_0()
		{
			return ((::CEPKLKNFLON*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPKLKNFLON___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
