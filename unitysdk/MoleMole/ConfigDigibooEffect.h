#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigDigibooEffect_EffectGroup; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDIGIBOOEFFECT_GETEFFECTGROUPBYDIGIBOOID_OFFSET UNITYSDK_OFFSET(0x190C2120)
#define MOLEMOLE_CONFIGDIGIBOOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C21D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooEffect_TypeDefinitionIndex = 81395;

	class ConfigDigibooEffect : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* EffectGroups; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigDigibooEffect_EffectGroup* GetEffectGroupByDigibooID(::System::Int32 digibooID)
		{
			return ((::MoleMole::ConfigDigibooEffect_EffectGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_GETEFFECTGROUPBYDIGIBOOID_OFFSET))(this, digibooID);
		}
	};
}
