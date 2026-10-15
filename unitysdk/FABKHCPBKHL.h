#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FABKHCPBKHL;
class FCOEMCEDLNL;
class HILBLEPGKKJ;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System { class String; }

#define FABKHCPBKHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD96560)
#define FABKHCPBKHL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD96570)
#define FABKHCPBKHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD96510)

inline static constexpr unsigned int FABKHCPBKHL_TypeDefinitionIndex = 16871;

	class FABKHCPBKHL : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::Il2CppArray<::HILBLEPGKKJ*>* HFPHJBGAJOJ; // 0x10
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* DLHHFOLGFLP; // 0x18
		::System::String* KICLGMCEMNH; // 0x20
		::System::Boolean HNMFDELHIEK; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 KHFBFFHFOCA; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKHCPBKHL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FABKHCPBKHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FABKHCPBKHL*))((::PBYTE)hIl2Cpp + FABKHCPBKHL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FABKHCPBKHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FABKHCPBKHL*))((::PBYTE)hIl2Cpp + FABKHCPBKHL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
