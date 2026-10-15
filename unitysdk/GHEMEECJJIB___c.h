#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHEMEECJJIB;
namespace System { class Object; }

#define GHEMEECJJIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E486DA0)
#define GHEMEECJJIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E486DE0)
#define GHEMEECJJIB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E486DF0)

	class GHEMEECJJIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHEMEECJJIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB___C_CTOR_OFFSET))(this);
		}

		::GHEMEECJJIB* __cctor_b__28_0()
		{
			return ((::GHEMEECJJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
