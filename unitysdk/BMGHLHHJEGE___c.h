#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGHLHHJEGE;
namespace System { class Object; }

#define BMGHLHHJEGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E026040)
#define BMGHLHHJEGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E026080)
#define BMGHLHHJEGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E026090)

	class BMGHLHHJEGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C_CTOR_OFFSET))(this);
		}

		::BMGHLHHJEGE* __cctor_b__28_0()
		{
			return ((::BMGHLHHJEGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
