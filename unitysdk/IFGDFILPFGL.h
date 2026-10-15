#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsEmployeeStateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IFGDFILPFGL;

#define IFGDFILPFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEF6D0)
#define IFGDFILPFGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEF4F0)

inline static constexpr unsigned int IFGDFILPFGL_TypeDefinitionIndex = 13975;

	class IFGDFILPFGL : public ::System::Object
	{
	public:
		::System::UInt32 CNHDBLLCFFB; // 0x10
		::RPG::GameCore::LimaoNewsEmployeeStateType BKEMOJMOLBB; // 0x14
		::RPG::Client::TextID EJJIJCCPJHP; // 0x18
		::System::UInt32 LPNBEANGIGE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGDFILPFGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFGDFILPFGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFGDFILPFGL*))((::PBYTE)hIl2Cpp + IFGDFILPFGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
