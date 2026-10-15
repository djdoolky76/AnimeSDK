#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGNGBABEENA;
namespace System { class Object; }

#define FGNGBABEENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E356240)
#define FGNGBABEENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E356280)
#define FGNGBABEENA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E356290)

inline static constexpr unsigned int FGNGBABEENA___c_TypeDefinitionIndex = 28980;

	class FGNGBABEENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNGBABEENA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA___C_CTOR_OFFSET))(this);
		}

		::FGNGBABEENA* __cctor_b__23_0()
		{
			return ((::FGNGBABEENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGNGBABEENA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
