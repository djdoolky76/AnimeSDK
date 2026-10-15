#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EICJHGLMLIK;
namespace System { class Object; }

#define EICJHGLMLIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5C60)
#define EICJHGLMLIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5CA0)
#define EICJHGLMLIK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2A5CB0)

inline static constexpr unsigned int EICJHGLMLIK___c_TypeDefinitionIndex = 35013;

	class EICJHGLMLIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x494E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EICJHGLMLIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK___C_CTOR_OFFSET))(this);
		}

		::EICJHGLMLIK* __cctor_b__28_0()
		{
			return ((::EICJHGLMLIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICJHGLMLIK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
