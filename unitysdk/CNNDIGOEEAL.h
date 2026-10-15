#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CNNDIGOEEAL_IIOPKPJHFMB_1_OFFSET UNITYSDK_OFFSET(0xDA548D0)
#define CNNDIGOEEAL_IIOPKPJHFMB_OFFSET UNITYSDK_OFFSET(0xDA54360)
#define CNNDIGOEEAL_LENGEDANEEH_1_OFFSET UNITYSDK_OFFSET(0xDA55080)
#define CNNDIGOEEAL_LENGEDANEEH_OFFSET UNITYSDK_OFFSET(0xDA54FE0)

inline static constexpr unsigned int CNNDIGOEEAL_TypeDefinitionIndex = 73654;

	class CNNDIGOEEAL : public ::System::Object
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock* IIOPKPJHFMB(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CNNDIGOEEAL_IIOPKPJHFMB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::MaterialPropertyBlock* IIOPKPJHFMB_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CNNDIGOEEAL_IIOPKPJHFMB_1_OFFSET))(a1, a2);
		}

		static ::System::Void LENGEDANEEH(::UnityEngine::Renderer* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CNNDIGOEEAL_LENGEDANEEH_OFFSET))(a1, a2);
		}

		static ::System::Void LENGEDANEEH_1(::UnityEngine::Renderer* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CNNDIGOEEAL_LENGEDANEEH_1_OFFSET))(a1, a2);
		}

	};
