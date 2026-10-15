#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCNLJNELKEO;
namespace System { class Object; }

#define JCNLJNELKEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7053E0)
#define JCNLJNELKEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E705410)
#define JCNLJNELKEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E705420)

	class JCNLJNELKEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCNLJNELKEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO___C_CTOR_OFFSET))(this);
		}

		::JCNLJNELKEO* __cctor_b__23_0()
		{
			return ((::JCNLJNELKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
