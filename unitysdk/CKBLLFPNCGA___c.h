#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKBLLFPNCGA;
namespace System { class Object; }

#define CKBLLFPNCGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3BA740)
#define CKBLLFPNCGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BA780)
#define CKBLLFPNCGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3BA790)

inline static constexpr unsigned int CKBLLFPNCGA___c_TypeDefinitionIndex = 31141;

	class CKBLLFPNCGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBLLFPNCGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA___C_CTOR_OFFSET))(this);
		}

		::CKBLLFPNCGA* __cctor_b__33_0()
		{
			return ((::CKBLLFPNCGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBLLFPNCGA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
