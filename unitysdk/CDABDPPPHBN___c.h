#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDABDPPPHBN;
namespace System { class Object; }

#define CDABDPPPHBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07F8E0)
#define CDABDPPPHBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07F910)
#define CDABDPPPHBN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E07F920)

	class CDABDPPPHBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDABDPPPHBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN___C_CTOR_OFFSET))(this);
		}

		::CDABDPPPHBN* __cctor_b__38_0()
		{
			return ((::CDABDPPPHBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDABDPPPHBN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
