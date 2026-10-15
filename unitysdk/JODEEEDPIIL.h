#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEABBJBIGK;
class JODEEEDPIIL;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JODEEEDPIIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB29FAE0)
#define JODEEEDPIIL_CIJBDHCALKF_OFFSET UNITYSDK_OFFSET(0xB29FE10)
#define JODEEEDPIIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB29FBD0)
#define JODEEEDPIIL_EDDBCKGHBBH_OFFSET UNITYSDK_OFFSET(0xB29FC50)
#define JODEEEDPIIL_FIKODHDDHMO_OFFSET UNITYSDK_OFFSET(0xB2A00E0)
#define JODEEEDPIIL_HEHBPEOPPJC_OFFSET UNITYSDK_OFFSET(0xB29FA00)
#define JODEEEDPIIL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB29FCF0)
#define JODEEEDPIIL_LGHFFELLODH_OFFSET UNITYSDK_OFFSET(0xB29FA90)
#define JODEEEDPIIL_OLKAHGPNFDD_OFFSET UNITYSDK_OFFSET(0xB29FD40)
#define JODEEEDPIIL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB29FF10)

inline static constexpr unsigned int JODEEEDPIIL_TypeDefinitionIndex = 65850;

	class JODEEEDPIIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::IFEABBJBIGK*>* ICKOFKCFGKI; // 0x10
		::IFEABBJBIGK* MLAEBDBIGLD; // 0x18
		::System::Boolean MAIJGCMCGLO; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single PBFPDOIJJAD; // 0x24
		// static const ::System::Object DPJGMPLMNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_CTOR_OFFSET))(this);
		}

		::System::Boolean HEHBPEOPPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_HEHBPEOPPJC_OFFSET))(this);
		}

		::System::Int32 LGHFFELLODH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_LGHFFELLODH_OFFSET))(this);
		}

		static ::JODEEEDPIIL* BPLPBPMEODA()
		{
			return ((::JODEEEDPIIL*(*)())((::PBYTE)hIl2Cpp + JODEEEDPIIL_BPLPBPMEODA_OFFSET))();
		}

		::System::Void EDDBCKGHBBH(::IFEABBJBIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + JODEEEDPIIL_EDDBCKGHBBH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OLKAHGPNFDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_OLKAHGPNFDD_OFFSET))(this);
		}

		::System::Void FIKODHDDHMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JODEEEDPIIL_FIKODHDDHMO_OFFSET))(this, a1);
		}

		::System::Void CIJBDHCALKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODEEEDPIIL_CIJBDHCALKF_OFFSET))(this);
		}

	};
