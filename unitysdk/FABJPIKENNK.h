#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILOGENDCCG;
class NDEKPFNFNDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FABJPIKENNK_CTOR_OFFSET UNITYSDK_OFFSET(0x165777A0)
#define FABJPIKENNK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16577840)
#define FABJPIKENNK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x165777B0)

inline static constexpr unsigned int FABJPIKENNK_TypeDefinitionIndex = 60350;

	class FABJPIKENNK : public ::System::Object
	{
	public:
		::EILOGENDCCG* JBFFLCHOKKO; // 0x10
		::NDEKPFNFNDD* LEMBIAHABFA; // 0x18
		::System::Void _ctor(::EILOGENDCCG* a1, ::NDEKPFNFNDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EILOGENDCCG*, ::NDEKPFNFNDD*))((::PBYTE)hIl2Cpp + FABJPIKENNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FABJPIKENNK_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FABJPIKENNK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
