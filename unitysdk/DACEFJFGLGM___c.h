#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACEFJFGLGM;
namespace System { class Object; }

#define DACEFJFGLGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14C8C0)
#define DACEFJFGLGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14C900)
#define DACEFJFGLGM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E14C910)

	class DACEFJFGLGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DACEFJFGLGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM___C_CTOR_OFFSET))(this);
		}

		::DACEFJFGLGM* __cctor_b__18_0()
		{
			return ((::DACEFJFGLGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACEFJFGLGM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
