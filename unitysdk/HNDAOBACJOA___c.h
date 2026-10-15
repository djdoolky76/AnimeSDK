#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNDAOBACJOA;
namespace System { class Object; }

#define HNDAOBACJOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB7A0)
#define HNDAOBACJOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB7E0)
#define HNDAOBACJOA___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E5DB7F0)

	class HNDAOBACJOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDAOBACJOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDAOBACJOA___C_CTOR_OFFSET))(this);
		}

		::HNDAOBACJOA* __cctor_b__68_0()
		{
			return ((::HNDAOBACJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDAOBACJOA___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
