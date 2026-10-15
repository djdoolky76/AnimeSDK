#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABKNCPGFADC;
namespace System { class Object; }

#define ABKNCPGFADC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA1090)
#define ABKNCPGFADC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA10D0)
#define ABKNCPGFADC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDA10E0)

inline static constexpr unsigned int ABKNCPGFADC___c_TypeDefinitionIndex = 29790;

	class ABKNCPGFADC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABKNCPGFADC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC___C_CTOR_OFFSET))(this);
		}

		::ABKNCPGFADC* __cctor_b__33_0()
		{
			return ((::ABKNCPGFADC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKNCPGFADC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
