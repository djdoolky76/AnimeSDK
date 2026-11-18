#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLEKMHHGMEM.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_BIMJJEMAKLD_OFFSET UNITYSDK_OFFSET(0x135B16B0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IPFHLMPAPLB_OFFSET UNITYSDK_OFFSET(0x135B07B0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_LHFAMBGHPAI_OFFSET UNITYSDK_OFFSET(0x135B22F0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_NKLNCMGDCJO_OFFSET UNITYSDK_OFFSET(0x135B1630)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OAHLNNFEJPA_OFFSET UNITYSDK_OFFSET(0x135B09E0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x135B0720)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_TypeDefinitionIndex = 75761;

	class Mono2dMapData_IconInfoGroup : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ContentRoot; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* IconInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* _iconRects; // 0x20
		::JLEKMHHGMEM IconType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP__CTOR_OFFSET))(this);
		}

		::System::Void IPFHLMPAPLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IPFHLMPAPLB_OFFSET))(this);
		}

		::System::Void OAHLNNFEJPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OAHLNNFEJPA_OFFSET))(this);
		}

		::System::Void NKLNCMGDCJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_NKLNCMGDCJO_OFFSET))(this);
		}

		::System::Void BIMJJEMAKLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_BIMJJEMAKLD_OFFSET))(this);
		}

		::System::Void LHFAMBGHPAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_LHFAMBGHPAI_OFFSET))(this);
		}
	};
}
