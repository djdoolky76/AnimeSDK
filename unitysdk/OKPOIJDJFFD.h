#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OKPOIJDJFFD_FPAPFLOKEDG_OFFSET UNITYSDK_OFFSET(0x1C54CAA0)
#define OKPOIJDJFFD_GBKENJOKAPP_OFFSET UNITYSDK_OFFSET(0x1C54CA40)
#define OKPOIJDJFFD_JMDPFPLKMOD_OFFSET UNITYSDK_OFFSET(0x1C54CB00)
#define OKPOIJDJFFD_KIGFMMEICPB_OFFSET UNITYSDK_OFFSET(0x1C54CB40)
#define OKPOIJDJFFD_MNAHPGHBGBI_OFFSET UNITYSDK_OFFSET(0x1C547F40)
#define OKPOIJDJFFD_PKADDEPKJFN_1_OFFSET UNITYSDK_OFFSET(0x1C54C8F0)
#define OKPOIJDJFFD_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1C54C7F0)

inline static constexpr unsigned int OKPOIJDJFFD_TypeDefinitionIndex = 41661;

	class OKPOIJDJFFD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* PKADDEPKJFN(::RPG::Client::MechCraft::MechCraftRotationType a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2Int, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_PKADDEPKJFN_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2Int PKADDEPKJFN_1(::RPG::Client::MechCraft::MechCraftRotationType a1, ::UnityEngine::Vector2Int a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::UnityEngine::Vector2Int(*)(::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_PKADDEPKJFN_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MechCraft::MechCraftRotationType GBKENJOKAPP(::System::Int32 a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::System::Int32))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_GBKENJOKAPP_OFFSET))(a1);
		}

		static ::RPG::Client::MechCraft::MechCraftRotationType MNAHPGHBGBI(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_MNAHPGHBGBI_OFFSET))(a1);
		}

		static ::System::Int32 FPAPFLOKEDG(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_FPAPFLOKEDG_OFFSET))(a1);
		}

		static ::System::Int32 JMDPFPLKMOD(::RPG::Client::MechCraft::MechCraftRotationType a1)
		{
			return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_JMDPFPLKMOD_OFFSET))(a1);
		}

		static ::RPG::Client::MechCraft::MechCraftRotationType KIGFMMEICPB(::RPG::Client::MechCraft::MechCraftRotationType a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::RPG::Client::MechCraft::MechCraftRotationType, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + OKPOIJDJFFD_KIGFMMEICPB_OFFSET))(a1, a2);
		}

	};
