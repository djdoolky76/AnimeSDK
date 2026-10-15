#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_MODULECUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16537940)

	class IRI_ModuleCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_MODULECUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
