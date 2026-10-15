#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MMPHMHBBGJK;

#define MMPHMHBBGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D3C30)
#define MMPHMHBBGJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D3A50)

inline static constexpr unsigned int MMPHMHBBGJK_TypeDefinitionIndex = 11525;

	class MMPHMHBBGJK : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GPNOCGKJJCG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPHMHBBGJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMPHMHBBGJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMPHMHBBGJK*))((::PBYTE)hIl2Cpp + MMPHMHBBGJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
