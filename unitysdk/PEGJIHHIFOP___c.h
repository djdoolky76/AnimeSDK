#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGJIHHIFOP;
namespace System { class Object; }

#define PEGJIHHIFOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A110)
#define PEGJIHHIFOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A150)
#define PEGJIHHIFOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF1A160)

inline static constexpr unsigned int PEGJIHHIFOP___c_TypeDefinitionIndex = 25151;

	class PEGJIHHIFOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGJIHHIFOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP___C_CTOR_OFFSET))(this);
		}

		::PEGJIHHIFOP* __cctor_b__23_0()
		{
			return ((::PEGJIHHIFOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJIHHIFOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
