#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINFNFIDGFF;
namespace System { class Object; }

#define AINFNFIDGFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E281B80)
#define AINFNFIDGFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E281BC0)
#define AINFNFIDGFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E281BD0)

	class AINFNFIDGFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AINFNFIDGFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFNFIDGFF___C_CTOR_OFFSET))(this);
		}

		::AINFNFIDGFF* __cctor_b__33_0()
		{
			return ((::AINFNFIDGFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFNFIDGFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
