#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGMALDABBE;
namespace System { class Object; }

#define IDGMALDABBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE7D0)
#define IDGMALDABBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE810)
#define IDGMALDABBE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5FE820)

inline static constexpr unsigned int IDGMALDABBE___c_TypeDefinitionIndex = 27613;

	class IDGMALDABBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x467F0);
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
