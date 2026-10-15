#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEOBLDJAOPE;
namespace System { class Object; }

#define HEOBLDJAOPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55E010)
#define HEOBLDJAOPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55E040)
#define HEOBLDJAOPE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E55E050)

	class HEOBLDJAOPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x335F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOBLDJAOPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE___C_CTOR_OFFSET))(this);
		}

		::HEOBLDJAOPE* __cctor_b__28_0()
		{
			return ((::HEOBLDJAOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
