#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANGPHPGFCL;
namespace System { class Object; }

#define GANGPHPGFCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7500)
#define GANGPHPGFCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7540)
#define GANGPHPGFCL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F7550)

inline static constexpr unsigned int GANGPHPGFCL___c_TypeDefinitionIndex = 29230;

	class GANGPHPGFCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANGPHPGFCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL___C_CTOR_OFFSET))(this);
		}

		::GANGPHPGFCL* __cctor_b__28_0()
		{
			return ((::GANGPHPGFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
