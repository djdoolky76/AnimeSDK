#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMHGACEKFBF;
namespace System { class Object; }

#define AMHGACEKFBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2002FF60)
#define AMHGACEKFBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2002FFA0)
#define AMHGACEKFBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2002FFB0)

inline static constexpr unsigned int AMHGACEKFBF___c_TypeDefinitionIndex = 35989;

	class AMHGACEKFBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHGACEKFBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF___C_CTOR_OFFSET))(this);
		}

		::AMHGACEKFBF* __cctor_b__28_0()
		{
			return ((::AMHGACEKFBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
