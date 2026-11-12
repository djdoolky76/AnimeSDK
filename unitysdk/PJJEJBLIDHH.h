#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class PJJEJBLIDHH;
namespace System { class Object; }
namespace System { class String; }

#define PJJEJBLIDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5011C0)
#define PJJEJBLIDHH_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E5016D0)
#define PJJEJBLIDHH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5011D0)
#define PJJEJBLIDHH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E501180)

inline static constexpr unsigned int PJJEJBLIDHH_TypeDefinitionIndex = 22942;

	class PJJEJBLIDHH : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FJJLDLJLPOG; // 0x18
		::System::String* AGKOACAIOLC; // 0x20
		::System::String* OBAOKPAKMJH; // 0x28
		::System::String* LHHGLFEBLOP; // 0x30
		::System::String* IDNAOKPDKGO; // 0x38
		::System::String* BEKIDHJAPCK; // 0x40
		::System::String* JONILGEFMHE; // 0x48
		::System::String* KNJHFPCBCEK; // 0x50
		::System::String* POHMMGAGLDE; // 0x58
		::System::String* JAEJPNNEJBI; // 0x60
		::System::String* HDANOJDJMKF; // 0x68
		::System::Boolean CAACKHBBECO; // 0x70
		::System::Boolean GMKILIONLJM; // 0x71
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x74
		::System::UInt32 BNCKFPAGOMF; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJEJBLIDHH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PJJEJBLIDHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJJEJBLIDHH*))((::PBYTE)hIl2Cpp + PJJEJBLIDHH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PJJEJBLIDHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJJEJBLIDHH*))((::PBYTE)hIl2Cpp + PJJEJBLIDHH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJEJBLIDHH_GETDYNAMICKEY_OFFSET))(this);
		}

	};
