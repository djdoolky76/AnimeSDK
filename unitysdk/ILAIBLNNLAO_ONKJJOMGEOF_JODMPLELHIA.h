#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDAJDLAHNC;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x16499030)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164990B0)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x164994F0)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16499040)
#define ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA__ASYNCLOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x164995D0)

inline static constexpr unsigned int ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA_TypeDefinitionIndex = 60622;

	class ILAIBLNNLAO_ONKJJOMGEOF_JODMPLELHIA : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* EGGKEMOBIFG; // 0x10
		::UnityEngine::AI::NavMeshData* LPNENPCNIHK; // 0x18
		::UnityEngine::AI::NavMeshSurface* LIEBNDMOPHJ; // 0x20
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
