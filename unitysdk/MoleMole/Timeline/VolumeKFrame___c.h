#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class PropertyCurve; }

#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C_JJJKEKHDBBK_OFFSET UNITYSDK_OFFSET(0x1A0B9170)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0B9120)
#define MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B9160)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VolumeKFrame___c_TypeDefinitionIndex = 59760;

	class VolumeKFrame___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::PropertyCurve*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::PropertyCurve*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeKFrame___c_TypeDefinitionIndex)->GetStaticField(0x4C240);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VolumeKFrame___c_TypeDefinitionIndex)->GetStaticField(0x4C248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C__CTOR_OFFSET))(this);
		}

		::System::String* JJJKEKHDBBK(::UnityEngine::Timeline::PropertyCurve* FEKJMJOPFJC)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Timeline::PropertyCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VOLUMEKFRAME___C_JJJKEKHDBBK_OFFSET))(this, FEKJMJOPFJC);
		}
	};
}
