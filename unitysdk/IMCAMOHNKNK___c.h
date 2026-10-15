#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMCAMOHNKNK;
namespace System { class Object; }

#define IMCAMOHNKNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B4910)
#define IMCAMOHNKNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B4950)
#define IMCAMOHNKNK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6B4960)

	class IMCAMOHNKNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMCAMOHNKNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMOHNKNK___C_CTOR_OFFSET))(this);
		}

		::IMCAMOHNKNK* __cctor_b__28_0()
		{
			return ((::IMCAMOHNKNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCAMOHNKNK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
