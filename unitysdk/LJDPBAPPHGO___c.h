#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJDPBAPPHGO;
namespace System { class Object; }

#define LJDPBAPPHGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9792E0)
#define LJDPBAPPHGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E979310)
#define LJDPBAPPHGO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E979320)

	class LJDPBAPPHGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C_CTOR_OFFSET))(this);
		}

		::LJDPBAPPHGO* __cctor_b__48_0()
		{
			return ((::LJDPBAPPHGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
