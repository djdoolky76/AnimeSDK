#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FPOFOJLALIE;
class KIJDCAAPBLM;
class PFGPEHMCHDK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMCAHMCAPOH_DHDFPNINDFM_OFFSET UNITYSDK_OFFSET(0xBF20D20)
#define OMCAHMCAPOH_HMFDIMLPEAN_OFFSET UNITYSDK_OFFSET(0xBF1F730)
#define OMCAHMCAPOH_OOHHKONPBJM_OFFSET UNITYSDK_OFFSET(0xBF200B0)

inline static constexpr unsigned int OMCAHMCAPOH_TypeDefinitionIndex = 54194;

	class OMCAHMCAPOH : public ::System::Object
	{
	public:
		static ::PFGPEHMCHDK* HMFDIMLPEAN(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::Il2CppArray<::FPOFOJLALIE*>* a3, ::System::Int32 a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::String* a10)
		{
			return ((::PFGPEHMCHDK*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::FPOFOJLALIE*>*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + OMCAHMCAPOH_HMFDIMLPEAN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::KIJDCAAPBLM* OOHHKONPBJM(::RPG::GameCore::TaskContext* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::FPOFOJLALIE* a5)
		{
			return ((::KIJDCAAPBLM*(*)(::RPG::GameCore::TaskContext*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::FPOFOJLALIE*))((::PBYTE)hIl2Cpp + OMCAHMCAPOH_OOHHKONPBJM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::MVector3 DHDFPNINDFM(::System::Collections::Generic::List_1<::RPG::MVector3>* a1)
		{
			return ((::RPG::MVector3(*)(::System::Collections::Generic::List_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + OMCAHMCAPOH_DHDFPNINDFM_OFFSET))(a1);
		}

	};
