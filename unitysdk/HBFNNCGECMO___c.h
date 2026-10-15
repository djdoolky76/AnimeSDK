#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFNNCGECMO;
namespace System { class Object; }

#define HBFNNCGECMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FE8B0)
#define HBFNNCGECMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FE8F0)
#define HBFNNCGECMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4FE900)

inline static constexpr unsigned int HBFNNCGECMO___c_TypeDefinitionIndex = 26952;

	class HBFNNCGECMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFNNCGECMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO___C_CTOR_OFFSET))(this);
		}

		::HBFNNCGECMO* __cctor_b__23_0()
		{
			return ((::HBFNNCGECMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFNNCGECMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
