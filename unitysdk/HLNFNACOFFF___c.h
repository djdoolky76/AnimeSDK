#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNFNACOFFF;
namespace System { class Object; }

#define HLNFNACOFFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E596340)
#define HLNFNACOFFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E596380)
#define HLNFNACOFFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E596390)

inline static constexpr unsigned int HLNFNACOFFF___c_TypeDefinitionIndex = 34755;

	class HLNFNACOFFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x381D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNFNACOFFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF___C_CTOR_OFFSET))(this);
		}

		::HLNFNACOFFF* __cctor_b__33_0()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNFNACOFFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
