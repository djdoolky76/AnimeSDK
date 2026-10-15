#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define NCMHCCGKLAH_BAIGHNOEKCB_1_OFFSET UNITYSDK_OFFSET(0xBB165A0)
#define NCMHCCGKLAH_BAIGHNOEKCB_OFFSET UNITYSDK_OFFSET(0xBB163F0)
#define NCMHCCGKLAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB168E0)
#define NCMHCCGKLAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB16880)
#define NCMHCCGKLAH_EMNMHFKICDA_OFFSET UNITYSDK_OFFSET(0xBB168D0)
#define NCMHCCGKLAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB16790)

	class NCMHCCGKLAH : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x10
		::System::Single HBDJCFFDGDD; // 0x18
		::System::Single MDBDBFKFJEG; // 0x1C
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x20
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
