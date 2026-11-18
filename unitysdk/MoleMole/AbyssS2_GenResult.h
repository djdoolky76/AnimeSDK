#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class LHLCLMGCLEE;
class MFHGKCPFCNC;
class PKDEEDPGBOD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_GENRESULT_CHECKHASSAMEROUTE_OFFSET UNITYSDK_OFFSET(0x11E4DB90)
#define MOLEMOLE_ABYSSS2_GENRESULT_GET_GENMETA_OFFSET UNITYSDK_OFFSET(0x11E4DB50)
#define MOLEMOLE_ABYSSS2_GENRESULT_SET_GENMETA_OFFSET UNITYSDK_OFFSET(0x11E4DB70)
#define MOLEMOLE_ABYSSS2_GENRESULT_TESTRESULT_OFFSET UNITYSDK_OFFSET(0x11E4F1D0)
#define MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATAV2_OFFSET UNITYSDK_OFFSET(0x11E4DEF0)
#define MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATA_OFFSET UNITYSDK_OFFSET(0x11E4DE80)
#define MOLEMOLE_ABYSSS2_GENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4D9B0)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____CONNECTNEXT_22_1_OFFSET UNITYSDK_OFFSET(0x11E4EE60)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____GETORADDMAPROUTEAREA_22_0_OFFSET UNITYSDK_OFFSET(0x11E4ED30)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOMERGEROUTE_OFFSET UNITYSDK_OFFSET(0x11E4EFB0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenResult_TypeDefinitionIndex = 93055;

	class AbyssS2_GenResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* guaranteeRoutePointAreaConfigs; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* GenRoutePointAreaConfigs; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* preMergeList; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* mergeList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* singlePathRoutePoints; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Color>* routeColors; // 0x38
		::PKDEEDPGBOD* protoLayerMap; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _normalStartPointID; // 0x48
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* rawRoutes; // 0x50
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* ruleRoutes; // 0x58
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* fullRoutes; // 0x60
		::System::Int32 usingRouteMapLayer; // 0x68
		::System::Int32 usingRouteMapID; // 0x6C
		::MoleMole::AbyssS2_GenConfigMeta _genMeta_k__BackingField; // 0x70
		::System::Boolean isRouteMapLastLayer; // 0x84
		::System::Byte _padding0[0x3];
		::System::UInt64 usingSeed; // 0x88

		::System::Void _ctor(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__CTOR_OFFSET))(this, meta);
		}

		::MoleMole::AbyssS2_GenConfigMeta get_genMeta()
		{
			return ((::MoleMole::AbyssS2_GenConfigMeta(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_GET_GENMETA_OFFSET))(this);
		}

		::System::Void set_genMeta(::MoleMole::AbyssS2_GenConfigMeta value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_SET_GENMETA_OFFSET))(this, value);
		}

		::System::Boolean CheckHasSameRoute(::Il2CppArray<::System::Int32>* check)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_CHECKHASSAMEROUTE_OFFSET))(this, check);
		}

		::PKDEEDPGBOD* ToCsData(::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer)
		{
			return ((::PKDEEDPGBOD*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATA_OFFSET))(this, routeMapID, layerIndex, isLastLayer);
		}

		::PKDEEDPGBOD* ToCsDataV2(::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer)
		{
			return ((::PKDEEDPGBOD*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATAV2_OFFSET))(this, routeMapID, layerIndex, isLastLayer);
		}

		::LHLCLMGCLEE* _ToMergeRoute(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::LHLCLMGCLEE*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOMERGEROUTE_OFFSET))(this, indexList);
		}

		::System::Void TestResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TESTRESULT_OFFSET))(this);
		}

		static ::MFHGKCPFCNC* _ToCsDataV2_g____GetOrAddMapRouteArea_22_0(::System::Int32 routePointID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MFHGKCPFCNC*>* qryMap)
		{
			return ((::MFHGKCPFCNC*(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MFHGKCPFCNC*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____GETORADDMAPROUTEAREA_22_0_OFFSET))(routePointID, qryMap);
		}

		static ::System::Void _ToCsDataV2_g____ConnectNext_22_1(::MFHGKCPFCNC* l, ::MFHGKCPFCNC* r)
		{
			return ((::System::Void(*)(::MFHGKCPFCNC*, ::MFHGKCPFCNC*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____CONNECTNEXT_22_1_OFFSET))(l, r);
		}
	};
}
