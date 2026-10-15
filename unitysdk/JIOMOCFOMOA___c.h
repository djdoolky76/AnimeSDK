#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIOMOCFOMOA;
namespace System { class Object; }

#define JIOMOCFOMOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E756150)
#define JIOMOCFOMOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E756190)
#define JIOMOCFOMOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7561A0)

	class JIOMOCFOMOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOMOCFOMOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA___C_CTOR_OFFSET))(this);
		}

		::JIOMOCFOMOA* __cctor_b__23_0()
		{
			return ((::JIOMOCFOMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOMOCFOMOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
