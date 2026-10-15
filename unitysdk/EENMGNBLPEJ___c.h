#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EENMGNBLPEJ;
namespace System { class Object; }

#define EENMGNBLPEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2893E0)
#define EENMGNBLPEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E289420)
#define EENMGNBLPEJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E289430)

inline static constexpr unsigned int EENMGNBLPEJ___c_TypeDefinitionIndex = 32540;

	class EENMGNBLPEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x442C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENMGNBLPEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ___C_CTOR_OFFSET))(this);
		}

		::EENMGNBLPEJ* __cctor_b__38_0()
		{
			return ((::EENMGNBLPEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EENMGNBLPEJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
