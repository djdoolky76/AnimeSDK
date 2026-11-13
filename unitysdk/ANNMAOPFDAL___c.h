#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNMAOPFDAL;
namespace System { class Object; }

#define ANNMAOPFDAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A3740)
#define ANNMAOPFDAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201A3780)
#define ANNMAOPFDAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x201A3790)

inline static constexpr unsigned int ANNMAOPFDAL___c_TypeDefinitionIndex = 32155;

	class ANNMAOPFDAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C6C0);
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
