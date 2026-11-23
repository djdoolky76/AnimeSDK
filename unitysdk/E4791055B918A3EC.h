#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/F2732A8E40526A2F.h"
#include "unitysdk/System/Object.h"

namespace ABC::Entity { class MonoEntityView; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define E4791055B918A3EC_A1E97155B145443C_1_OFFSET UNITYSDK_OFFSET(0x1659470)
#define E4791055B918A3EC_A1E97155B145443C_2_OFFSET UNITYSDK_OFFSET(0x1659360)
#define E4791055B918A3EC_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1659510)
#define E4791055B918A3EC_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x1659290)
#define E4791055B918A3EC_AAA6F53A17D7AAD6_OFFSET UNITYSDK_OFFSET(0x1659800)
#define E4791055B918A3EC_ACAED58E43ABD664_OFFSET UNITYSDK_OFFSET(0x16596C0)
#define E4791055B918A3EC_B0F7C210FF4FB063_OFFSET UNITYSDK_OFFSET(0x1659AA0)
#define E4791055B918A3EC_BFE8E011F4625E0A_OFFSET UNITYSDK_OFFSET(0x165A270)
#define E4791055B918A3EC_E7C726C730D391B3_OFFSET UNITYSDK_OFFSET(0x1659D80)
#define E4791055B918A3EC_ED00F481E97F5C04_OFFSET UNITYSDK_OFFSET(0x1659750)
#define E4791055B918A3EC_F2FF0B0B5BBC0D0D_OFFSET UNITYSDK_OFFSET(0x1659EE0)
#define E4791055B918A3EC_F42BA19DD8E95191_OFFSET UNITYSDK_OFFSET(0x1659670)
#define E4791055B918A3EC_FA5EF8E4262431D0_OFFSET UNITYSDK_OFFSET(0x1659C10)
#define E4791055B918A3EC_FB486A434CD55001_OFFSET UNITYSDK_OFFSET(0x1659920)
#define E4791055B918A3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x165A380)

inline static constexpr unsigned int E4791055B918A3EC_TypeDefinitionIndex = 6;

class E4791055B918A3EC : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_A2AEF4BE1A93044A()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(E4791055B918A3EC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::Mesh* AD1294643CB44AB4; // 0x10
	::ABC::Entity::MonoEntityView* AA9710B425EC347B; // 0x18
	::UnityEngine::Mesh* F3E226E0ED8B265F; // 0x20
	::UnityEngine::SkinnedMeshRenderer* FF77F0E70FE9AD6C; // 0x28
	::UnityEngine::MeshRenderer* FEEBCF5917FEC358; // 0x30
	::UnityEngine::MeshFilter* AE99CAAA9CC15E0F; // 0x38
	::UnityEngine::ParticleSystemRenderer* AE32342F3C485497; // 0x40
	::E68AA4EB51923C98::F2732A8E40526A2F BF3DFFF9761CB081; // 0x48

	::System::Void ED00F481E97F5C04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_ED00F481E97F5C04_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::ParticleSystemRenderer* E7A817CCB63CA4F5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + E4791055B918A3EC_A1E97155B145443C_OFFSET))(this, E7A817CCB63CA4F5);
	}

	::System::Boolean ACAED58E43ABD664()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_ACAED58E43ABD664_OFFSET))(this);
	}

	::System::Void AAA6F53A17D7AAD6(::UnityEngine::Mesh* FF762A0FE86505A5, ::System::Boolean ED663A2DE16B068C)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + E4791055B918A3EC_AAA6F53A17D7AAD6_OFFSET))(this, FF762A0FE86505A5, ED663A2DE16B068C);
	}

	::System::Void B0F7C210FF4FB063(::System::Int32 BA2E99D73CC8AA9A, ::System::Boolean ED663A2DE16B068C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + E4791055B918A3EC_B0F7C210FF4FB063_OFFSET))(this, BA2E99D73CC8AA9A, ED663A2DE16B068C);
	}

	::System::Void F2FF0B0B5BBC0D0D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_F2FF0B0B5BBC0D0D_OFFSET))(this);
	}

	::System::Boolean F42BA19DD8E95191()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_F42BA19DD8E95191_OFFSET))(this);
	}

	::System::Void FA5EF8E4262431D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_FA5EF8E4262431D0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC__CTOR_OFFSET))(this);
	}

	::System::Void E7C726C730D391B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_E7C726C730D391B3_OFFSET))(this);
	}

	::System::Void FB486A434CD55001(::ABC::Entity::MonoEntityView* BB45BACEA7609709)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Entity::MonoEntityView*))((::PBYTE)hIl2Cpp + E4791055B918A3EC_FB486A434CD55001_OFFSET))(this, BB45BACEA7609709);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void A1E97155B145443C_1(::UnityEngine::SkinnedMeshRenderer* E7A817CCB63CA4F5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + E4791055B918A3EC_A1E97155B145443C_1_OFFSET))(this, E7A817CCB63CA4F5);
	}

	::System::Void A1E97155B145443C_2(::UnityEngine::MeshRenderer* F61F2167BF0BD35D)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + E4791055B918A3EC_A1E97155B145443C_2_OFFSET))(this, F61F2167BF0BD35D);
	}

	::System::Void BFE8E011F4625E0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4791055B918A3EC_BFE8E011F4625E0A_OFFSET))(this);
	}
};
