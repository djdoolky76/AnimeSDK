#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCFLPGNOJE;
namespace System { class Object; }

#define LDCFLPGNOJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3DC0)
#define LDCFLPGNOJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3E00)
#define LDCFLPGNOJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8F3E10)

	class LDCFLPGNOJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x339D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCFLPGNOJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE___C_CTOR_OFFSET))(this);
		}

		::LDCFLPGNOJE* __cctor_b__28_0()
		{
			return ((::LDCFLPGNOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCFLPGNOJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
