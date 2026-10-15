#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGABJLKFON;
namespace System { class Object; }

#define NAGABJLKFON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0D70)
#define NAGABJLKFON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC0DB0)
#define NAGABJLKFON___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAC0DC0)

inline static constexpr unsigned int NAGABJLKFON___c_TypeDefinitionIndex = 33679;

	class NAGABJLKFON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGABJLKFON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON___C_CTOR_OFFSET))(this);
		}

		::NAGABJLKFON* __cctor_b__33_0()
		{
			return ((::NAGABJLKFON*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGABJLKFON___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
