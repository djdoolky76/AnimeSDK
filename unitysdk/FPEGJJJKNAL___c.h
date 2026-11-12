#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPEGJJJKNAL;
namespace System { class Object; }

#define FPEGJJJKNAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F5100)
#define FPEGJJJKNAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F5140)
#define FPEGJJJKNAL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6F5150)

inline static constexpr unsigned int FPEGJJJKNAL___c_TypeDefinitionIndex = 31352;

	class FPEGJJJKNAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPEGJJJKNAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL___C_CTOR_OFFSET))(this);
		}

		::FPEGJJJKNAL* __cctor_b__33_0()
		{
			return ((::FPEGJJJKNAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEGJJJKNAL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
