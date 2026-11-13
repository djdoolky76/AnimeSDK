#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLGMGNEOFBH;
namespace System { class Object; }

#define FLGMGNEOFBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE403B0)
#define FLGMGNEOFBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE403F0)
#define FLGMGNEOFBH___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FE40400)

inline static constexpr unsigned int FLGMGNEOFBH___c_TypeDefinitionIndex = 30071;

	class FLGMGNEOFBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C_CTOR_OFFSET))(this);
		}

		::FLGMGNEOFBH* __cctor_b__58_0()
		{
			return ((::FLGMGNEOFBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGMGNEOFBH___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
