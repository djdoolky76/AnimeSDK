#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEFLHOJEIMG.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
class AENEFHBMEMJ;
class BAFCAJNDAOJ;
class KCNGFCAMLLN;
class KLGICPNPKIC;

#define FIMAFJNMOGM_CLEAR_OFFSET UNITYSDK_OFFSET(0x157AD840)
#define FIMAFJNMOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x157ADB80)
#define FIMAFJNMOGM_DDDKNOPBAPE_OFFSET UNITYSDK_OFFSET(0x157ADB00)
#define FIMAFJNMOGM_HHKHFHDJLHM_OFFSET UNITYSDK_OFFSET(0x157AD8C0)
#define FIMAFJNMOGM_IIHPAGMJPDM_OFFSET UNITYSDK_OFFSET(0x157AD9E0)
#define FIMAFJNMOGM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157AD700)
#define FIMAFJNMOGM_OCPICCDDEOB_OFFSET UNITYSDK_OFFSET(0x157ADB40)

inline static constexpr unsigned int FIMAFJNMOGM_TypeDefinitionIndex = 73408;

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

		::System::Void HHKHFHDJLHM(::KLGICPNPKIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_HHKHFHDJLHM_OFFSET))(this, a1);
		}

		::System::Void IIHPAGMJPDM(::AENEFHBMEMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AENEFHBMEMJ*))((::PBYTE)hIl2Cpp + FIMAFJNMOGM_IIHPAGMJPDM_OFFSET))(this, a1);
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
