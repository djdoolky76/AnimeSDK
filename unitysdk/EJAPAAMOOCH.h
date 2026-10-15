#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

#define EJAPAAMOOCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8CDB0)

inline static constexpr unsigned int EJAPAAMOOCH_TypeDefinitionIndex = 10376;

	class EJAPAAMOOCH : public ::System::Object
	{
	public:
		::System::Func_2<::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint>* GGNHJGFPMDN; // 0x10
		::System::Int32 HEFPHPPEPJM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAPAAMOOCH_CTOR_OFFSET))(this);
		}

	};
