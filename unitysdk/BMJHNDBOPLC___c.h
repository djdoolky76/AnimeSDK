#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHNDBOPLC;
namespace System { class Object; }

#define BMJHNDBOPLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC79690)
#define BMJHNDBOPLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC796C0)
#define BMJHNDBOPLC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC796D0)

inline static constexpr unsigned int BMJHNDBOPLC___c_TypeDefinitionIndex = 27208;

	class BMJHNDBOPLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59460);
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
