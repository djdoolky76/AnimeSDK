#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMHGACEKFBF;
namespace System { class Object; }

#define AMHGACEKFBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F52D0)
#define AMHGACEKFBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5310)
#define AMHGACEKFBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4F5320)

inline static constexpr unsigned int AMHGACEKFBF___c_TypeDefinitionIndex = 35061;

	class AMHGACEKFBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45650);
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
