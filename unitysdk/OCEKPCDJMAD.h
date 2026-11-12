#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCEKPCDJMAD;
namespace RPG::Client { class UIPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OCEKPCDJMAD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC6628C0)
#define OCEKPCDJMAD_CONECKKGNJM_OFFSET UNITYSDK_OFFSET(0xC662D80)
#define OCEKPCDJMAD_CTOR_OFFSET UNITYSDK_OFFSET(0xC662A00)
#define OCEKPCDJMAD_FMPLJNILOPP_OFFSET UNITYSDK_OFFSET(0xC662F50)
#define OCEKPCDJMAD_GET_OFFSET UNITYSDK_OFFSET(0xC662C30)
#define OCEKPCDJMAD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC662BF0)
#define OCEKPCDJMAD_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xC662AB0)
#define OCEKPCDJMAD_PRELOAD_OFFSET UNITYSDK_OFFSET(0xC662B10)
#define OCEKPCDJMAD_RETURN_OFFSET UNITYSDK_OFFSET(0xC662E00)

inline static constexpr unsigned int OCEKPCDJMAD_TypeDefinitionIndex = 76233;

	class OCEKPCDJMAD : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x10
		::UnityEngine::Transform* ADPIPGEDKOH; // 0x18
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* GCIKKMGIPIO; // 0x20
		// static const ::System::String* NNIOCPHFNNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_CTOR_OFFSET))(this);
		}

		static ::OCEKPCDJMAD* BPLPBPMEODA()
		{
			return ((::OCEKPCDJMAD*(*)())((::PBYTE)hIl2Cpp + OCEKPCDJMAD_BPLPBPMEODA_OFFSET))();
		}

		::System::Void OINBDMGFFJL(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void PreLoad(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_PRELOAD_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::GameObject* Get()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_GET_OFFSET))(this);
		}

		::System::Void Return(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_RETURN_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CONECKKGNJM()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_CONECKKGNJM_OFFSET))(this);
		}

		::System::Void FMPLJNILOPP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OCEKPCDJMAD_FMPLJNILOPP_OFFSET))(this, a1);
		}

	};
