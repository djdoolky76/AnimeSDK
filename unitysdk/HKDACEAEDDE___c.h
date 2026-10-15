#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKDACEAEDDE;
namespace System { class Object; }

#define HKDACEAEDDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF870)
#define HKDACEAEDDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF8B0)
#define HKDACEAEDDE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5AF8C0)

	class HKDACEAEDDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKDACEAEDDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDACEAEDDE___C_CTOR_OFFSET))(this);
		}

		::HKDACEAEDDE* __cctor_b__23_0()
		{
			return ((::HKDACEAEDDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDACEAEDDE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
