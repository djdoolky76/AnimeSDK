#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHFBNKIHGIH;
namespace System { class Object; }

#define AHFBNKIHGIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26EAF0)
#define AHFBNKIHGIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26EB30)
#define AHFBNKIHGIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E26EB40)

	class AHFBNKIHGIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHFBNKIHGIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH___C_CTOR_OFFSET))(this);
		}

		::AHFBNKIHGIH* __cctor_b__28_0()
		{
			return ((::AHFBNKIHGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFBNKIHGIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
