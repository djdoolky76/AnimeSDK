#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMFLOBEGHNM;
namespace System { class Object; }

#define OMFLOBEGHNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB42D0)
#define OMFLOBEGHNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4300)
#define OMFLOBEGHNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB4310)

	class OMFLOBEGHNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C_CTOR_OFFSET))(this);
		}

		::OMFLOBEGHNM* __cctor_b__28_0()
		{
			return ((::OMFLOBEGHNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFLOBEGHNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
