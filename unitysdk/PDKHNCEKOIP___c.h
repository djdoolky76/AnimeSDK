#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDKHNCEKOIP;
namespace System { class Object; }

#define PDKHNCEKOIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF119F0)
#define PDKHNCEKOIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF11A30)
#define PDKHNCEKOIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF11A40)

inline static constexpr unsigned int PDKHNCEKOIP___c_TypeDefinitionIndex = 30989;

	class PDKHNCEKOIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKHNCEKOIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP___C_CTOR_OFFSET))(this);
		}

		::PDKHNCEKOIP* __cctor_b__23_0()
		{
			return ((::PDKHNCEKOIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
