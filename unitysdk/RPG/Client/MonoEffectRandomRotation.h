#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTRANDOMROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0xD809080)
#define RPG_CLIENT_MONOEFFECTRANDOMROTATION_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD809030)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectRandomRotation_TypeDefinitionIndex = 68586;

	class MonoEffectRandomRotation
	{
	public:
		::UnityEngine::Vector3 DGLGPLADDFB; // 0x30
		::System::Single AEKHKANFHME; // 0x3C
		::System::Single NPIGHFDKKMJ; // 0x40
		::System::Single JPGDFIKLGAF; // 0x44
		::UnityEngine::Vector3 IBPFNGFKANO; // 0x48
		::UnityEngine::Vector3 EAINLHIKNMJ; // 0x54
		::UnityEngine::Vector3 KOKMDIMLIKI; // 0x60
		::System::Boolean use3AxisRotation; // 0x6C
		::System::Byte _padding0[0x3];
		::System::Single RotSpeedX; // 0x70
		::System::Single RotSpeedY; // 0x74
		::System::Single RotSpeedZ; // 0x78
		::System::Single RotSpeedMin; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTRANDOMROTATION_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTRANDOMROTATION_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
