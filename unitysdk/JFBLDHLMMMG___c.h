#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBLDHLMMMG;
namespace System { class Object; }

#define JFBLDHLMMMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E724090)
#define JFBLDHLMMMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7240D0)
#define JFBLDHLMMMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7240E0)

	class JFBLDHLMMMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBLDHLMMMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG___C_CTOR_OFFSET))(this);
		}

		::JFBLDHLMMMG* __cctor_b__23_0()
		{
			return ((::JFBLDHLMMMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLDHLMMMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
