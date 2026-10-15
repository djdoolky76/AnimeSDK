#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMLFNKOCLN;
namespace System { class Object; }

#define OIMLFNKOCLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE746D0)
#define OIMLFNKOCLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE74700)
#define OIMLFNKOCLN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE74710)

	class OIMLFNKOCLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C_CTOR_OFFSET))(this);
		}

		::OIMLFNKOCLN* __cctor_b__18_0()
		{
			return ((::OIMLFNKOCLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
