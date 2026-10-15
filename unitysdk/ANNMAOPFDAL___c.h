#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNMAOPFDAL;
namespace System { class Object; }

#define ANNMAOPFDAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E637AE0)
#define ANNMAOPFDAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E637B20)
#define ANNMAOPFDAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E637B30)

inline static constexpr unsigned int ANNMAOPFDAL___c_TypeDefinitionIndex = 31242;

	class ANNMAOPFDAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNMAOPFDAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL___C_CTOR_OFFSET))(this);
		}

		::ANNMAOPFDAL* __cctor_b__18_0()
		{
			return ((::ANNMAOPFDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
