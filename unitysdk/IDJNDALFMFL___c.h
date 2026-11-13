#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJNDALFMFL;
namespace System { class Object; }

#define IDJNDALFMFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2013BB80)
#define IDJNDALFMFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2013BBC0)
#define IDJNDALFMFL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x2013BBD0)

inline static constexpr unsigned int IDJNDALFMFL___c_TypeDefinitionIndex = 32910;

	class IDJNDALFMFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJNDALFMFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL___C_CTOR_OFFSET))(this);
		}

		::IDJNDALFMFL* __cctor_b__43_0()
		{
			return ((::IDJNDALFMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJNDALFMFL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
