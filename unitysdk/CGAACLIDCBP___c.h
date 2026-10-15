#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGAACLIDCBP;
namespace System { class Object; }

#define CGAACLIDCBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9920)
#define CGAACLIDCBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9960)
#define CGAACLIDCBP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0A9970)

	class CGAACLIDCBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGAACLIDCBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP___C_CTOR_OFFSET))(this);
		}

		::CGAACLIDCBP* __cctor_b__23_0()
		{
			return ((::CGAACLIDCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
