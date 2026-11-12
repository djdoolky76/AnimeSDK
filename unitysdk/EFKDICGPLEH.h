#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGLFJLFFBPP;
class JPFJJLEPGBC;
class MCFDMCPGEBD;
namespace RPG::GameCore { class LittleGameSandboxConfig; }
namespace RPG::GameCore { class LittleGameSandboxProfileRef; }
namespace System { class String; }

#define EFKDICGPLEH_ACAPCHBDIBF_OFFSET UNITYSDK_OFFSET(0x148147D0)
#define EFKDICGPLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x148151D0)
#define EFKDICGPLEH_DJCIBIOHKJL_OFFSET UNITYSDK_OFFSET(0x14815160)
#define EFKDICGPLEH_FCBHNLIEGEN_OFFSET UNITYSDK_OFFSET(0x14814820)
#define EFKDICGPLEH_MHGCBKLMHJO_OFFSET UNITYSDK_OFFSET(0x14814E20)
#define EFKDICGPLEH_MNPFDFDBMNG_1_OFFSET UNITYSDK_OFFSET(0x14814FF0)
#define EFKDICGPLEH_MNPFDFDBMNG_2_OFFSET UNITYSDK_OFFSET(0x14815090)
#define EFKDICGPLEH_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0x148145B0)
#define EFKDICGPLEH_NBHDKBLOLOO_OFFSET UNITYSDK_OFFSET(0x14814920)

inline static constexpr unsigned int EFKDICGPLEH_TypeDefinitionIndex = 61923;

	class EFKDICGPLEH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKDICGPLEH_CTOR_OFFSET))(this);
		}

		::System::Boolean MNPFDFDBMNG(::JPFJJLEPGBC* a1, ::MCFDMCPGEBD* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::MCFDMCPGEBD*, ::System::String*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_MNPFDFDBMNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MHGCBKLMHJO(::GGLFJLFFBPP* a1, ::MCFDMCPGEBD* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGLFJLFFBPP*, ::MCFDMCPGEBD*, ::System::String*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_MHGCBKLMHJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MNPFDFDBMNG_1(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxConfig* a2, ::MCFDMCPGEBD* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxConfig*, ::MCFDMCPGEBD*, ::System::String*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_MNPFDFDBMNG_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MNPFDFDBMNG_2(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxConfig* a2, ::RPG::GameCore::LittleGameSandboxConfig* a3, ::MCFDMCPGEBD* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxConfig*, ::RPG::GameCore::LittleGameSandboxConfig*, ::MCFDMCPGEBD*, ::System::String*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_MNPFDFDBMNG_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NBHDKBLOLOO(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxConfig* a2, ::System::Boolean a3, ::System::String* a4, ::MCFDMCPGEBD* a5, ::System::String* a6, ::RPG::GameCore::LittleGameSandboxProfileRef* a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxConfig*, ::System::Boolean, ::System::String*, ::MCFDMCPGEBD*, ::System::String*, ::RPG::GameCore::LittleGameSandboxProfileRef*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFKDICGPLEH_NBHDKBLOLOO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean ACAPCHBDIBF(::RPG::GameCore::LittleGameSandboxProfileRef* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameSandboxProfileRef*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_ACAPCHBDIBF_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGameSandboxProfileRef* FCBHNLIEGEN(::JPFJJLEPGBC* a1)
		{
			return ((::RPG::GameCore::LittleGameSandboxProfileRef*(*)(::JPFJJLEPGBC*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_FCBHNLIEGEN_OFFSET))(a1);
		}

		static ::System::String* DJCIBIOHKJL(::JPFJJLEPGBC* a1, ::RPG::GameCore::LittleGameSandboxConfig* a2)
		{
			return ((::System::String*(*)(::JPFJJLEPGBC*, ::RPG::GameCore::LittleGameSandboxConfig*))((::PBYTE)hIl2Cpp + EFKDICGPLEH_DJCIBIOHKJL_OFFSET))(a1, a2);
		}

	};
