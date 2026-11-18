#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECMPKBFLJGI.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_FNKHJLMDHEJ_OFFSET UNITYSDK_OFFSET(0x162E8140)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_HCOBGBGKGNG_OFFSET UNITYSDK_OFFSET(0x162E81C0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x162E78E0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x162E7FC0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_LJBEMBMIGHK_OFFSET UNITYSDK_OFFSET(0x162E8040)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162E7CF0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_RESETBLOCK_OFFSET UNITYSDK_OFFSET(0x162E7BD0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x162E7F80)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x162E7F30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStreamingGameMarcelBlock_TypeDefinitionIndex = 92179;

	class MonoStreamingGameMarcelBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_EEKKGHKHMCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoStreamingGameMarcelBlock_TypeDefinitionIndex)->GetStaticField(0x105D0);
		}
		::ECMPKBFLJGI NABAJJPDLOI; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::MaterialPropertyBlock* HAPGEOJCANF; // 0x20
		::UnityEngine::Vector3 CCLPGNKHGEC; // 0x28
		::Foundation::Coroutine::CoroutineHandle DNPHAKBCLOC; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_INITIALIZE_OFFSET))(this);
		}

		::System::Void ResetBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_RESETBLOCK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void LDEFOFFAKHB(::ECMPKBFLJGI EKOHIAJDIEC)
		{
			return ((::System::Void(*)(::PVOID, ::ECMPKBFLJGI))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_LDEFOFFAKHB_OFFSET))(this, EKOHIAJDIEC);
		}

		::System::Void LJBEMBMIGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_LJBEMBMIGHK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FNKHJLMDHEJ()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_FNKHJLMDHEJ_OFFSET))(this);
		}

		::System::Void HCOBGBGKGNG(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELBLOCK_HCOBGBGKGNG_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
