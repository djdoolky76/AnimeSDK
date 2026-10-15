#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKCIKLPNODD;
namespace System { class Object; }

#define MKCIKLPNODD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA53CE0)
#define MKCIKLPNODD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA53D20)
#define MKCIKLPNODD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA53D30)

	class MKCIKLPNODD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x565A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCIKLPNODD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD___C_CTOR_OFFSET))(this);
		}

		::MKCIKLPNODD* __cctor_b__23_0()
		{
			return ((::MKCIKLPNODD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCIKLPNODD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
