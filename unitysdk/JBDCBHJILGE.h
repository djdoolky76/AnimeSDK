#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JBDCBHJILGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD53730)

inline static constexpr unsigned int JBDCBHJILGE_TypeDefinitionIndex = 43050;

	class JBDCBHJILGE : public ::System::Object
	{
	public:
		::System::Single PPPENJHCACM; // 0x10
		::System::Single CIAIPCOAFII; // 0x14
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x18
		::System::Int32 ABEACDNNNBM; // 0x24
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDCBHJILGE_CTOR_OFFSET))(this);
		}

	};
