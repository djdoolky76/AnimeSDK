#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIELNDDHPA;
namespace System { class Object; }

#define HGIELNDDHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57B4E0)
#define HGIELNDDHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57B520)
#define HGIELNDDHPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E57B530)

	class HGIELNDDHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x376B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIELNDDHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA___C_CTOR_OFFSET))(this);
		}

		::HGIELNDDHPA* __cctor_b__28_0()
		{
			return ((::HGIELNDDHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIELNDDHPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
