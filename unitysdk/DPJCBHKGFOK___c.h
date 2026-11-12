#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPJCBHKGFOK;
namespace System { class Object; }

#define DPJCBHKGFOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4F1290)
#define DPJCBHKGFOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F12D0)
#define DPJCBHKGFOK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4F12E0)

inline static constexpr unsigned int DPJCBHKGFOK___c_TypeDefinitionIndex = 33435;

	class DPJCBHKGFOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPJCBHKGFOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK___C_CTOR_OFFSET))(this);
		}

		::DPJCBHKGFOK* __cctor_b__23_0()
		{
			return ((::DPJCBHKGFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJCBHKGFOK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
