#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }

#define CFDKLPEAGBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DDC60)

inline static constexpr unsigned int CFDKLPEAGBO_TypeDefinitionIndex = 43159;

	class CFDKLPEAGBO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KAJKMBBABGJ; // 0x10
		::Il2CppArray<::System::UInt32>* FBPPJBJLALM; // 0x18
		::Il2CppArray<::System::UInt32>* JEHKEIEAFFP; // 0x20
		::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* BJOKADDCEKP; // 0x28
		::System::Single JBCFPAEELBL; // 0x30
		::System::Single KHAPPPBDEEE; // 0x34
		::System::Single FKBALPLGOEC; // 0x38
		::System::Boolean NPGEBGGFHFG; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single NKPKPNKBBAP; // 0x40
		::System::Single PNMMOEFLFBH; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDKLPEAGBO_CTOR_OFFSET))(this);
		}

	};
