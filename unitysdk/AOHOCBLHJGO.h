#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HIENEKAJNAK.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Collider; }

#define AOHOCBLHJGO_AHCDCBEIHDK_OFFSET UNITYSDK_OFFSET(0x17DE8B60)
#define AOHOCBLHJGO_CFIENACCNMI_OFFSET UNITYSDK_OFFSET(0x17DE82D0)
#define AOHOCBLHJGO_IKBJCGBNLHM_OFFSET UNITYSDK_OFFSET(0x17DE80B0)
#define AOHOCBLHJGO_LCNNNPGJBNH_OFFSET UNITYSDK_OFFSET(0x17DE7D40)

inline static constexpr unsigned int AOHOCBLHJGO_TypeDefinitionIndex = 79197;

class AOHOCBLHJGO : public ::System::Object
{
public:
	static ::System::ValueTuple_2<::System::Boolean, ::System::String*> LCNNNPGJBNH(::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::Func_1<::UnityEngine::Vector3>*& OHOGDOMNHNK, ::System::Single& MOCBLOAHMBC, ::System::Single& ADGLFPEPEIM)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::System::UInt32, ::Nap::NapECS::EcsWorld*, ::System::Func_1<::UnityEngine::Vector3>*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_LCNNNPGJBNH_OFFSET))(BKLGNCBNEGM, GEEHGDABNJF, OHOGDOMNHNK, MOCBLOAHMBC, ADGLFPEPEIM);
	}

	static ::System::Single IKBJCGBNLHM(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Single JFLDAALEMGB)
	{
		return ((::System::Single(*)(::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_IKBJCGBNLHM_OFFSET))(EHHHMFKHNAI, JFLDAALEMGB);
	}

	static ::PipelineCamera::FinalCameraData CFIENACCNMI(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF, ::UnityEngine::Vector3 HKOFHOFPKBM, ::UnityEngine::Vector3 KOLHDJKIBPI, ::System::Single OMHPABBIBOC, ::UnityEngine::Vector3 IFGMEKLICHN)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_CFIENACCNMI_OFFSET))(GPBKDGGEBCF, HKOFHOFPKBM, KOLHDJKIBPI, OMHPABBIBOC, IFGMEKLICHN);
	}

	static ::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>* AHCDCBEIHDK()
	{
		return ((::System::Func_2<::HIENEKAJNAK, ::PipelineCamera::FinalCameraData>*(*)())((::PBYTE)hIl2Cpp + AOHOCBLHJGO_AHCDCBEIHDK_OFFSET))();
	}
};
