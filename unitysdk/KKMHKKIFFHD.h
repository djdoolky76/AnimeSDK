#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/System/Object.h"

#define KKMHKKIFFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E77A0)

inline static constexpr unsigned int KKMHKKIFFHD_TypeDefinitionIndex = 36916;

	class KKMHKKIFFHD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* MADGAJKGCMD; // 0x10
		::RPG::Client::LittleGameShare::ChangeType EBFOHGMMHKL; // 0x18
		::System::UInt32 NAAENBLCEEG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMHKKIFFHD_CTOR_OFFSET))(this);
		}

	};
