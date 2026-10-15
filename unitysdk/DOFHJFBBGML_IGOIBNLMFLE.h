#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class SerializedWarmupPSO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define DOFHJFBBGML_IGOIBNLMFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE44C0)
#define DOFHJFBBGML_IGOIBNLMFLE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x11FE6AF0)

inline static constexpr unsigned int DOFHJFBBGML_IGOIBNLMFLE_TypeDefinitionIndex = 47424;

	class DOFHJFBBGML_IGOIBNLMFLE : public ::System::Object
	{
	public:
		::UnityEngine::Shader* PAIJIEBIPIO; // 0x10
		::System::Collections::Generic::List_1<::SerializedWarmupPSO*>* DMMJMJKIFAL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_IGOIBNLMFLE_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_IGOIBNLMFLE_PJPFIHFAHGO_OFFSET))(this);
		}

	};
