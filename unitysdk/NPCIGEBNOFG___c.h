#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPCIGEBNOFG;
namespace System { class Object; }

#define NPCIGEBNOFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB947B0)
#define NPCIGEBNOFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB947E0)
#define NPCIGEBNOFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB947F0)

	class NPCIGEBNOFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCIGEBNOFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG___C_CTOR_OFFSET))(this);
		}

		::NPCIGEBNOFG* __cctor_b__28_0()
		{
			return ((::NPCIGEBNOFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
