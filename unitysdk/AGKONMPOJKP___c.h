#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKONMPOJKP;
namespace System { class Object; }

#define AGKONMPOJKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12EAD0)
#define AGKONMPOJKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12EB10)
#define AGKONMPOJKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E12EB20)

inline static constexpr unsigned int AGKONMPOJKP___c_TypeDefinitionIndex = 32967;

	class AGKONMPOJKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGKONMPOJKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP___C_CTOR_OFFSET))(this);
		}

		::AGKONMPOJKP* __cctor_b__23_0()
		{
			return ((::AGKONMPOJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
