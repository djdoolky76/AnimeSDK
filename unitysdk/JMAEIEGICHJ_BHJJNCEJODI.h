#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMAEIEGICHJ_BHJJNCEJODI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A21B0)

inline static constexpr unsigned int JMAEIEGICHJ_BHJJNCEJODI_TypeDefinitionIndex = 52932;

	class JMAEIEGICHJ_BHJJNCEJODI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* JIFLMINONGM; // 0x10
		::UnityEngine::Vector3Int PPHOOFAIBPC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_BHJJNCEJODI_CTOR_OFFSET))(this);
		}

	};
