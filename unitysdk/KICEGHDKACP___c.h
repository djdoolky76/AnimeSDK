#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KICEGHDKACP;
namespace System { class Object; }

#define KICEGHDKACP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E828150)
#define KICEGHDKACP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E828190)
#define KICEGHDKACP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8281A0)

inline static constexpr unsigned int KICEGHDKACP___c_TypeDefinitionIndex = 34719;

	class KICEGHDKACP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KICEGHDKACP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP___C_CTOR_OFFSET))(this);
		}

		::KICEGHDKACP* __cctor_b__33_0()
		{
			return ((::KICEGHDKACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICEGHDKACP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
