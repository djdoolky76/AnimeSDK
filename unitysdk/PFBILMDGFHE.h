#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }

#define PFBILMDGFHE_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE9A80)

inline static constexpr unsigned int PFBILMDGFHE_TypeDefinitionIndex = 76031;

	class PFBILMDGFHE : public ::System::Object
	{
	public:
		::System::String* CDMFNHJGGKF; // 0x10
		::System::String* ANMKMDHFDAG; // 0x18
		::System::String* MACHCHJDBBH; // 0x20
		::RPG::GameCore::MeshBound* PPKHNNBEOEL; // 0x28
		::System::String* OENAMINOLLF; // 0x30
		::System::Single JMPMDGJLIPF; // 0x38
		::System::Single PDKOHKKMKLF; // 0x3C
		::System::Single FOANGAFDLDJ; // 0x40
		::System::Single JCHKEBPNHDG; // 0x44
		::System::Boolean MLMKJGOIONL; // 0x48
		::System::Boolean NAADMOMMNAL; // 0x49
		::System::Boolean EKHICICMCBI; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Int32 GMDBHJKEAEI; // 0x4C
		::System::Single PEGKLICCBKF; // 0x50
		::System::Int32 IOBJFEJFLJP; // 0x54
		::System::Int32 INKGKILNLFB; // 0x58
		::System::Single CNDABONKHMH; // 0x5C
		::System::Single PDJLNAILECG; // 0x60
		::System::Single OCKOLFPPGDF; // 0x64
		::System::Single PHHJGMPBAKK; // 0x68
		::System::Single HDOJAFAAIKM; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBILMDGFHE_CTOR_OFFSET))(this);
		}

	};
