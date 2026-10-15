#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHNDBOPLC;
namespace System { class Object; }

#define BMJHNDBOPLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E029910)
#define BMJHNDBOPLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E029940)
#define BMJHNDBOPLC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E029950)

	class BMJHNDBOPLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJHNDBOPLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHNDBOPLC___C_CTOR_OFFSET))(this);
		}

		::BMJHNDBOPLC* __cctor_b__18_0()
		{
			return ((::BMJHNDBOPLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHNDBOPLC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
