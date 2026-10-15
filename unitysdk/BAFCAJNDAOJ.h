#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEFLHOJEIMG.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
class KCNGFCAMLLN;

#define BAFCAJNDAOJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x15BCDFF0)
#define BAFCAJNDAOJ_CPFHGBPPJBO_OFFSET UNITYSDK_OFFSET(0x15BCE0F0)
#define BAFCAJNDAOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCE130)
#define BAFCAJNDAOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15BCDE20)
#define BAFCAJNDAOJ_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x15BCE0B0)
#define BAFCAJNDAOJ_PGIIEOPPAOJ_OFFSET UNITYSDK_OFFSET(0x15BCE070)

inline static constexpr unsigned int BAFCAJNDAOJ_TypeDefinitionIndex = 73406;

	class BAFCAJNDAOJ : public ::PEFLHOJEIMG
	{
	public:
		::KCNGFCAMLLN* JCAFFNBPIMA; // 0x30
		::KCNGFCAMLLN* PMFANBIALIF; // 0x38
		::KCNGFCAMLLN* BHJDJDPLCLP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::KCNGFCAMLLN* a2, ::KCNGFCAMLLN* a3, ::KCNGFCAMLLN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::KCNGFCAMLLN*, ::KCNGFCAMLLN*, ::KCNGFCAMLLN*))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_CLEAR_OFFSET))(this);
		}

		::KCNGFCAMLLN* PGIIEOPPAOJ()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_PGIIEOPPAOJ_OFFSET))(this);
		}

		::KCNGFCAMLLN* OPGLAKFNMLD()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_OPGLAKFNMLD_OFFSET))(this);
		}

		::KCNGFCAMLLN* CPFHGBPPJBO()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFCAJNDAOJ_CPFHGBPPJBO_OFFSET))(this);
		}

	};
