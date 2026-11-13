#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGrowUpEffect.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D668420)
#define RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D6680B0)
#define RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1D6682B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFeixiaoGrowUpEffect_TypeDefinitionIndex = 66011;

	class GridFightFeixiaoGrowUpEffect : public ::RPG::Client::GridFightGrowUpEffect
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* DEIOCGJONLH; // 0x48
		// static const ::System::String* MPBJDKFPBHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFEIXIAOGROWUPEFFECT_SETLEVEL_OFFSET))(this, a1);
		}

	};
}
