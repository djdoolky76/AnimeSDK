#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOGABJBJAG;
namespace System { class Object; }

#define MOOGABJBJAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF1A0D0)
#define MOOGABJBJAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1A110)
#define MOOGABJBJAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF1A120)

inline static constexpr unsigned int MOOGABJBJAG___c_TypeDefinitionIndex = 29521;

	class MOOGABJBJAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOGABJBJAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG___C_CTOR_OFFSET))(this);
		}

		::MOOGABJBJAG* __cctor_b__23_0()
		{
			return ((::MOOGABJBJAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOGABJBJAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
