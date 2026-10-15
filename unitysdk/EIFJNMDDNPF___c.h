#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFJNMDDNPF;
namespace System { class Object; }

#define EIFJNMDDNPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A91D0)
#define EIFJNMDDNPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9210)
#define EIFJNMDDNPF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2A9220)

inline static constexpr unsigned int EIFJNMDDNPF___c_TypeDefinitionIndex = 27125;

	class EIFJNMDDNPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x498E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFJNMDDNPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF___C_CTOR_OFFSET))(this);
		}

		::EIFJNMDDNPF* __cctor_b__23_0()
		{
			return ((::EIFJNMDDNPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFJNMDDNPF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
