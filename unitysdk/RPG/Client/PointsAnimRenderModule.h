#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectPointsAnimModule.h"
class CEFCMPKCMAF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_POINTSANIMRENDERMODULE_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xDBF7450)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDBF7890)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_KACPLIOANNI_OFFSET UNITYSDK_OFFSET(0xDBF74D0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_KEDAJPMCGOE_OFFSET UNITYSDK_OFFSET(0xDBF77D0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xDBF7400)

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimRenderModule_TypeDefinitionIndex = 70628;

	class PointsAnimRenderModule : public ::RPG::Client::EffectPointsAnimModule
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererPackages; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_CTOR_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_MEJPCPBPMNM_OFFSET))(this, a1);
		}

		::System::Void AGHABIKPPNO(::CEFCMPKCMAF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_AGHABIKPPNO_OFFSET))(this, a1, a2);
		}

		::System::Void KEDAJPMCGOE(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_KEDAJPMCGOE_OFFSET))(this, a1);
		}

		::System::Void KACPLIOANNI(::CEFCMPKCMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEFCMPKCMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_KACPLIOANNI_OFFSET))(this, a1);
		}

	};
}
