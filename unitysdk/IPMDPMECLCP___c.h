#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPMDPMECLCP;
namespace System { class Object; }

#define IPMDPMECLCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F0AD0)
#define IPMDPMECLCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F0B10)
#define IPMDPMECLCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9F0B20)

inline static constexpr unsigned int IPMDPMECLCP___c_TypeDefinitionIndex = 35110;

	class IPMDPMECLCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPMDPMECLCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP___C_CTOR_OFFSET))(this);
		}

		::IPMDPMECLCP* __cctor_b__28_0()
		{
			return ((::IPMDPMECLCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMDPMECLCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
