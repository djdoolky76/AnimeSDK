#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NJOOOHDMEJC.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBNMDMHANGE_IBGMDPBGCCJ_OFFSET UNITYSDK_OFFSET(0x15C12910)
#define HBNMDMHANGE_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15C12370)
#define HBNMDMHANGE_LGOABJACMMG_OFFSET UNITYSDK_OFFSET(0x15C11B60)

inline static constexpr unsigned int HBNMDMHANGE_TypeDefinitionIndex = 48918;

	class HBNMDMHANGE : public ::System::Object
	{
	public:
		// static const ::System::Object FMPDMAIEMFM; // 0x0
		static ::UnityEngine::Vector3 LGOABJACMMG(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + HBNMDMHANGE_LGOABJACMMG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JAILHGGFLDH(::System::Collections::Generic::List_1<::NJOOOHDMEJC>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::NJOOOHDMEJC>*))((::PBYTE)hIl2Cpp + HBNMDMHANGE_JAILHGGFLDH_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 IBGMDPBGCCJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HBNMDMHANGE_IBGMDPBGCCJ_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
