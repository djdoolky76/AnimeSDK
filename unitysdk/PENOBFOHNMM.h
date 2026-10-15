#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PENOBFOHNMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E7AD0)

inline static constexpr unsigned int PENOBFOHNMM_TypeDefinitionIndex = 42971;

	class PENOBFOHNMM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DKGLDKILPIF; // 0x10
		::System::UInt32 CIHDMACAGPN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENOBFOHNMM_CTOR_OFFSET))(this);
		}

	};
