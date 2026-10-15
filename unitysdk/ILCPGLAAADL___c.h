#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCPGLAAADL;
namespace System { class Object; }

#define ILCPGLAAADL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA650)
#define ILCPGLAAADL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA690)
#define ILCPGLAAADL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6AA6A0)

inline static constexpr unsigned int ILCPGLAAADL___c_TypeDefinitionIndex = 29579;

	class ILCPGLAAADL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x560A0);
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
