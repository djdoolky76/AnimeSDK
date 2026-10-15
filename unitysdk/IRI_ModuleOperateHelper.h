#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_MODULEOPERATEHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x16537950)

	class IRI_ModuleOperateHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_MODULEOPERATEHELPER_CTOR_OFFSET))(this);
		}

	};
