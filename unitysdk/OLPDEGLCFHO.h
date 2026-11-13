#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/CustomizedMonsterStanceBarType.h"
#include "unitysdk/System/Object.h"
class KILLLKIAIDO;
class NILMOLIGDGM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLPDEGLCFHO_KIGEEELHLML_OFFSET UNITYSDK_OFFSET(0x17D3F120)
#define OLPDEGLCFHO_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x17D3ECA0)
#define OLPDEGLCFHO_NJDDHHLFALN_OFFSET UNITYSDK_OFFSET(0x17D3EEB0)

inline static constexpr unsigned int OLPDEGLCFHO_TypeDefinitionIndex = 73796;

	class OLPDEGLCFHO : public ::System::Object
	{
	public:
		static ::System::Boolean LHLALAKKKKJ(::RPG::GameCore::CustomizedMonsterStanceBarType a1, ::NILMOLIGDGM* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CustomizedMonsterStanceBarType, ::NILMOLIGDGM*, ::System::Object*))((::PBYTE)hIl2Cpp + OLPDEGLCFHO_LHLALAKKKKJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::KILLLKIAIDO*>* NJDDHHLFALN(::Il2CppArray<::RPG::GameCore::AttackType>* a1)
		{
			return ((::System::Collections::Generic::List_1<::KILLLKIAIDO*>*(*)(::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + OLPDEGLCFHO_NJDDHHLFALN_OFFSET))(a1);
		}

		static ::System::String* KIGEEELHLML(::RPG::GameCore::AttackType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + OLPDEGLCFHO_KIGEEELHLML_OFFSET))(a1);
		}

	};
