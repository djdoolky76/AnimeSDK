#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENPCDINJDDM;
class LIAIOEBDNEE;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define AMMDPDIPOAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5662B0)
#define AMMDPDIPOAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5660B0)
#define AMMDPDIPOAP_KJNJBOBIJII_1_OFFSET UNITYSDK_OFFSET(0x1C5661C0)
#define AMMDPDIPOAP_KJNJBOBIJII_OFFSET UNITYSDK_OFFSET(0x1C5660F0)

inline static constexpr unsigned int AMMDPDIPOAP_TypeDefinitionIndex = 37199;

	class AMMDPDIPOAP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDPDIPOAP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMDPDIPOAP_DISPOSE_OFFSET))(this);
		}

		::ENPCDINJDDM* KJNJBOBIJII(::LIAIOEBDNEE* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
		{
			return ((::ENPCDINJDDM*(*)(::PVOID, ::LIAIOEBDNEE*, ::Entitas::IEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + AMMDPDIPOAP_KJNJBOBIJII_OFFSET))(this, a1, a2, a3, a4);
		}

		::ENPCDINJDDM* KJNJBOBIJII_1(::LIAIOEBDNEE* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5)
		{
			return ((::ENPCDINJDDM*(*)(::PVOID, ::LIAIOEBDNEE*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::AIConfig*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + AMMDPDIPOAP_KJNJBOBIJII_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
