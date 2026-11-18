#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Terrain; }

#define JENODIECILB_AOJGPGPJNAD_OFFSET UNITYSDK_OFFSET(0x1383B8F0)
#define JENODIECILB_BFFPDIPHFMF_OFFSET UNITYSDK_OFFSET(0x1383B040)
#define JENODIECILB_BHMDMEEMMAN_OFFSET UNITYSDK_OFFSET(0x1383C610)
#define JENODIECILB_CFIMFIAHFBH_1_OFFSET UNITYSDK_OFFSET(0x1383BC50)
#define JENODIECILB_CFIMFIAHFBH_OFFSET UNITYSDK_OFFSET(0x1383B5B0)
#define JENODIECILB_EGLNLFDKDOL_OFFSET UNITYSDK_OFFSET(0x1383BA80)
#define JENODIECILB_GPKDLODMDEP_OFFSET UNITYSDK_OFFSET(0x1383B4E0)
#define JENODIECILB_JAJHBCOCIBC_OFFSET UNITYSDK_OFFSET(0x1383B190)
#define JENODIECILB_MMBKCBLCCDI_OFFSET UNITYSDK_OFFSET(0x1383B3E0)
#define JENODIECILB_PDLKFEDONIN_OFFSET UNITYSDK_OFFSET(0x1383AEA0)

inline static constexpr unsigned int JENODIECILB_TypeDefinitionIndex = 39897;

class JENODIECILB : public ::System::Object
{
public:
	// static const ::System::Single LHLFJFCEIKH; // 0x0
	// static const ::System::Single LAAGBMGJEMN; // 0x0

	static ::System::Boolean PDLKFEDONIN(::UnityEngine::Bounds GOFCNJELMHH, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* OKHMIANAKPA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + JENODIECILB_PDLKFEDONIN_OFFSET))(GOFCNJELMHH, OKHMIANAKPA);
	}

	static ::UnityEngine::Bounds BFFPDIPHFMF(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Vector3 KDJPHMALEPH)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JENODIECILB_BFFPDIPHFMF_OFFSET))(GOFCNJELMHH, KDJPHMALEPH);
	}

	static ::System::Boolean JAJHBCOCIBC(::Il2CppArray<::UnityEngine::Vector3>* DPDEMIOMCLB)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + JENODIECILB_JAJHBCOCIBC_OFFSET))(DPDEMIOMCLB);
	}

	static ::System::Boolean MMBKCBLCCDI(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Vector3 ENPJGJBBIPH, ::System::Single FGCHIHJKGLG)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JENODIECILB_MMBKCBLCCDI_OFFSET))(GOFCNJELMHH, ENPJGJBBIPH, FGCHIHJKGLG);
	}

	static ::System::Boolean GPKDLODMDEP(::UnityEngine::Bounds JFPDJGAMELP, ::UnityEngine::Bounds OFKBJLIICHG)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JENODIECILB_GPKDLODMDEP_OFFSET))(JFPDJGAMELP, OFKBJLIICHG);
	}

	static ::UnityEngine::Bounds CFIMFIAHFBH(::UnityEngine::Terrain* CIJCDOHAAPI)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + JENODIECILB_CFIMFIAHFBH_OFFSET))(CIJCDOHAAPI);
	}

	static ::System::Int32 AOJGPGPJNAD(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::UnityEngine::Vector3 PABEPBEJHBJ, ::UnityEngine::Vector3 AGHNEGFHKMC)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JENODIECILB_AOJGPGPJNAD_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, PABEPBEJHBJ, AGHNEGFHKMC);
	}

	static ::System::Boolean EGLNLFDKDOL(::UnityEngine::Bounds GOFCNJELMHH, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* OKHMIANAKPA, ::System::Int32 LAHMJHFGJCP, ::System::Int32& GEJMBHJFEMA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JENODIECILB_EGLNLFDKDOL_OFFSET))(GOFCNJELMHH, OKHMIANAKPA, LAHMJHFGJCP, GEJMBHJFEMA);
	}

	static ::UnityEngine::Bounds CFIMFIAHFBH_1(::UnityEngine::Light* NLFGBFCCCLJ)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + JENODIECILB_CFIMFIAHFBH_1_OFFSET))(NLFGBFCCCLJ);
	}

	static ::System::Boolean BHMDMEEMMAN(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 AGHNEGFHKMC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JENODIECILB_BHMDMEEMMAN_OFFSET))(OHOGDOMNHNK, MPLDDNMCECG, AGHNEGFHKMC);
	}
};
