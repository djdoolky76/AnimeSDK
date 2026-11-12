#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDPPHEFGONA_BEJEGECHBAD_OFFSET UNITYSDK_OFFSET(0x165FD340)
#define FDPPHEFGONA_BOPMPPBDEKH_OFFSET UNITYSDK_OFFSET(0x165FD620)
#define FDPPHEFGONA_FHOEGCBAIEJ_OFFSET UNITYSDK_OFFSET(0x165FD4A0)

inline static constexpr unsigned int FDPPHEFGONA_TypeDefinitionIndex = 61400;

	class FDPPHEFGONA : public ::System::Object
	{
	public:
		static ::System::Boolean BEJEGECHBAD(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::RPG::GameCore::PointEvaluatorConfig* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::RPG::GameCore::PointEvaluatorConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FDPPHEFGONA_BEJEGECHBAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FHOEGCBAIEJ(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FDPPHEFGONA_FHOEGCBAIEJ_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 BOPMPPBDEKH(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointEvaluatorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointEvaluatorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FDPPHEFGONA_BOPMPPBDEKH_OFFSET))(a1, a2, a3);
		}

	};
