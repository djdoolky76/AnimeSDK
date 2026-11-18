#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGBCLNKGJNP_AFKDBBJOLGO_OFFSET UNITYSDK_OFFSET(0x16D752C0)
#define AGBCLNKGJNP_BDBMGLLABGD_OFFSET UNITYSDK_OFFSET(0x16D74A10)
#define AGBCLNKGJNP_FCKFFFLMDNC_OFFSET UNITYSDK_OFFSET(0x16D73F60)
#define AGBCLNKGJNP_GFKDCPCLFCN_OFFSET UNITYSDK_OFFSET(0x16D742A0)
#define AGBCLNKGJNP_HKNLHAOCOOB_OFFSET UNITYSDK_OFFSET(0x16D74B60)
#define AGBCLNKGJNP_JHCGJFIJDOK_OFFSET UNITYSDK_OFFSET(0x16D742E0)
#define AGBCLNKGJNP_LNICCMFKDNH_OFFSET UNITYSDK_OFFSET(0x16D74120)
#define AGBCLNKGJNP_NNBAGFPIHGK_OFFSET UNITYSDK_OFFSET(0x16D75180)
#define AGBCLNKGJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D73F50)

inline static constexpr unsigned int AGBCLNKGJNP_TypeDefinitionIndex = 90775;

class AGBCLNKGJNP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBCLNKGJNP__CTOR_OFFSET))(this);
	}

	static ::System::Void FCKFFFLMDNC(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + AGBCLNKGJNP_FCKFFFLMDNC_OFFSET))(FNGBEJKAECI);
	}

	static ::UnityEngine::Vector3 LNICCMFKDNH()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + AGBCLNKGJNP_LNICCMFKDNH_OFFSET))();
	}

	static ::System::Void GFKDCPCLFCN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBCLNKGJNP_GFKDCPCLFCN_OFFSET))();
	}

	static ::System::Void JHCGJFIJDOK(::System::Boolean ABNJJHODFNN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AGBCLNKGJNP_JHCGJFIJDOK_OFFSET))(ABNJJHODFNN);
	}

	static ::System::Void BDBMGLLABGD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBCLNKGJNP_BDBMGLLABGD_OFFSET))();
	}

	static ::System::Void HKNLHAOCOOB(::System::Boolean ODNJEJMCAOO)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AGBCLNKGJNP_HKNLHAOCOOB_OFFSET))(ODNJEJMCAOO);
	}

	static ::System::Void NNBAGFPIHGK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBCLNKGJNP_NNBAGFPIHGK_OFFSET))();
	}

	static ::System::Void AFKDBBJOLGO(::System::Boolean FMDOHNJOOLG)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AGBCLNKGJNP_AFKDBBJOLGO_OFFSET))(FMDOHNJOOLG);
	}
};
