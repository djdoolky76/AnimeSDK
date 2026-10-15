#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IHENDFLIFNJ;

#define IHENDFLIFNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE17A0)
#define IHENDFLIFNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE13A0)

inline static constexpr unsigned int IHENDFLIFNJ_TypeDefinitionIndex = 11483;

	class IHENDFLIFNJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LMPLLJFMFEC; // 0x10
		::Il2CppArray<::System::UInt32>* MHNEABPPJBG; // 0x18
		::Il2CppArray<::System::UInt32>* ECCJCKCCPBP; // 0x20
		::RPG::Client::TextID LMFDBGIAPFC; // 0x28
		::RPG::GameCore::FateAreaType ANKBAKDHDJD; // 0x38
		::System::UInt32 FAEHFMIFPBG; // 0x3C
		::RPG::Client::TextID NDAAAOEGMNL; // 0x40
		::RPG::Client::TextID GIGIHGOFGMN; // 0x50
		::System::UInt32 BEOFPCAACEP; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHENDFLIFNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IHENDFLIFNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHENDFLIFNJ*))((::PBYTE)hIl2Cpp + IHENDFLIFNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
