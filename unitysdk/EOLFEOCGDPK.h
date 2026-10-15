#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGLKJLLMHBN.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/ValueTuple_3.h"
class GJABEBPIGDN;
class GJHNDAONNGP;

#define EOLFEOCGDPK_CTOR_OFFSET UNITYSDK_OFFSET(0x155B90E0)
#define EOLFEOCGDPK_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x155B9170)
#define EOLFEOCGDPK_DMIDAHCJIOA_OFFSET UNITYSDK_OFFSET(0x155B9C10)
#define EOLFEOCGDPK_EKCKFBLHHIO_OFFSET UNITYSDK_OFFSET(0x155B9950)
#define EOLFEOCGDPK__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x155B9200)
#define EOLFEOCGDPK__REBUILD_OFFSET UNITYSDK_OFFSET(0x155B93E0)

inline static constexpr unsigned int EOLFEOCGDPK_TypeDefinitionIndex = 62719;

	class EOLFEOCGDPK : public ::GGLKJLLMHBN
	{
	public:
		::GJHNDAONNGP* EOEACGLNPMC; // 0x28
		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AvatarBaseType GIEAOGNLGFP; // 0x3C
		::System::Void _ctor(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + EOLFEOCGDPK_CTOR_OFFSET))(this, a1);
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
