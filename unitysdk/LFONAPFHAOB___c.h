#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFONAPFHAOB;
namespace System { class Object; }

#define LFONAPFHAOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB4360)
#define LFONAPFHAOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB43A0)
#define LFONAPFHAOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAB43B0)

inline static constexpr unsigned int LFONAPFHAOB___c_TypeDefinitionIndex = 30282;

	class LFONAPFHAOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFONAPFHAOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB___C_CTOR_OFFSET))(this);
		}

		::LFONAPFHAOB* __cctor_b__23_0()
		{
			return ((::LFONAPFHAOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFONAPFHAOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
