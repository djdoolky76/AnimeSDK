#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define AMAHFAIGEIJ_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x2E74A70)
#define AMAHFAIGEIJ_HDNPLMPOEOA_OFFSET UNITYSDK_OFFSET(0x2E74A80)
#define AMAHFAIGEIJ_MOFKDLANDGM_OFFSET UNITYSDK_OFFSET(0x2E74A90)

inline static constexpr unsigned int AMAHFAIGEIJ_TypeDefinitionIndex = 68450;

	struct alignas(8) AMAHFAIGEIJ
	{
		::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x10
		::System::Single APAKCBFMCAB; // 0x20
		::System::Single MEFCFACAKLA; // 0x24
		::Il2CppArray<::UnityEngine::Quaternion>* JHPBIPDFMNO; // 0x28
		::RootMotion::IKJob::IKTransformRef ADDBPCIJKIC; // 0x30
		::Il2CppArray<::System::Object*>* ABBLFCBCGGL; // 0x40
		::UnityEngine::Vector3 PPBJGFLPBCF; // 0x48
		::System::Void CIJDJDICMMM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AMAHFAIGEIJ_CIJDJDICMMM_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDNPLMPOEOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMAHFAIGEIJ_HDNPLMPOEOA_OFFSET))(this, a1);
		}

		::System::Boolean MOFKDLANDGM(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMAHFAIGEIJ_MOFKDLANDGM_OFFSET))(this, a1, a2);
		}

	};
