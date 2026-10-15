#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_PCGGRIDTOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x16537970)

	class IRI_PCGGridTool : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_PCGGRIDTOOL_CTOR_OFFSET))(this);
		}

	};
