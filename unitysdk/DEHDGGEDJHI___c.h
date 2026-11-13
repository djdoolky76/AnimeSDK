#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEHDGGEDJHI;
namespace System { class Object; }

#define DEHDGGEDJHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFA64D0)
#define DEHDGGEDJHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA6510)
#define DEHDGGEDJHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FFA6520)

inline static constexpr unsigned int DEHDGGEDJHI___c_TypeDefinitionIndex = 26180;

	class DEHDGGEDJHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHDGGEDJHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI___C_CTOR_OFFSET))(this);
		}

		::DEHDGGEDJHI* __cctor_b__23_0()
		{
			return ((::DEHDGGEDJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
