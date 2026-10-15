#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDMBCADIHLN;
namespace System { class Object; }

#define BDMBCADIHLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91BC30)
#define BDMBCADIHLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91BC60)
#define BDMBCADIHLN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E91BC70)

	class BDMBCADIHLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDMBCADIHLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN___C_CTOR_OFFSET))(this);
		}

		::BDMBCADIHLN* __cctor_b__28_0()
		{
			return ((::BDMBCADIHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
