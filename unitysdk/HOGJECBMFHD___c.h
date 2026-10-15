#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOGJECBMFHD;
namespace System { class Object; }

#define HOGJECBMFHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E8360)
#define HOGJECBMFHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E83A0)
#define HOGJECBMFHD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5E83B0)

	class HOGJECBMFHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGJECBMFHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD___C_CTOR_OFFSET))(this);
		}

		::HOGJECBMFHD* __cctor_b__23_0()
		{
			return ((::HOGJECBMFHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
