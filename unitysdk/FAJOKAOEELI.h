#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBPFBNCALB.h"
class FAJOKAOEELI_AJCIPGLGNJO;
class HEKHCLACHJE;
namespace System { class Action; }
namespace System { class Object; }

#define FAJOKAOEELI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C523430)
#define FAJOKAOEELI_DNDAANGPDCE_OFFSET UNITYSDK_OFFSET(0x1C523720)
#define FAJOKAOEELI_FPIDAOIDEDD_OFFSET UNITYSDK_OFFSET(0x1C5233E0)
#define FAJOKAOEELI_GET_TARGETVALUES_OFFSET UNITYSDK_OFFSET(0x1C5233D0)
#define FAJOKAOEELI_INJJGMIGFFD_OFFSET UNITYSDK_OFFSET(0x1C5237B0)
#define FAJOKAOEELI_JGHDBJLBEEG_1_OFFSET UNITYSDK_OFFSET(0x1C523530)
#define FAJOKAOEELI_JGHDBJLBEEG_OFFSET UNITYSDK_OFFSET(0x1C523490)
#define FAJOKAOEELI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1C5236C0)

inline static constexpr unsigned int FAJOKAOEELI_TypeDefinitionIndex = 41842;

	class FAJOKAOEELI : public ::JEBPFBNCALB
	{
	public:
		::FAJOKAOEELI_AJCIPGLGNJO* PCKNJEDAMIM; // 0x28
		::HEKHCLACHJE* _TargetValues_k__BackingField; // 0x30
		::System::Void _ctor(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + FAJOKAOEELI_CTOR_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_TargetValues()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJOKAOEELI_GET_TARGETVALUES_OFFSET))(this);
		}

		::HEKHCLACHJE* FPIDAOIDEDD()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJOKAOEELI_FPIDAOIDEDD_OFFSET))(this);
		}

		::System::Action* JGHDBJLBEEG(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAJOKAOEELI_JGHDBJLBEEG_OFFSET))(this, a1);
		}

		::System::Action* JGHDBJLBEEG_1(::FAJOKAOEELI_AJCIPGLGNJO* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::FAJOKAOEELI_AJCIPGLGNJO*))((::PBYTE)hIl2Cpp + FAJOKAOEELI_JGHDBJLBEEG_1_OFFSET))(this, a1);
		}

		::System::Void DNDAANGPDCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJOKAOEELI_DNDAANGPDCE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::FAJOKAOEELI_AJCIPGLGNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAJOKAOEELI_AJCIPGLGNJO*))((::PBYTE)hIl2Cpp + FAJOKAOEELI_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Boolean INJJGMIGFFD(::FAJOKAOEELI_AJCIPGLGNJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAJOKAOEELI_AJCIPGLGNJO*))((::PBYTE)hIl2Cpp + FAJOKAOEELI_INJJGMIGFFD_OFFSET))(this, a1);
		}

	};
