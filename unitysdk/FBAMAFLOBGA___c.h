#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBAMAFLOBGA;
namespace System { class Object; }

#define FBAMAFLOBGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32DF30)
#define FBAMAFLOBGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32DF70)
#define FBAMAFLOBGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E32DF80)

inline static constexpr unsigned int FBAMAFLOBGA___c_TypeDefinitionIndex = 26958;

	class FBAMAFLOBGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBAMAFLOBGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA___C_CTOR_OFFSET))(this);
		}

		::FBAMAFLOBGA* __cctor_b__28_0()
		{
			return ((::FBAMAFLOBGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMAFLOBGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
