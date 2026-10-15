#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_COMICSTYLERMATERIALOPERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x16533630)

	class IRI_ComicStylerMaterialOperator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_COMICSTYLERMATERIALOPERATOR_CTOR_OFFSET))(this);
		}

	};
