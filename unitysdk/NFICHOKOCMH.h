#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOCDNBFEBF.h"
class HFCHPMGNMOM;
class NFICHOKOCMH_CLPCNFNDFOM;
namespace System { class Action; }
namespace System { class Object; }

#define NFICHOKOCMH_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0xC46EE10)
#define NFICHOKOCMH_ANNGAHLCEHP_OFFSET UNITYSDK_OFFSET(0xC46EFC0)
#define NFICHOKOCMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC46F830)
#define NFICHOKOCMH_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xC46E390)
#define NFICHOKOCMH_GET_SHOULDTRYRAISEONENTER_OFFSET UNITYSDK_OFFSET(0xC46E3D0)
#define NFICHOKOCMH_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xC46E3B0)
#define NFICHOKOCMH_IOKCMGANCOF_OFFSET UNITYSDK_OFFSET(0xC46F6B0)
#define NFICHOKOCMH_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0xC46E3F0)
#define NFICHOKOCMH_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xC46E3A0)
#define NFICHOKOCMH_SET_SHOULDTRYRAISEONENTER_OFFSET UNITYSDK_OFFSET(0xC46E3E0)
#define NFICHOKOCMH_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xC46E3C0)

inline static constexpr unsigned int NFICHOKOCMH_TypeDefinitionIndex = 82290;

	class NFICHOKOCMH : public ::JEOCDNBFEBF
	{
	public:
		::NFICHOKOCMH_CLPCNFNDFOM* _Context_k__BackingField; // 0x10
		::HFCHPMGNMOM* _Source_k__BackingField; // 0x18
		::System::Boolean _ShouldTryRaiseOnEnter_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_CTOR_OFFSET))(this);
		}

		::NFICHOKOCMH_CLPCNFNDFOM* get_Context()
		{
			return ((::NFICHOKOCMH_CLPCNFNDFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::NFICHOKOCMH_CLPCNFNDFOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFICHOKOCMH_CLPCNFNDFOM*))((::PBYTE)hIl2Cpp + NFICHOKOCMH_SET_CONTEXT_OFFSET))(this, a1);
		}

		::HFCHPMGNMOM* get_Source()
		{
			return ((::HFCHPMGNMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + NFICHOKOCMH_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldTryRaiseOnEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_GET_SHOULDTRYRAISEONENTER_OFFSET))(this);
		}

		::System::Void set_ShouldTryRaiseOnEnter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFICHOKOCMH_SET_SHOULDTRYRAISEONENTER_OFFSET))(this, a1);
		}

		::System::Void LBBLNALEPMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFICHOKOCMH_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void AGIMGKGCLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_AGIMGKGCLJP_OFFSET))(this);
		}

		::System::Void ANNGAHLCEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFICHOKOCMH_ANNGAHLCEHP_OFFSET))(this);
		}

		::System::Void IOKCMGANCOF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFICHOKOCMH_IOKCMGANCOF_OFFSET))(this, a1);
		}

	};
