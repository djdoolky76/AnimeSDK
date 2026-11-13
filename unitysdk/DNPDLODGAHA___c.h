#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNPDLODGAHA;
namespace System { class Object; }

#define DNPDLODGAHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201EC2F0)
#define DNPDLODGAHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201EC330)
#define DNPDLODGAHA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x201EC340)

inline static constexpr unsigned int DNPDLODGAHA___c_TypeDefinitionIndex = 26192;

	class DNPDLODGAHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNPDLODGAHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPDLODGAHA___C_CTOR_OFFSET))(this);
		}

		::DNPDLODGAHA* __cctor_b__33_0()
		{
			return ((::DNPDLODGAHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPDLODGAHA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
