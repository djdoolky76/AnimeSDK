#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLAJEPIPOMO;
namespace System { class Object; }

#define DLAJEPIPOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DCE10)
#define DLAJEPIPOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DCE50)
#define DLAJEPIPOMO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1DCE60)

	class DLAJEPIPOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAJEPIPOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO___C_CTOR_OFFSET))(this);
		}

		::DLAJEPIPOMO* __cctor_b__28_0()
		{
			return ((::DLAJEPIPOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAJEPIPOMO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
