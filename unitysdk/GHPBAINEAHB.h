#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHPBAINEAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2DDE0)

	class GHPBAINEAHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* NLFBIDPPAGI; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* HFPJGBINDPF; // 0x18
		::UnityEngine::Vector2Int JDGGPLGOPEF; // 0x20
		::UnityEngine::Vector2Int KKAMKIKHBIM; // 0x28
		::System::Boolean ENFJEAOIJPJ; // 0x30
		::System::Boolean MOKNCFJICIC; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPBAINEAHB_CTOR_OFFSET))(this);
		}

	};
