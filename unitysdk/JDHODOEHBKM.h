#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MockAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define JDHODOEHBKM_LACCACBOACA_OFFSET UNITYSDK_OFFSET(0x165CC570)
#define JDHODOEHBKM_MFICHELGPFA_OFFSET UNITYSDK_OFFSET(0x165CC340)
#define JDHODOEHBKM_PEIAGNIBNNN_OFFSET UNITYSDK_OFFSET(0x165CC3D0)

inline static constexpr unsigned int JDHODOEHBKM_TypeDefinitionIndex = 73332;

	class JDHODOEHBKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>** StaticGet_GEINKILMOFD()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>**)UnitySDK::FromName("", "JDHODOEHBKM")->GetStaticField(0x6F130);
		}

		static ::System::Int32* StaticGet_CDEGBHMDMNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDHODOEHBKM")->GetStaticField(0x15800);
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
