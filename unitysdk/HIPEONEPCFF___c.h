#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIPEONEPCFF;
namespace System { class Object; }

#define HIPEONEPCFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0530)
#define HIPEONEPCFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0570)
#define HIPEONEPCFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5A0580)

	class HIPEONEPCFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPEONEPCFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF___C_CTOR_OFFSET))(this);
		}

		::HIPEONEPCFF* __cctor_b__33_0()
		{
			return ((::HIPEONEPCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPEONEPCFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
