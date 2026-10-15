#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGCMGAMHDHM;
namespace System { class Object; }

#define JGCMGAMHDHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7381A0)
#define JGCMGAMHDHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7381D0)
#define JGCMGAMHDHM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7381E0)

	class JGCMGAMHDHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGCMGAMHDHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM___C_CTOR_OFFSET))(this);
		}

		::JGCMGAMHDHM* __cctor_b__28_0()
		{
			return ((::JGCMGAMHDHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
