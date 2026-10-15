#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLDDJECCBAO;

#define ABCPIKLPIGI___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EE9F0)
#define ABCPIKLPIGI___C__DISPLAYCLASS24_0___REMOVEEDGEFROMADJACENCYLIST_B__0_OFFSET UNITYSDK_OFFSET(0xB0EEA00)

inline static constexpr unsigned int ABCPIKLPIGI___c__DisplayClass24_0_TypeDefinitionIndex = 74602;

	class ABCPIKLPIGI___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::GLDDJECCBAO* edge; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCPIKLPIGI___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveEdgeFromAdjacencyList_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI___C__DISPLAYCLASS24_0___REMOVEEDGEFROMADJACENCYLIST_B__0_OFFSET))(this, a1);
		}

	};
