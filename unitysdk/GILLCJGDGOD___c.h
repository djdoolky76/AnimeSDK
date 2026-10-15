#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GILLCJGDGOD;
namespace System { class Object; }

#define GILLCJGDGOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49FB60)
#define GILLCJGDGOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49FB90)
#define GILLCJGDGOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E49FBA0)

inline static constexpr unsigned int GILLCJGDGOD___c_TypeDefinitionIndex = 32357;

	class GILLCJGDGOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILLCJGDGOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD___C_CTOR_OFFSET))(this);
		}

		::GILLCJGDGOD* __cctor_b__23_0()
		{
			return ((::GILLCJGDGOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
