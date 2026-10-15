#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCLEMGPEMJJ_BLBIIBDHFNF;
class ILOOAAOHIIG;

#define FCLEMGPEMJJ___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156CD0B0)
#define FCLEMGPEMJJ___C__DISPLAYCLASS42_0___ONSELECTMOLDMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x156CD7E0)

inline static constexpr unsigned int FCLEMGPEMJJ___c__DisplayClass42_0_TypeDefinitionIndex = 79468;

	class FCLEMGPEMJJ___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::FCLEMGPEMJJ_BLBIIBDHFNF* message; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnSelectMoldMessage_b__0(::ILOOAAOHIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C__DISPLAYCLASS42_0___ONSELECTMOLDMESSAGE_B__0_OFFSET))(this, a1);
		}

	};
