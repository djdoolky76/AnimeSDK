#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPNPDPIBNBB;
namespace System { class Object; }

#define JPNPDPIBNBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DAE60)
#define JPNPDPIBNBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DAEA0)
#define JPNPDPIBNBB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7DAEB0)

	class JPNPDPIBNBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPNPDPIBNBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB___C_CTOR_OFFSET))(this);
		}

		::JPNPDPIBNBB* __cctor_b__28_0()
		{
			return ((::JPNPDPIBNBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
