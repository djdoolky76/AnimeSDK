#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGABKEMOBEB;
namespace System { class Object; }

#define CGABKEMOBEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA5D0)
#define CGABKEMOBEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA610)
#define CGABKEMOBEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0AA620)

	class CGABKEMOBEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x139D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGABKEMOBEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB___C_CTOR_OFFSET))(this);
		}

		::CGABKEMOBEB* __cctor_b__23_0()
		{
			return ((::CGABKEMOBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGABKEMOBEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
