#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class OBFADADBJHB;
namespace System { class Action; }
namespace System { class Object; }

#define OBFADADBJHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD3D020)
#define OBFADADBJHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD3D050)
#define OBFADADBJHB___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET UNITYSDK_OFFSET(0xBD3D060)
#define OBFADADBJHB___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET UNITYSDK_OFFSET(0xBD3D090)

	class OBFADADBJHB___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C470);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C478);
		}

		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBFADADBJHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFADADBJHB___C_CTOR_OFFSET))(this);
		}

		::System::Void _SetIgnoreExternalCollision_b__6_0(::OBFADADBJHB* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBFADADBJHB*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OBFADADBJHB___C__SETIGNOREEXTERNALCOLLISION_B__6_0_OFFSET))(this, a1, a2);
		}

		::System::Void _SetIgnoreExternalCollision_b__6_1(::OBFADADBJHB* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBFADADBJHB*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OBFADADBJHB___C__SETIGNOREEXTERNALCOLLISION_B__6_1_OFFSET))(this, a1, a2);
		}

	};
