#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AANLJBLOOFO;
namespace System { class Object; }

#define AANLJBLOOFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC21C0)
#define AANLJBLOOFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC2200)
#define AANLJBLOOFO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DDC2210)

inline static constexpr unsigned int AANLJBLOOFO___c_TypeDefinitionIndex = 26844;

	class AANLJBLOOFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AANLJBLOOFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO___C_CTOR_OFFSET))(this);
		}

		::AANLJBLOOFO* __cctor_b__48_0()
		{
			return ((::AANLJBLOOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANLJBLOOFO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
