#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JACCKHFDPCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x165405D0)
#define JACCKHFDPCK_DGBHFNCJEGP_OFFSET UNITYSDK_OFFSET(0x16540490)
#define JACCKHFDPCK_DGIFGCJKELM_OFFSET UNITYSDK_OFFSET(0x16540340)

inline static constexpr unsigned int JACCKHFDPCK_TypeDefinitionIndex = 60110;

	class JACCKHFDPCK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_GGEDMGOGICB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "JACCKHFDPCK")->GetStaticField(0x60AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JACCKHFDPCK_CCTOR_OFFSET))();
		}

		static ::System::Single DGIFGCJKELM(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JACCKHFDPCK_DGIFGCJKELM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DGBHFNCJEGP(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JACCKHFDPCK_DGBHFNCJEGP_OFFSET))(a1, a2, a3);
		}

	};
