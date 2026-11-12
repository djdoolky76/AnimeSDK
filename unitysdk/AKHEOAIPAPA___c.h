#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEOAIPAPA;
namespace System { class Object; }

#define AKHEOAIPAPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68A260)
#define AKHEOAIPAPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F68A2A0)
#define AKHEOAIPAPA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F68A2B0)

inline static constexpr unsigned int AKHEOAIPAPA___c_TypeDefinitionIndex = 27576;

	class AKHEOAIPAPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C_CTOR_OFFSET))(this);
		}

		::AKHEOAIPAPA* __cctor_b__43_0()
		{
			return ((::AKHEOAIPAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
