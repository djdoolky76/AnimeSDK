#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJLCLLNALGA;
namespace BansheeGz::BGSpline::Curve { class ICustomBGCurve; }

#define BJIACBNKCCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BB9A0)

	class BJIACBNKCCJ : public ::System::Object
	{
	public:
		::Il2CppArray<::DJLCLLNALGA*>* LFFLDCAICMJ; // 0x10
		::BansheeGz::BGSpline::Curve::ICustomBGCurve* NLIFDJHPHLP; // 0x18
		::System::Boolean IGLNFOCGMFK; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single OJDCAPDHOIL; // 0x24
		::System::Single BMPGDKIMCGE; // 0x28
		::System::Single JJGOEDKMFPH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIACBNKCCJ_CTOR_OFFSET))(this);
		}

	};
