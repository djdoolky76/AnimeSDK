#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPIIEACKPJF.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIViewModelReference; }

#define DJJNDMGMLLB_CLEAN_OFFSET UNITYSDK_OFFSET(0x13448650)
#define DJJNDMGMLLB_CODDFFCGMCN_OFFSET UNITYSDK_OFFSET(0x134487C0)
#define DJJNDMGMLLB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13448840)
#define DJJNDMGMLLB_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x13448830)
#define DJJNDMGMLLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13448720)
#define DJJNDMGMLLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13448710)

inline static constexpr unsigned int DJJNDMGMLLB_TypeDefinitionIndex = 48588;

class DJJNDMGMLLB : public ::OPIIEACKPJF
{
public:
	static ::Foundation::ObjectPool_1<::DJJNDMGMLLB*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::DJJNDMGMLLB*>**)Il2CppClass::FromTypeDefinitionIndex(DJJNDMGMLLB_TypeDefinitionIndex)->GetStaticField(0x37350);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJNDMGMLLB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJJNDMGMLLB__CCTOR_OFFSET))();
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJNDMGMLLB_CLEAN_OFFSET))(this);
	}

	static ::DJJNDMGMLLB* CODDFFCGMCN()
	{
		return ((::DJJNDMGMLLB*(*)())((::PBYTE)hIl2Cpp + DJJNDMGMLLB_CODDFFCGMCN_OFFSET))();
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJNDMGMLLB_LJNFANAEHHA_OFFSET))(this);
	}

	static ::DJJNDMGMLLB* COKNIICCODC(::MoleMole::UIViewModelReference* IONFBAPOJKM)
	{
		return ((::DJJNDMGMLLB*(*)(::MoleMole::UIViewModelReference*))((::PBYTE)hIl2Cpp + DJJNDMGMLLB_COKNIICCODC_OFFSET))(IONFBAPOJKM);
	}
};
