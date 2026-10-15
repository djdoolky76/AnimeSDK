#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKHCGGLIMF;
namespace System { class Object; }

#define JLKHCGGLIMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77FBA0)
#define JLKHCGGLIMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77FBD0)
#define JLKHCGGLIMF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E77FBE0)

	class JLKHCGGLIMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKHCGGLIMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF___C_CTOR_OFFSET))(this);
		}

		::JLKHCGGLIMF* __cctor_b__18_0()
		{
			return ((::JLKHCGGLIMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKHCGGLIMF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
