#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMJLBNKPDOO;
namespace System { class Object; }

#define KMJLBNKPDOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89CC60)
#define KMJLBNKPDOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89CC90)
#define KMJLBNKPDOO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E89CCA0)

inline static constexpr unsigned int KMJLBNKPDOO___c_TypeDefinitionIndex = 26871;

	class KMJLBNKPDOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMJLBNKPDOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLBNKPDOO___C_CTOR_OFFSET))(this);
		}

		::KMJLBNKPDOO* __cctor_b__48_0()
		{
			return ((::KMJLBNKPDOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJLBNKPDOO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
