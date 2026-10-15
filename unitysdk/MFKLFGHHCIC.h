#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define MFKLFGHHCIC_CDKBKBNJMEH_OFFSET UNITYSDK_OFFSET(0xB8FF640)
#define MFKLFGHHCIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF4A0)
#define MFKLFGHHCIC_FEPGPMECKIF_OFFSET UNITYSDK_OFFSET(0xB8FFA10)
#define MFKLFGHHCIC_IPGJMHHFNEA_OFFSET UNITYSDK_OFFSET(0xB8FF4C0)
#define MFKLFGHHCIC_NKAPPIPMIKK_OFFSET UNITYSDK_OFFSET(0xB8FFBE0)
#define MFKLFGHHCIC_OHMLABGPCOI_OFFSET UNITYSDK_OFFSET(0xB8FFAA0)

inline static constexpr unsigned int MFKLFGHHCIC_TypeDefinitionIndex = 68908;

	class MFKLFGHHCIC : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* MFAINMHAPEK; // 0x18
		::System::Single OHBAEMDKIJA; // 0x20
		::System::Single AMEBGAHDFNI; // 0x24
		::System::Single IPPKIDDEDBB; // 0x28
		::System::Single MMOFEIOKJEI; // 0x2C
		::System::Single OHMPPKAJIBM; // 0x30
		::System::Void _ctor(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CDKBKBNJMEH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_CDKBKBNJMEH_OFFSET))(this, a1);
		}

		::System::Int32 OHMLABGPCOI(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_OHMLABGPCOI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 NKAPPIPMIKK(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_NKAPPIPMIKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IPGJMHHFNEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_IPGJMHHFNEA_OFFSET))(this);
		}

		::System::Boolean FEPGPMECKIF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MFKLFGHHCIC_FEPGPMECKIF_OFFSET))(this, a1, a2);
		}

	};
