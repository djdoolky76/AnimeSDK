#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MCBOBKNFEHG_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0x1EC358A0)
#define MCBOBKNFEHG_CFDBNDANDEN_OFFSET UNITYSDK_OFFSET(0x1EC357D0)
#define MCBOBKNFEHG_FICEJCCLPOF_OFFSET UNITYSDK_OFFSET(0x1EC36700)
#define MCBOBKNFEHG_HBGEMMADAGI_OFFSET UNITYSDK_OFFSET(0x1EC35470)
#define MCBOBKNFEHG_KOKAMOMPFBJ_OFFSET UNITYSDK_OFFSET(0x1EC35680)
#define MCBOBKNFEHG_MDEEKBMBOIH_OFFSET UNITYSDK_OFFSET(0x1EC369A0)
#define MCBOBKNFEHG_MIFJEKKLNHB_OFFSET UNITYSDK_OFFSET(0x1EC36570)
#define MCBOBKNFEHG_OGALGGPJOEF_OFFSET UNITYSDK_OFFSET(0x1EC35AC0)
#define MCBOBKNFEHG_OJJLNEIAOPN_OFFSET UNITYSDK_OFFSET(0x1EC367C0)
#define MCBOBKNFEHG_PBINJCDGKMK_OFFSET UNITYSDK_OFFSET(0x1EC36350)

inline static constexpr unsigned int MCBOBKNFEHG_TypeDefinitionIndex = 35189;

	class MCBOBKNFEHG : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 HBGEMMADAGI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_HBGEMMADAGI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 KOKAMOMPFBJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_KOKAMOMPFBJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 CFDBNDANDEN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_CFDBNDANDEN_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 BMOMBCHEEEI(::System::Single a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_BMOMBCHEEEI_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 PBINJCDGKMK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_PBINJCDGKMK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 MIFJEKKLNHB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_MIFJEKKLNHB_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 FICEJCCLPOF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_FICEJCCLPOF_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 OJJLNEIAOPN(::System::Single a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_OJJLNEIAOPN_OFFSET))(a1, a2);
		}

		static ::System::Int32 OGALGGPJOEF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_OGALGGPJOEF_OFFSET))(a1, a2);
		}

		static ::System::Int32 MDEEKBMBOIH(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MCBOBKNFEHG_MDEEKBMBOIH_OFFSET))(a1);
		}

	};
