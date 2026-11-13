#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCPGLAAADL;
namespace System { class Object; }

#define ILCPGLAAADL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B0480)
#define ILCPGLAAADL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B04C0)
#define ILCPGLAAADL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x206B04D0)

inline static constexpr unsigned int ILCPGLAAADL___c_TypeDefinitionIndex = 30359;

	class ILCPGLAAADL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCPGLAAADL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCPGLAAADL___C_CTOR_OFFSET))(this);
		}

		::ILCPGLAAADL* __cctor_b__18_0()
		{
			return ((::ILCPGLAAADL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCPGLAAADL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
