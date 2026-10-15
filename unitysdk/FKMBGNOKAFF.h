#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
class PAADPKGPFMJ;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }

#define FKMBGNOKAFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1580D9A0)
#define FKMBGNOKAFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1580DE60)
#define FKMBGNOKAFF_EKKEFCIPHPI_OFFSET UNITYSDK_OFFSET(0x1580DC20)
#define FKMBGNOKAFF_HAGGMBLKIFL_OFFSET UNITYSDK_OFFSET(0x1580D980)
#define FKMBGNOKAFF_IKACEFAFAJG_OFFSET UNITYSDK_OFFSET(0x1580DCF0)
#define FKMBGNOKAFF_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1580DDC0)

inline static constexpr unsigned int FKMBGNOKAFF_TypeDefinitionIndex = 57266;

	class FKMBGNOKAFF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* BAODKPDFNFC; // 0x10
		::KFELGAIGHAP* KEBGDCCFDEF; // 0x18
		::KFELGAIGHAP* MLFDPPFABHF; // 0x20
		::RPG::GameCore::FreeStyleAnimGroupEventConfig* EABKOHGCHFP; // 0x28
		::System::Boolean LMLJLOCBMDI; // 0x30
		::System::Boolean LEICGLBOIDL; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 FJJHLAEBNLJ; // 0x34
		::System::Void _ctor(::PAADPKGPFMJ* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimGroupEventConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HAGGMBLKIFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_HAGGMBLKIFL_OFFSET))(this);
		}

		::System::Void EKKEFCIPHPI(::PAADPKGPFMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ*))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_EKKEFCIPHPI_OFFSET))(this, a1);
		}

		::System::Void IKACEFAFAJG(::PAADPKGPFMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAADPKGPFMJ*))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_IKACEFAFAJG_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_LCJMKJPECAP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKMBGNOKAFF_DISPOSE_OFFSET))(this);
		}

	};
