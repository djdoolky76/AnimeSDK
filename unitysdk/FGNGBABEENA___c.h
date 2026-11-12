#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGNGBABEENA;
namespace System { class Object; }

#define FGNGBABEENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66C070)
#define FGNGBABEENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F66C0B0)
#define FGNGBABEENA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F66C0C0)

inline static constexpr unsigned int FGNGBABEENA___c_TypeDefinitionIndex = 29570;

	class FGNGBABEENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E200);
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
