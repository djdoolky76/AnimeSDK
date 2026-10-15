#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABAIDFKODPJ;
namespace System { class Object; }

#define ABAIDFKODPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC5F00)
#define ABAIDFKODPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC5F40)
#define ABAIDFKODPJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDC5F50)

inline static constexpr unsigned int ABAIDFKODPJ___c_TypeDefinitionIndex = 31257;

	class ABAIDFKODPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x383C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAIDFKODPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ___C_CTOR_OFFSET))(this);
		}

		::ABAIDFKODPJ* __cctor_b__38_0()
		{
			return ((::ABAIDFKODPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
