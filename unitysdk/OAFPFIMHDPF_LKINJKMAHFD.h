#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJOIOEPGKPP;
class GEIHCPAOKKK;
class OAFPFIMHDPF;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define OAFPFIMHDPF_LKINJKMAHFD_DDAFMHGPPDN_OFFSET UNITYSDK_OFFSET(0x13A42620)
#define OAFPFIMHDPF_LKINJKMAHFD_EMEGLLPLNGF_OFFSET UNITYSDK_OFFSET(0x13A42430)
#define OAFPFIMHDPF_LKINJKMAHFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A42420)

inline static constexpr unsigned int OAFPFIMHDPF_LKINJKMAHFD_TypeDefinitionIndex = 75075;

class OAFPFIMHDPF_LKINJKMAHFD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::FJOIOEPGKPP* PIOFOEMLNBC; // 0x18
	::OAFPFIMHDPF* KLHPEBKNIFB; // 0x20
	::System::String* HIEKPPDAMLM; // 0x28
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x30
	::MoleMole::Battle::Entity* DJHFOGHIFEJ; // 0x38
	::System::Int32 JIBDFMFLJHA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_LKINJKMAHFD__CTOR_OFFSET))(this);
	}

	::System::Void EMEGLLPLNGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_LKINJKMAHFD_EMEGLLPLNGF_OFFSET))(this);
	}

	::System::Void DDAFMHGPPDN(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFPFIMHDPF_LKINJKMAHFD_DDAFMHGPPDN_OFFSET))(this, FBILHHBPEHD);
	}
};
