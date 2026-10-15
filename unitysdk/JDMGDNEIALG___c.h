#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMGDNEIALG;
namespace System { class Object; }

#define JDMGDNEIALG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70E6B0)
#define JDMGDNEIALG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70E6F0)
#define JDMGDNEIALG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E70E700)

	class JDMGDNEIALG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMGDNEIALG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG___C_CTOR_OFFSET))(this);
		}

		::JDMGDNEIALG* __cctor_b__33_0()
		{
			return ((::JDMGDNEIALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMGDNEIALG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
