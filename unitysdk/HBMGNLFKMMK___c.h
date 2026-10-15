#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBMGNLFKMMK;
namespace System { class Object; }

#define HBMGNLFKMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E500D30)
#define HBMGNLFKMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E500D70)
#define HBMGNLFKMMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E500D80)

inline static constexpr unsigned int HBMGNLFKMMK___c_TypeDefinitionIndex = 29858;

	class HBMGNLFKMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBMGNLFKMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK___C_CTOR_OFFSET))(this);
		}

		::HBMGNLFKMMK* __cctor_b__23_0()
		{
			return ((::HBMGNLFKMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMGNLFKMMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
