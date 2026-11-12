#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDAJDLAHNC;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1747A7B0)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1747A830)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x1747AC70)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1747A7C0)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA__ASYNCLOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x1747AD50)

inline static constexpr unsigned int ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_TypeDefinitionIndex = 61999;

	class ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA : public ::System::Object
	{
	public:
		::UnityEngine::AI::NavMeshSurface* LIEBNDMOPHJ; // 0x10
		::UnityEngine::AI::NavMeshData* LPNENPCNIHK; // 0x18
		::RPG::Client::IAssetOperation* EGGKEMOBIFG; // 0x20
		::System::String* HJGPOFGOHHB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::UnityEngine::AI::NavMeshSurface* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AI::NavMeshSurface*, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* EGKNKHEANAN()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Boolean _AsyncLoad_b__2_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA__ASYNCLOAD_B__2_0_OFFSET))(this, a1);
		}

	};
