#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLGMGNEOFBH;
namespace System { class Object; }

#define FLGMGNEOFBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BB520)
#define FLGMGNEOFBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BB560)
#define FLGMGNEOFBH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E3BB570)

inline static constexpr unsigned int FLGMGNEOFBH___c_TypeDefinitionIndex = 29359;

	class FLGMGNEOFBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C_CTOR_OFFSET))(this);
		}

		::FLGMGNEOFBH* __cctor_b__43_0()
		{
			return ((::FLGMGNEOFBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
