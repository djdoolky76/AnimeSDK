#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JBDCBHJILGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC6F0)

inline static constexpr unsigned int JBDCBHJILGE_TypeDefinitionIndex = 43050;

	class JBDCBHJILGE : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x10
		::System::Single CIAIPCOAFII; // 0x1C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x20
		::System::Int32 ABEACDNNNBM; // 0x2C
		::System::Single PPPENJHCACM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDCBHJILGE_CTOR_OFFSET))(this);
		}

	};
