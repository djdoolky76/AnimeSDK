#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEDHMLJKIOA;
namespace System { class Object; }

#define NEDHMLJKIOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1C00)
#define NEDHMLJKIOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1C30)
#define NEDHMLJKIOA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAF1C40)

	class NEDHMLJKIOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDHMLJKIOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA___C_CTOR_OFFSET))(this);
		}

		::NEDHMLJKIOA* __cctor_b__28_0()
		{
			return ((::NEDHMLJKIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDHMLJKIOA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
