#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class MonsterCardUtils_CardGroup; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1058C730)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1058C770)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__SORTMONSTERCARD_B__3_0_OFFSET UNITYSDK_OFFSET(0x1058C780)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils___c_TypeDefinitionIndex = 48900;

	class MonsterCardUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterCardUtils___c_TypeDefinitionIndex)->GetStaticField(0x42430);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonsterCardUtils___c_TypeDefinitionIndex)->GetStaticField(0x42438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortMonsterCard_b__3_0(::MoleMole::Utils::MonsterCardUtils_CardGroup* a, ::MoleMole::Utils::MonsterCardUtils_CardGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Utils::MonsterCardUtils_CardGroup*, ::MoleMole::Utils::MonsterCardUtils_CardGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__SORTMONSTERCARD_B__3_0_OFFSET))(this, a, b);
		}
	};
}
