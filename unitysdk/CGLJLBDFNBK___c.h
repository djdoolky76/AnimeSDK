#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGLJLBDFNBK;
namespace System { class Object; }

#define CGLJLBDFNBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B28F0)
#define CGLJLBDFNBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B2920)
#define CGLJLBDFNBK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0B2930)

inline static constexpr unsigned int CGLJLBDFNBK___c_TypeDefinitionIndex = 25883;

	class CGLJLBDFNBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x145B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLJLBDFNBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK___C_CTOR_OFFSET))(this);
		}

		::CGLJLBDFNBK* __cctor_b__28_0()
		{
			return ((::CGLJLBDFNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
