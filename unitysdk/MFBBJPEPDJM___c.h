#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBBJPEPDJM;
namespace System { class Object; }

#define MFBBJPEPDJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA14F60)
#define MFBBJPEPDJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA14FA0)
#define MFBBJPEPDJM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA14FB0)

	class MFBBJPEPDJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBBJPEPDJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBJPEPDJM___C_CTOR_OFFSET))(this);
		}

		::MFBBJPEPDJM* __cctor_b__28_0()
		{
			return ((::MFBBJPEPDJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBBJPEPDJM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
