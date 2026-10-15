#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBEEKFJAHM;
namespace System { class Object; }

#define EJBEEKFJAHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFEE0)
#define EJBEEKFJAHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFF20)
#define EJBEEKFJAHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2AFF30)

inline static constexpr unsigned int EJBEEKFJAHM___c_TypeDefinitionIndex = 33359;

	class EJBEEKFJAHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBEEKFJAHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM___C_CTOR_OFFSET))(this);
		}

		::EJBEEKFJAHM* __cctor_b__23_0()
		{
			return ((::EJBEEKFJAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBEEKFJAHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
