#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGMALDABBE;
namespace System { class Object; }

#define IDGMALDABBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F948B10)
#define IDGMALDABBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F948B50)
#define IDGMALDABBE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F948B60)

inline static constexpr unsigned int IDGMALDABBE___c_TypeDefinitionIndex = 28144;

	class IDGMALDABBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGMALDABBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE___C_CTOR_OFFSET))(this);
		}

		::IDGMALDABBE* __cctor_b__43_0()
		{
			return ((::IDGMALDABBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
