#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPLMMCGAJDF;
namespace System { class Object; }

#define NPLMMCGAJDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9E720)
#define NPLMMCGAJDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9E760)
#define NPLMMCGAJDF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB9E770)

	class NPLMMCGAJDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPLMMCGAJDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF___C_CTOR_OFFSET))(this);
		}

		::NPLMMCGAJDF* __cctor_b__38_0()
		{
			return ((::NPLMMCGAJDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
