#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoRenderHandler; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MATERIALMODIFIERTARGETTING_BIFJGAGBEGI_OFFSET UNITYSDK_OFFSET(0x180F4A80)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_CIIPFOLJAIE_OFFSET UNITYSDK_OFFSET(0x180F4F00)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_COANKBABIDM_OFFSET UNITYSDK_OFFSET(0x180F5400)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180F4A20)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_EKGGBBBDOGI_OFFSET UNITYSDK_OFFSET(0x180F4E80)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING_PEDAEOFCJGI_OFFSET UNITYSDK_OFFSET(0x180F4F80)
#define MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x180F4A70)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialModifierTargetting_TypeDefinitionIndex = 80098;

	class MaterialModifierTargetting : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::MaterialModifierTargetting*>* OnChanged; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Boolean applyAllMaterials; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* customMaterialIndexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_DISPOSE_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* BIFJGAGBEGI()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_BIFJGAGBEGI_OFFSET))(this);
		}

		::System::Void EKGGBBBDOGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_EKGGBBBDOGI_OFFSET))(this);
		}

		::System::Void CIIPFOLJAIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_CIIPFOLJAIE_OFFSET))(this);
		}

		::System::Int32 PEDAEOFCJGI(::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_PEDAEOFCJGI_OFFSET))(this, AOKHOHCJNFJ);
		}

		::System::Void COANKBABIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALMODIFIERTARGETTING_COANKBABIDM_OFFSET))(this);
		}
	};
}
