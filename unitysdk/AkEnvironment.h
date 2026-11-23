#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkEnvironment_EDCA89EE35B5B14F;
class AkEnvironment_F65A513C42DFBE61;
namespace AK::Wwise { class AuxBus; }
namespace UnityEngine { class Collider; }

#define AKENVIRONMENT_A0145CC954DF809A_OFFSET UNITYSDK_OFFSET(0x2916E80)
#define AKENVIRONMENT_B1E8D652064B9929_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKENVIRONMENT_B9F1DBD491296B16_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKENVIRONMENT_F09DF9A4F20D27E4_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define AKENVIRONMENT_FA947504ABEBFB84_OFFSET UNITYSDK_OFFSET(0x2916D30)
#define AKENVIRONMENT_FBB7DD023CC868DE_OFFSET UNITYSDK_OFFSET(0x2916EA0)
#define AKENVIRONMENT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2916B50)
#define AKENVIRONMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x2916D50)
#define AKENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2916E10)

inline static constexpr unsigned int AkEnvironment_TypeDefinitionIndex = 20488;

class AkEnvironment : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkEnvironment_EDCA89EE35B5B14F** StaticGet_E6965CAC2EC64379()
	{
		return (::AkEnvironment_EDCA89EE35B5B14F**)Il2CppClass::FromTypeDefinitionIndex(AkEnvironment_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::AkEnvironment_F65A513C42DFBE61** StaticGet_AFCD0A4BD6BB084B()
	{
		return (::AkEnvironment_F65A513C42DFBE61**)Il2CppClass::FromTypeDefinitionIndex(AkEnvironment_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Boolean excludeOthers; // 0x20
	::System::Boolean isDefault; // 0x21
	::System::Byte _padding0[0x6];
	::AK::Wwise::AuxBus* data; // 0x28
	::UnityEngine::Collider* BF132FC6C061FB75; // 0x30
	::System::Int32 priority; // 0x38
	::System::Int32 auxBusIdInternal; // 0x3C
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKENVIRONMENT__CCTOR_OFFSET))();
	}

	::System::Void F09DF9A4F20D27E4(::UnityEngine::Collider* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_F09DF9A4F20D27E4_OFFSET))(this, E937D4885DAA1AE8);
	}

	::UnityEngine::Collider* B9F1DBD491296B16()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_B9F1DBD491296B16_OFFSET))(this);
	}

	::System::UInt32 FA947504ABEBFB84()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_FA947504ABEBFB84_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* FBB7DD023CC868DE()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_FBB7DD023CC868DE_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT__CTOR_OFFSET))(this);
	}

	::System::Int32 A0145CC954DF809A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_A0145CC954DF809A_OFFSET))(this);
	}

	::UnityEngine::Collider* B1E8D652064B9929()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_B1E8D652064B9929_OFFSET))(this);
	}
};
