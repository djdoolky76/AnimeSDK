#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADCHCEGJPFN;
class AENGOKAEEOA;
class JEFCCHAPOLA;
class KIFJCNNALIL;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace RPG::GameCore { class RtBattleStageConfig; }

#define ANDEHGAKOHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15587390)

inline static constexpr unsigned int ANDEHGAKOHE_TypeDefinitionIndex = 54281;

	class ANDEHGAKOHE : public ::System::Object
	{
	public:
		::Il2CppArray<::JEFCCHAPOLA*>* CNIJIJMEPEF; // 0x10
		::RPG::GameCore::ILBattleStageConfigRow* KHIOIHDMPJB; // 0x18
		::RPG::GameCore::RtBattleStageConfig* NDKBFJGABBH; // 0x20
		::Il2CppArray<::ADCHCEGJPFN*>* BOAOMLMNLBN; // 0x28
		::Il2CppArray<::AENGOKAEEOA*>* EMBCKHPBDAG; // 0x30
		::Il2CppArray<::System::UInt32>* IDFJLAOIJNG; // 0x38
		::KIFJCNNALIL* BNDMKABKPDL; // 0x40
		::Il2CppArray<::System::UInt32>* LIILGKFIKEO; // 0x48
		::System::Int32 HOGEMAHFFEF; // 0x50
		::System::UInt32 LCHLDHNIILN; // 0x54
		::System::Boolean JMGPHNKLFDO; // 0x58
		::System::Byte _padding0[0x3];
		::System::UInt32 EEBLMLAEFHO; // 0x5C
		::System::UInt64 DGFEHGOFFGL; // 0x60
		::System::UInt32 GMLENIEKBKC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDEHGAKOHE_CTOR_OFFSET))(this);
		}

	};
