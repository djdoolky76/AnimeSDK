#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C_MKAAMIDJKDL_OFFSET UNITYSDK_OFFSET(0x1193AF60)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1193AF10)
#define MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1193AF50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadScrollView___c_TypeDefinitionIndex = 51871;

	class MonoGamepadScrollView___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadScrollView___c_TypeDefinitionIndex)->GetStaticField(0x51780);
		}
		static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__23_2()
		{
			return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadScrollView___c_TypeDefinitionIndex)->GetStaticField(0x51788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 MKAAMIDJKDL(::UnityEngine::RectTransform* FFKBEGIHIGG, ::UnityEngine::RectTransform* CKADGLGJJAB)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSCROLLVIEW___C_MKAAMIDJKDL_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
		}
	};
}
