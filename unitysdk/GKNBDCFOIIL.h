#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKNBDCFOIIL_AINKCGIBIOI_OFFSET UNITYSDK_OFFSET(0x13DDE9A0)
#define GKNBDCFOIIL_HBPEMAIKEPF_OFFSET UNITYSDK_OFFSET(0x13DDEE10)
#define GKNBDCFOIIL_IHJCPDGMFON_OFFSET UNITYSDK_OFFSET(0x13DDEAC0)

inline static constexpr unsigned int GKNBDCFOIIL_TypeDefinitionIndex = 90607;

class GKNBDCFOIIL : public ::System::Object
{
public:
	static ::System::Boolean AINKCGIBIOI(::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB, ::UnityEngine::Vector3& OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GKNBDCFOIIL_AINKCGIBIOI_OFFSET))(DBMEFDJPDCB, OHOGDOMNHNK);
	}

	static ::System::Void IHJCPDGMFON(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* LJHOPIIGOHI, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* IGAAKDOIPNN, ::System::Boolean FPACJLIMHMA)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNBDCFOIIL_IHJCPDGMFON_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA, LJHOPIIGOHI, IGAAKDOIPNN, FPACJLIMHMA);
	}

	static ::System::Void HBPEMAIKEPF(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* LJHOPIIGOHI, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* IGAAKDOIPNN, ::System::Boolean FPACJLIMHMA)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKNBDCFOIIL_HBPEMAIKEPF_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA, LJHOPIIGOHI, IGAAKDOIPNN, FPACJLIMHMA);
	}
};
