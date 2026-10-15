#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLGICPNPKIC.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
class AHGIOCIDPMI;
class PEFLHOJEIMG;
namespace System { class String; }

#define PEFLHOJEIMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC032950)
#define PEFLHOJEIMG_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xC032550)
#define PEFLHOJEIMG_KPJGDHLENIP_2_OFFSET UNITYSDK_OFFSET(0xC0325E0)
#define PEFLHOJEIMG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC0324D0)
#define PEFLHOJEIMG_LICEAJDINOM_OFFSET UNITYSDK_OFFSET(0xC0327D0)
#define PEFLHOJEIMG_LNMEMMNJKKO_OFFSET UNITYSDK_OFFSET(0xC0326E0)
#define PEFLHOJEIMG_MFIOMKMOCDP_OFFSET UNITYSDK_OFFSET(0xC032810)
#define PEFLHOJEIMG_MPHNMOGNEHL_OFFSET UNITYSDK_OFFSET(0xC032670)
#define PEFLHOJEIMG_PPAMJNOKPLO_OFFSET UNITYSDK_OFFSET(0xC032750)

inline static constexpr unsigned int PEFLHOJEIMG_TypeDefinitionIndex = 73414;

	class PEFLHOJEIMG : public ::KLGICPNPKIC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP_1(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_KPJGDHLENIP_1_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP_2(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_KPJGDHLENIP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::String* MPHNMOGNEHL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_MPHNMOGNEHL_OFFSET))(this);
		}

		::AHGIOCIDPMI* LNMEMMNJKKO()
		{
			return ((::AHGIOCIDPMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_LNMEMMNJKKO_OFFSET))(this);
		}

		::PEFLHOJEIMG* PPAMJNOKPLO()
		{
			return ((::PEFLHOJEIMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_PPAMJNOKPLO_OFFSET))(this);
		}

		::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind LICEAJDINOM()
		{
			return ((::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_LICEAJDINOM_OFFSET))(this);
		}

		::System::String* MFIOMKMOCDP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFLHOJEIMG_MFIOMKMOCDP_OFFSET))(this);
		}

	};
