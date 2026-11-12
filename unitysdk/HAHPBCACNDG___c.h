#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAHPBCACNDG;
namespace System { class Object; }

#define HAHPBCACNDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F819490)
#define HAHPBCACNDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8194D0)
#define HAHPBCACNDG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F8194E0)

inline static constexpr unsigned int HAHPBCACNDG___c_TypeDefinitionIndex = 27951;

	class HAHPBCACNDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAHPBCACNDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG___C_CTOR_OFFSET))(this);
		}

		::HAHPBCACNDG* __cctor_b__18_0()
		{
			return ((::HAHPBCACNDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHPBCACNDG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
