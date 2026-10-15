#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILOGENDCCG;
class NDEKPFNFNDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOEHODFOIGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA5D60)
#define HOEHODFOIGE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DA5E00)
#define HOEHODFOIGE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15DA5D70)

inline static constexpr unsigned int HOEHODFOIGE_TypeDefinitionIndex = 59073;

	class HOEHODFOIGE : public ::System::Object
	{
	public:
		::NDEKPFNFNDD* LEMBIAHABFA; // 0x10
		::EILOGENDCCG* JBFFLCHOKKO; // 0x18
		::System::Void _ctor(::EILOGENDCCG* a1, ::NDEKPFNFNDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EILOGENDCCG*, ::NDEKPFNFNDD*))((::PBYTE)hIl2Cpp + HOEHODFOIGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HOEHODFOIGE_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HOEHODFOIGE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
