#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JBCHPOIENKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C12D650)

inline static constexpr unsigned int JBCHPOIENKK_TypeDefinitionIndex = 37492;

	class JBCHPOIENKK : public ::System::Object
	{
	public:
		::System::Object* MLJJIEIPIEM; // 0x10
		::System::Boolean GECBBOEPHFC; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::MVector2 BBFOLEOPPPL; // 0x1C
		::System::Single NFEIGKAMLNE; // 0x24
		::RPG::MVector2 IONGHEOGALH; // 0x28
		::RPG::MVector2 NMELCPIOKNO; // 0x30
		::RPG::GameCore::PhysicsRigidBodyType GMPGDEINODK; // 0x38
		::System::Single FEFFFCHGJHE; // 0x3C
		::System::Single BAFKPLNKGGD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCHPOIENKK_CTOR_OFFSET))(this);
		}

	};
