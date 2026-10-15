#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAxis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ADPIAKKFOHJ;
class MODOCHKMLAM;
namespace UnityEngine { class Transform; }

#define NJNAOJBGIHE_BGLPIGMJOLF_1_OFFSET UNITYSDK_OFFSET(0xBC21510)
#define NJNAOJBGIHE_BGLPIGMJOLF_OFFSET UNITYSDK_OFFSET(0xBC20210)
#define NJNAOJBGIHE_CFLALCJPNLL_OFFSET UNITYSDK_OFFSET(0xBC25E20)
#define NJNAOJBGIHE_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xBC24520)
#define NJNAOJBGIHE_OOKNCAEHMHA_1_OFFSET UNITYSDK_OFFSET(0xBC23680)
#define NJNAOJBGIHE_OOKNCAEHMHA_OFFSET UNITYSDK_OFFSET(0xBC227D0)
#define NJNAOJBGIHE_PBEJLBLLACE_1_OFFSET UNITYSDK_OFFSET(0xBC21DA0)
#define NJNAOJBGIHE_PBEJLBLLACE_OFFSET UNITYSDK_OFFSET(0xBC20A90)

inline static constexpr unsigned int NJNAOJBGIHE_TypeDefinitionIndex = 68481;

	class NJNAOJBGIHE : public ::System::Object
	{
	public:
		static ::System::Single BGLPIGMJOLF(::ADPIAKKFOHJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Single(*)(::ADPIAKKFOHJ*, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_BGLPIGMJOLF_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 PBEJLBLLACE(::ADPIAKKFOHJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Transform* a5)
		{
			return ((::UnityEngine::Vector3(*)(::ADPIAKKFOHJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_PBEJLBLLACE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single BGLPIGMJOLF_1(::ADPIAKKFOHJ* a1, ::UnityEngine::Vector3 a2, ::RootMotion::IKJob::IKTransformRef a3, ::RootMotion::IKJob::IKTransformRef a4)
		{
			return ((::System::Single(*)(::ADPIAKKFOHJ*, ::UnityEngine::Vector3, ::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_BGLPIGMJOLF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 PBEJLBLLACE_1(::ADPIAKKFOHJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RootMotion::IKJob::IKTransformRef a5)
		{
			return ((::UnityEngine::Vector3(*)(::ADPIAKKFOHJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_PBEJLBLLACE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void OOKNCAEHMHA(::MODOCHKMLAM* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::EAxis a5, ::UnityEngine::Transform* a6, ::UnityEngine::Transform* a7)
		{
			return ((::System::Void(*)(::MODOCHKMLAM*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::GameCore::EAxis, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_OOKNCAEHMHA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void OOKNCAEHMHA_1(::MODOCHKMLAM* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::EAxis a5, ::RootMotion::IKJob::IKTransformRef a6, ::RootMotion::IKJob::IKTransformRef a7)
		{
			return ((::System::Void(*)(::MODOCHKMLAM*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::RPG::GameCore::EAxis, ::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_OOKNCAEHMHA_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void FHPAOJGFHHE(::ADPIAKKFOHJ* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::ADPIAKKFOHJ*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_FHPAOJGFHHE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CFLALCJPNLL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NJNAOJBGIHE_CFLALCJPNLL_OFFSET))(a1, a2, a3, a4);
		}

	};
