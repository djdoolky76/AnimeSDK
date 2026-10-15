#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLCPGAGPBDL;
namespace System { class Object; }

#define MLCPGAGPBDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA81550)
#define MLCPGAGPBDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA81580)
#define MLCPGAGPBDL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA81590)

	class MLCPGAGPBDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLCPGAGPBDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL___C_CTOR_OFFSET))(this);
		}

		::MLCPGAGPBDL* __cctor_b__43_0()
		{
			return ((::MLCPGAGPBDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCPGAGPBDL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
