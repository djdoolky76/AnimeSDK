#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCIBLHJDPID;
namespace System { class Object; }

#define FCIBLHJDPID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8A9060)
#define FCIBLHJDPID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A90A0)
#define FCIBLHJDPID___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8A90B0)

inline static constexpr unsigned int FCIBLHJDPID___c_TypeDefinitionIndex = 32574;

	class FCIBLHJDPID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIBLHJDPID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIBLHJDPID___C_CTOR_OFFSET))(this);
		}

		::FCIBLHJDPID* __cctor_b__23_0()
		{
			return ((::FCIBLHJDPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIBLHJDPID___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
