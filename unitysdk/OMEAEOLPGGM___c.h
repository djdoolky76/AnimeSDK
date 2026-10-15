#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMEAEOLPGGM;
namespace System { class Object; }

#define OMEAEOLPGGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB27C0)
#define OMEAEOLPGGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB27F0)
#define OMEAEOLPGGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB2800)

	class OMEAEOLPGGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMEAEOLPGGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEAEOLPGGM___C_CTOR_OFFSET))(this);
		}

		::OMEAEOLPGGM* __cctor_b__28_0()
		{
			return ((::OMEAEOLPGGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEAEOLPGGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
