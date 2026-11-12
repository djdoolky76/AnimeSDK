#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGLKJLLMHBN.h"
#include "unitysdk/System/ValueTuple_3.h"
class GJABEBPIGDN;
class GJHNDAONNGP;
namespace RPG::AvatarSystem { class AvatarPath; }

#define EOLFEOCGDPK_CTOR_OFFSET UNITYSDK_OFFSET(0x164D6C80)
#define EOLFEOCGDPK_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x164D6D20)
#define EOLFEOCGDPK_DMIDAHCJIOA_OFFSET UNITYSDK_OFFSET(0x164D7820)
#define EOLFEOCGDPK_EKCKFBLHHIO_OFFSET UNITYSDK_OFFSET(0x164D7560)
#define EOLFEOCGDPK__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x164D6DB0)
#define EOLFEOCGDPK__REBUILD_OFFSET UNITYSDK_OFFSET(0x164D6F90)

inline static constexpr unsigned int EOLFEOCGDPK_TypeDefinitionIndex = 64153;

	class EOLFEOCGDPK : public ::GGLKJLLMHBN
	{
	public:
		::GJHNDAONNGP* EOEACGLNPMC; // 0x28
		::RPG::AvatarSystem::AvatarPath* KEHGPOKIJND; // 0x30
		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x38
		::System::Void _ctor(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + EOLFEOCGDPK_CTOR_OFFSET))(this, a1);
		}

		::System::Void DGBMKOOLGID(::GJHNDAONNGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJHNDAONNGP*))((::PBYTE)hIl2Cpp + EOLFEOCGDPK_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLFEOCGDPK__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLFEOCGDPK__REBUILD_OFFSET))(this);
		}

		::System::Void EKCKFBLHHIO(::GJABEBPIGDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + EOLFEOCGDPK_EKCKFBLHHIO_OFFSET))(this, a1);
		}

		::System::Void DMIDAHCJIOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOLFEOCGDPK_DMIDAHCJIOA_OFFSET))(this);
		}

	};
