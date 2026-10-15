#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define LMGAOOEJHIJ_NABCFOILKJN_AKGEFMLNFIC_OFFSET UNITYSDK_OFFSET(0xB77F860)
#define LMGAOOEJHIJ_NABCFOILKJN_CLOJHADCIIK_OFFSET UNITYSDK_OFFSET(0xB780150)
#define LMGAOOEJHIJ_NABCFOILKJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB77F590)
#define LMGAOOEJHIJ_NABCFOILKJN_ILCJKPFHDCP_OFFSET UNITYSDK_OFFSET(0xB77FA60)
#define LMGAOOEJHIJ_NABCFOILKJN_KMAAFBPPINO_OFFSET UNITYSDK_OFFSET(0xB77F660)
#define LMGAOOEJHIJ_NABCFOILKJN_MJEBNLCHNEB_OFFSET UNITYSDK_OFFSET(0xB77F5A0)

inline static constexpr unsigned int LMGAOOEJHIJ_NABCFOILKJN_TypeDefinitionIndex = 70363;

	class LMGAOOEJHIJ_NABCFOILKJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GICNGBKIMMF; // 0x10
		::UnityEngine::MaterialPropertyBlock* COHNLCNKKND; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* JGHCMAFNNHO; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* CADKJJELDNH; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>* OJFPHAODBJK; // 0x30
		::System::Int32 CNMCPNKMNLK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_CTOR_OFFSET))(this);
		}

		::System::Void MJEBNLCHNEB(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_MJEBNLCHNEB_OFFSET))(this, a1);
		}

		::System::Void CLOJHADCIIK(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_CLOJHADCIIK_OFFSET))(this, a1, a2);
		}

		::System::Void KMAAFBPPINO(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_KMAAFBPPINO_OFFSET))(this, a1, a2);
		}

		::System::Void AKGEFMLNFIC(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_AKGEFMLNFIC_OFFSET))(this, a1, a2);
		}

		::System::Void ILCJKPFHDCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_NABCFOILKJN_ILCJKPFHDCP_OFFSET))(this);
		}

	};
