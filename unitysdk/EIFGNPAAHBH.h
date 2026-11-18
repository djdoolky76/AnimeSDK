#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EDPGEFBNECD.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/KLPLBODKAHP.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class IJFNNPOAFNP_2;

#define EIFGNPAAHBH_BPLBFPDGNJJ_OFFSET UNITYSDK_OFFSET(0x17111930)
#define EIFGNPAAHBH_CELNDFHFOLJ_OFFSET UNITYSDK_OFFSET(0x17111DD0)
#define EIFGNPAAHBH_EAHNKMGKPNL_OFFSET UNITYSDK_OFFSET(0x17111A30)
#define EIFGNPAAHBH_MIJGKFJAJGC_OFFSET UNITYSDK_OFFSET(0x17111D10)
#define EIFGNPAAHBH_MOKCHPNPBPH_OFFSET UNITYSDK_OFFSET(0x17111670)

inline static constexpr unsigned int EIFGNPAAHBH_TypeDefinitionIndex = 69064;

class EIFGNPAAHBH : public ::System::Object
{
public:
	static ::Foundation::Unreal::FTransform3D MOKCHPNPBPH(::UnityEngine::Transform* IMLLDOHDCNC, ::System::Boolean HMOMFLELOEC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_MOKCHPNPBPH_OFFSET))(IMLLDOHDCNC, HMOMFLELOEC);
	}

	static ::IJFNNPOAFNP_2<::KLPLBODKAHP, ::EDPGEFBNECD>* BPLBFPDGNJJ()
	{
		return ((::IJFNNPOAFNP_2<::KLPLBODKAHP, ::EDPGEFBNECD>*(*)())((::PBYTE)hIl2Cpp + EIFGNPAAHBH_BPLBFPDGNJJ_OFFSET))();
	}

	static ::Foundation::Unreal::FTransform3D EAHNKMGKPNL(::UnityEngine::Camera* KONLMDBCDCK, ::System::Boolean HMOMFLELOEC)
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_EAHNKMGKPNL_OFFSET))(KONLMDBCDCK, HMOMFLELOEC);
	}

	static ::System::Single MIJGKFJAJGC(::System::Single GALBDCDBCOP)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_MIJGKFJAJGC_OFFSET))(GALBDCDBCOP);
	}

	static ::System::Single CELNDFHFOLJ(::System::Single GALBDCDBCOP)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_CELNDFHFOLJ_OFFSET))(GALBDCDBCOP);
	}
};
