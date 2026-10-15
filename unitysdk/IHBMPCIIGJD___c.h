#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHBMPCIIGJD;
namespace System { class Object; }

#define IHBMPCIIGJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E658570)
#define IHBMPCIIGJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6585B0)
#define IHBMPCIIGJD___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E6585C0)

	class IHBMPCIIGJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHBMPCIIGJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMPCIIGJD___C_CTOR_OFFSET))(this);
		}

		::IHBMPCIIGJD* __cctor_b__58_0()
		{
			return ((::IHBMPCIIGJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBMPCIIGJD___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
