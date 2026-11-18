#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AED910)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14AED950)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__ONPROCESS_B__7_6_OFFSET UNITYSDK_OFFSET(0x14AED960)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj___c_TypeDefinitionIndex = 65509;

	class HallRefreshShowObj___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HallRefreshShowObj___c_TypeDefinitionIndex)->GetStaticField(0x3EA60);
		}
		static ::System::Action** StaticGet___9__7_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HallRefreshShowObj___c_TypeDefinitionIndex)->GetStaticField(0x3EA68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__7_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__ONPROCESS_B__7_6_OFFSET))(this);
		}
	};
}
