#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACNGKFJELH;
namespace System { class Object; }

#define LACNGKFJELH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC06610)
#define LACNGKFJELH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC06650)
#define LACNGKFJELH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC06660)

inline static constexpr unsigned int LACNGKFJELH___c_TypeDefinitionIndex = 26611;

	class LACNGKFJELH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACNGKFJELH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH___C_CTOR_OFFSET))(this);
		}

		::LACNGKFJELH* __cctor_b__43_0()
		{
			return ((::LACNGKFJELH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACNGKFJELH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
