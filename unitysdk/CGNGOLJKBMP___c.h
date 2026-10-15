#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNGOLJKBMP;
namespace System { class Object; }

#define CGNGOLJKBMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6CA0)
#define CGNGOLJKBMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6CD0)
#define CGNGOLJKBMP___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E0B6CE0)

	class CGNGOLJKBMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNGOLJKBMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNGOLJKBMP___C_CTOR_OFFSET))(this);
		}

		::CGNGOLJKBMP* __cctor_b__73_0()
		{
			return ((::CGNGOLJKBMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNGOLJKBMP___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
