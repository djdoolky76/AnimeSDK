#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JBCHPOIENKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2EA0)

inline static constexpr unsigned int JBCHPOIENKK_TypeDefinitionIndex = 36564;

	class JBCHPOIENKK : public ::System::Object
	{
	public:
		::System::Object* MLJJIEIPIEM; // 0x10
		::System::Single NFEIGKAMLNE; // 0x18
		::RPG::MVector2 IONGHEOGALH; // 0x1C
		::System::Single FEFFFCHGJHE; // 0x24
		::System::Single BAFKPLNKGGD; // 0x28
		::System::Boolean GECBBOEPHFC; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::MVector2 NMELCPIOKNO; // 0x30
		::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x38
		::RPG::MVector2 BBFOLEOPPPL; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCHPOIENKK_CTOR_OFFSET))(this);
		}

	};
