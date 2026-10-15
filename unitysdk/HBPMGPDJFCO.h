#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define HBPMGPDJFCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA87950)

inline static constexpr unsigned int HBPMGPDJFCO_TypeDefinitionIndex = 43732;

	class HBPMGPDJFCO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* JJJNPLOLJGE; // 0x10
		::RPG::GameCore::FixPoint EEOIEGKBKCL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPMGPDJFCO_CTOR_OFFSET))(this);
		}

	};
