#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MockAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define JDHODOEHBKM_LACCACBOACA_OFFSET UNITYSDK_OFFSET(0x165BD0A0)
#define JDHODOEHBKM_MFICHELGPFA_OFFSET UNITYSDK_OFFSET(0x165BCE70)
#define JDHODOEHBKM_PEIAGNIBNNN_OFFSET UNITYSDK_OFFSET(0x165BCF00)

inline static constexpr unsigned int JDHODOEHBKM_TypeDefinitionIndex = 73331;

	class JDHODOEHBKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>** StaticGet_GEINKILMOFD()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>**)UnitySDK::FromName("", "JDHODOEHBKM")->GetStaticField(0x6E8B0);
		}

		static ::System::Int32* StaticGet_CDEGBHMDMNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDHODOEHBKM")->GetStaticField(0x155B0);
		}

		static ::RPG::Client::MockAnimator* MFICHELGPFA(::UnityEngine::Animator* a1)
		{
			return ((::RPG::Client::MockAnimator*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + JDHODOEHBKM_MFICHELGPFA_OFFSET))(a1);
		}

		static ::System::Void PEIAGNIBNNN(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + JDHODOEHBKM_PEIAGNIBNNN_OFFSET))(a1);
		}

		static ::System::Void LACCACBOACA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDHODOEHBKM_LACCACBOACA_OFFSET))();
		}

	};
