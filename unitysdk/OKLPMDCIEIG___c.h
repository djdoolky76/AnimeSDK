#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLPMDCIEIG;
namespace System { class Object; }

#define OKLPMDCIEIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD5ED80)
#define OKLPMDCIEIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5EDC0)
#define OKLPMDCIEIG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD5EDD0)

inline static constexpr unsigned int OKLPMDCIEIG___c_TypeDefinitionIndex = 26070;

	class OKLPMDCIEIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C_CTOR_OFFSET))(this);
		}

		::OKLPMDCIEIG* __cctor_b__38_0()
		{
			return ((::OKLPMDCIEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
