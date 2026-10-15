#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKPCOFLGHEM_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xB9A3AA0)
#define MKPCOFLGHEM_CELJINNDINO_OFFSET UNITYSDK_OFFSET(0xB9A34B0)
#define MKPCOFLGHEM_HBHCKEGINEN_OFFSET UNITYSDK_OFFSET(0xB9A3A50)
#define MKPCOFLGHEM_HGLEGLMJAHN_OFFSET UNITYSDK_OFFSET(0xB9A2EE0)

	class MKPCOFLGHEM : public ::System::Object
	{
	public:
		static ::System::String* HGLEGLMJAHN(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + MKPCOFLGHEM_HGLEGLMJAHN_OFFSET))(a1);
		}

		static ::System::Void CELJINNDINO(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKPCOFLGHEM_CELJINNDINO_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2Int BMOMBCHEEEI(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector2Int(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MKPCOFLGHEM_BMOMBCHEEEI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HBHCKEGINEN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MKPCOFLGHEM_HBHCKEGINEN_OFFSET))(a1, a2);
		}

	};
