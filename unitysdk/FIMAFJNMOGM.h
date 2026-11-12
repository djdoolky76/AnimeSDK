#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEFLHOJEIMG.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
class BAFCAJNDAOJ;
class KCNGFCAMLLN;

#define FIMAFJNMOGM_CLEAR_OFFSET UNITYSDK_OFFSET(0x166CEB50)
#define FIMAFJNMOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x166CEC50)
#define FIMAFJNMOGM_DDDKNOPBAPE_OFFSET UNITYSDK_OFFSET(0x166CEBD0)
#define FIMAFJNMOGM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x166CEA10)
#define FIMAFJNMOGM_OCPICCDDEOB_OFFSET UNITYSDK_OFFSET(0x166CEC10)

inline static constexpr unsigned int FIMAFJNMOGM_TypeDefinitionIndex = 75531;

	class FIMAFJNMOGM : public ::PEFLHOJEIMG
	{
	public:
		::BAFCAJNDAOJ* GPDGDHOJGNC; // 0x30
		::KCNGFCAMLLN* GFEBHFMPPDJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2, ::KCNGFCAMLLN* a3, ::BAFCAJNDAOJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32, ::KCNGFCAMLLN*, ::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_CLEAR_OFFSET))(this);
		}

		::KCNGFCAMLLN* DDDKNOPBAPE()
		{
			return ((::KCNGFCAMLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_DDDKNOPBAPE_OFFSET))(this);
		}

		::BAFCAJNDAOJ* OCPICCDDEOB()
		{
			return ((::BAFCAJNDAOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_OCPICCDDEOB_OFFSET))(this);
		}

	};
