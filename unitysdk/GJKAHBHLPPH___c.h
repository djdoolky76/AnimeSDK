#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJKAHBHLPPH;
namespace System { class Object; }

#define GJKAHBHLPPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0240)
#define GJKAHBHLPPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0280)
#define GJKAHBHLPPH___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FBE0290)

inline static constexpr unsigned int GJKAHBHLPPH___c_TypeDefinitionIndex = 31535;

	class GJKAHBHLPPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x136D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJKAHBHLPPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKAHBHLPPH___C_CTOR_OFFSET))(this);
		}

		::GJKAHBHLPPH* __cctor_b__58_0()
		{
			return ((::GJKAHBHLPPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKAHBHLPPH___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
