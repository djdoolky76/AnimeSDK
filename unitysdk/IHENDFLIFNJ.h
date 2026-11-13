#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IHENDFLIFNJ;

#define IHENDFLIFNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CAFB0)
#define IHENDFLIFNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6CABB0)

inline static constexpr unsigned int IHENDFLIFNJ_TypeDefinitionIndex = 11534;

	class IHENDFLIFNJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LMPLLJFMFEC; // 0x10
		::Il2CppArray<::System::UInt32>* MHNEABPPJBG; // 0x18
		::Il2CppArray<::System::UInt32>* ECCJCKCCPBP; // 0x20
		::System::UInt32 BEOFPCAACEP; // 0x28
		::System::UInt32 FAEHFMIFPBG; // 0x2C
		::RPG::Client::TextID LMFDBGIAPFC; // 0x30
		::RPG::Client::TextID NDAAAOEGMNL; // 0x40
		::RPG::GameCore::FateAreaType ANKBAKDHDJD; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GIGIHGOFGMN; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHENDFLIFNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IHENDFLIFNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHENDFLIFNJ*))((::PBYTE)hIl2Cpp + IHENDFLIFNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
