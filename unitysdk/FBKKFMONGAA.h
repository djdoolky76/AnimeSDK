#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGCDGKOBMK.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class NKIJFPHFJCO;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FBKKFMONGAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C552400)
#define FBKKFMONGAA_LICOGDLBFGE_OFFSET UNITYSDK_OFFSET(0x1C5522C0)

	class FBKKFMONGAA : public ::DIGCDGKOBMK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKKFMONGAA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* LICOGDLBFGE(::NKIJFPHFJCO* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + FBKKFMONGAA_LICOGDLBFGE_OFFSET))(this, a1);
		}

	};
