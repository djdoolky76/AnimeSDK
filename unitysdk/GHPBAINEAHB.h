#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHPBAINEAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A223B0)

inline static constexpr unsigned int GHPBAINEAHB_TypeDefinitionIndex = 55174;

	class GHPBAINEAHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* HFPJGBINDPF; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* NLFBIDPPAGI; // 0x18
		::System::Boolean ENFJEAOIJPJ; // 0x20
		::System::Boolean MOKNCFJICIC; // 0x21
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2Int KKAMKIKHBIM; // 0x24
		::UnityEngine::Vector2Int JDGGPLGOPEF; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPBAINEAHB_CTOR_OFFSET))(this);
		}

	};
