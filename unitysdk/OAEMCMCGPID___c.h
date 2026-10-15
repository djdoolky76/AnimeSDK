#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAEMCMCGPID;
namespace System { class Object; }

#define OAEMCMCGPID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB797A0)
#define OAEMCMCGPID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB797E0)
#define OAEMCMCGPID___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB797F0)

inline static constexpr unsigned int OAEMCMCGPID___c_TypeDefinitionIndex = 33681;

	class OAEMCMCGPID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xECF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAEMCMCGPID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID___C_CTOR_OFFSET))(this);
		}

		::OAEMCMCGPID* __cctor_b__18_0()
		{
			return ((::OAEMCMCGPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEMCMCGPID___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
