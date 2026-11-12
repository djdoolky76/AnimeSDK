#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGMDNBOLBMO;
namespace System { class Object; }

#define MGMDNBOLBMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD78890)
#define MGMDNBOLBMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD788D0)
#define MGMDNBOLBMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD788E0)

inline static constexpr unsigned int MGMDNBOLBMO___c_TypeDefinitionIndex = 26780;

	class MGMDNBOLBMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGMDNBOLBMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO___C_CTOR_OFFSET))(this);
		}

		::MGMDNBOLBMO* __cctor_b__23_0()
		{
			return ((::MGMDNBOLBMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
