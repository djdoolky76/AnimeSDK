#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKABLGLBPOA;
namespace System { class Object; }

#define OKABLGLBPOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E8A0)
#define OKABLGLBPOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E8E0)
#define OKABLGLBPOA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE8E8F0)

	class OKABLGLBPOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x208B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKABLGLBPOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA___C_CTOR_OFFSET))(this);
		}

		::OKABLGLBPOA* __cctor_b__38_0()
		{
			return ((::OKABLGLBPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABLGLBPOA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
