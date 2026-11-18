#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class FGHKNPHEBAG;
namespace MoleMole { class ClothToRenderersDataDic; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MdbComponent; }

#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET UNITYSDK_OFFSET(0x10D26B00)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET UNITYSDK_OFFSET(0x10D260D0)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10D25F10)
#define MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x10D27010)

namespace MoleMole
{
	inline static constexpr unsigned int MDBClothToRenderersMapping_TypeDefinitionIndex = 52416;

	class MDBClothToRenderersMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MdbComponent* NJDNGLKGLLL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FGHKNPHEBAG*>* MdbClothIndexToRenderersState; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* RendererNameToClothIndices; // 0x28
		::MoleMole::ClothToRenderersDataDic* Data; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING__CTOR_OFFSET))(this);
		}

		::UnityEngine::MdbComponent* get_MdbComponent()
		{
			return ((::UnityEngine::MdbComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_GET_MDBCOMPONENT_OFFSET))(this);
		}

		::System::Void Cache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* CacheVisibilityChangeAndCalculate(::System::String* EGHDEGLFOBN, ::System::Boolean MBJDMKCGOCK, ::System::Boolean DIKHKGBNPDG)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MDBCLOTHTORENDERERSMAPPING_CACHEVISIBILITYCHANGEANDCALCULATE_OFFSET))(this, EGHDEGLFOBN, MBJDMKCGOCK, DIKHKGBNPDG);
		}
	};
}
