#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHDBOHHNOME;
namespace System { class Object; }

#define GHDBOHHNOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E485F50)
#define GHDBOHHNOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485F90)
#define GHDBOHHNOME___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E485FA0)

	class GHDBOHHNOME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHDBOHHNOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME___C_CTOR_OFFSET))(this);
		}

		::GHDBOHHNOME* __cctor_b__18_0()
		{
			return ((::GHDBOHHNOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDBOHHNOME___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
