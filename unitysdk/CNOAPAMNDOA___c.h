#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOAPAMNDOA;
namespace System { class Object; }

#define CNOAPAMNDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12F6B0)
#define CNOAPAMNDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12F6F0)
#define CNOAPAMNDOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E12F700)

	class CNOAPAMNDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOAPAMNDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA___C_CTOR_OFFSET))(this);
		}

		::CNOAPAMNDOA* __cctor_b__33_0()
		{
			return ((::CNOAPAMNDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAPAMNDOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
