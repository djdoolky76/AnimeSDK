#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define NCMHCCGKLAH_BAIGHNOEKCB_1_OFFSET UNITYSDK_OFFSET(0x15103E70)
#define NCMHCCGKLAH_BAIGHNOEKCB_OFFSET UNITYSDK_OFFSET(0x15103CC0)
#define NCMHCCGKLAH_CTOR_OFFSET UNITYSDK_OFFSET(0x151041B0)
#define NCMHCCGKLAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15104150)
#define NCMHCCGKLAH_EMNMHFKICDA_OFFSET UNITYSDK_OFFSET(0x151041A0)
#define NCMHCCGKLAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15104060)

inline static constexpr unsigned int NCMHCCGKLAH_TypeDefinitionIndex = 58127;

	class NCMHCCGKLAH : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x10
		::System::Single MDBDBFKFJEG; // 0x18
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x1C
		::System::Single HBDJCFFDGDD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_CTOR_OFFSET))(this);
		}

		::System::Void BAIGHNOEKCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_BAIGHNOEKCB_OFFSET))(this);
		}

		::System::Void BAIGHNOEKCB_1(::System::Single a1, ::System::Single a2, ::System::String* a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_BAIGHNOEKCB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 JLANKNHFKCN(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_DISPOSE_OFFSET))(this);
		}

		::System::Single EMNMHFKICDA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMHCCGKLAH_EMNMHFKICDA_OFFSET))(this);
		}

	};
