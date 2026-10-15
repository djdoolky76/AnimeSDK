#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCFKPLDONLO_BJGIPJPOOJI_OFFSET UNITYSDK_OFFSET(0x156B8DB0)
#define FCFKPLDONLO_CTOR_OFFSET UNITYSDK_OFFSET(0x156B9020)

	class FCFKPLDONLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* CNJBGEPCEHN; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::UnityEngine::Vector3 LGOCDNKCPMJ; // 0x20
		::UnityEngine::Vector3 CFJPCKOJMDH; // 0x2C
		::UnityEngine::Vector3 OFIPHAJEPGA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKPLDONLO_CTOR_OFFSET))(this);
		}

		::System::String* BJGIPJPOOJI(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCFKPLDONLO_BJGIPJPOOJI_OFFSET))(this, a1);
		}

	};
