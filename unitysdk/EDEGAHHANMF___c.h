#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEGAHHANMF;
namespace System { class Object; }

#define EDEGAHHANMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25E830)
#define EDEGAHHANMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25E870)
#define EDEGAHHANMF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E25E880)

	class EDEGAHHANMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDEGAHHANMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF___C_CTOR_OFFSET))(this);
		}

		::EDEGAHHANMF* __cctor_b__43_0()
		{
			return ((::EDEGAHHANMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEGAHHANMF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
