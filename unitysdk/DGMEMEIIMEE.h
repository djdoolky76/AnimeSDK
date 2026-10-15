#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGMEMEIIMEE_CACDLKIPHHB_OFFSET UNITYSDK_OFFSET(0xE853A50)
#define DGMEMEIIMEE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8547C0)
#define DGMEMEIIMEE_EDCECJADAHE_OFFSET UNITYSDK_OFFSET(0xE854290)
#define DGMEMEIIMEE_FODBNKINJEC_OFFSET UNITYSDK_OFFSET(0xE853C10)

	class DGMEMEIIMEE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_JEBACNHEEPO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "DGMEMEIIMEE")->GetStaticField(0x60AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGMEMEIIMEE_CCTOR_OFFSET))();
		}

		static ::System::Void CACDLKIPHHB(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_CACDLKIPHHB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FODBNKINJEC(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_FODBNKINJEC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EDCECJADAHE(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_EDCECJADAHE_OFFSET))(a1, a2, a3);
		}

	};
