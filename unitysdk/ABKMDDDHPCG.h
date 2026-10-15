#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABKMDDDHPCG_GHCBGCMCIIO_OFFSET UNITYSDK_OFFSET(0xF020)
#define ABKMDDDHPCG_HMOGJKLNPMA_OFFSET UNITYSDK_OFFSET(0xF000)
#define ABKMDDDHPCG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xF040)

inline static constexpr unsigned int ABKMDDDHPCG_TypeDefinitionIndex = 68484;

	struct alignas(8) ABKMDDDHPCG
	{
		::System::Boolean KKJLMNLCMBK; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single JNPLKDGJJMC; // 0x14
		::System::Single APAKCBFMCAB; // 0x18
		::System::Single CONJAMJKHBI; // 0x1C
		::RPG::Client::LookAtAdditiveCurveConstraint* HJFFHBPCBNC; // 0x20
		::System::Collections::Generic::List_1<::ABKMDDDHPCG>* MBENLBACNCG; // 0x28
		::System::Boolean HMOGJKLNPMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKMDDDHPCG_HMOGJKLNPMA_OFFSET))(this);
		}

		::System::Int32 GHCBGCMCIIO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABKMDDDHPCG_GHCBGCMCIIO_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Vector3 a1, ::RootMotion::IKJob::IKTransformRef a2, ::RootMotion::IKJob::IKTransformRef a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RootMotion::IKJob::IKTransformRef, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + ABKMDDDHPCG_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
