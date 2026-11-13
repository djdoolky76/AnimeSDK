#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMPHMHBBGJK;

#define MMPHMHBBGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E878820)
#define MMPHMHBBGJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E878640)

inline static constexpr unsigned int MMPHMHBBGJK_TypeDefinitionIndex = 11576;

	class MMPHMHBBGJK : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::RPG::Client::TextID GPNOCGKJJCG; // 0x18
		::System::UInt32 ACCJKGEKHKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPHMHBBGJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMPHMHBBGJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMPHMHBBGJK*))((::PBYTE)hIl2Cpp + MMPHMHBBGJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
