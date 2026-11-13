#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }

#define PFBILMDGFHE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D75440)

inline static constexpr unsigned int PFBILMDGFHE_TypeDefinitionIndex = 76030;

	class PFBILMDGFHE : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::System::String* MACHCHJDBBH; // 0x20
		::System::String* ANMKMDHFDAG; // 0x28
		::RPG::GameCore::MeshBound* PPKHNNBEOEL; // 0x30
		::System::Boolean MLMKJGOIONL; // 0x38
		::System::Boolean EKHICICMCBI; // 0x39
		::System::Boolean NAADMOMMNAL; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Int32 GMDBHJKEAEI; // 0x3C
		::System::Single PHHJGMPBAKK; // 0x40
		::System::Single JMPMDGJLIPF; // 0x44
		::System::Int32 INKGKILNLFB; // 0x48
		::System::Single CNDABONKHMH; // 0x4C
		::System::Single PEGKLICCBKF; // 0x50
		::System::Int32 IOBJFEJFLJP; // 0x54
		::System::Single PDKOHKKMKLF; // 0x58
		::System::Single FOANGAFDLDJ; // 0x5C
		::System::Single JCHKEBPNHDG; // 0x60
		::System::Single OCKOLFPPGDF; // 0x64
		::System::Single PDJLNAILECG; // 0x68
		::System::Single HDOJAFAAIKM; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBILMDGFHE_CTOR_OFFSET))(this);
		}

	};
