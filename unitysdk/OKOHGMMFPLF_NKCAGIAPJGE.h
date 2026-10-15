#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OKOHGMMFPLF_NKCAGIAPJGE_APKDHFJMGFF_OFFSET UNITYSDK_OFFSET(0xBEF9EE0)
#define OKOHGMMFPLF_NKCAGIAPJGE_BBKOLHDGACP_OFFSET UNITYSDK_OFFSET(0xBEF9F30)
#define OKOHGMMFPLF_NKCAGIAPJGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF9F80)
#define OKOHGMMFPLF_NKCAGIAPJGE_JDLENDNKCED_OFFSET UNITYSDK_OFFSET(0xBEF9E90)

inline static constexpr unsigned int OKOHGMMFPLF_NKCAGIAPJGE_TypeDefinitionIndex = 71027;

	class OKOHGMMFPLF_NKCAGIAPJGE : public ::System::Object
	{
	public:
		::System::Int32 BDMGPJFFJFF; // 0x10
		::System::Int32 CEMKDPIPBMD; // 0x14
		::System::Int32 AOFHHLJAGPJ; // 0x18
		::System::Int32 FAPOEBBIPJF; // 0x1C
		::System::Int32 OJAKOGNDFKD; // 0x20
		::System::Int32 EKFBPEGGDPA; // 0x24
		::System::Int32 GLNPBDNMMAH; // 0x28
		::System::Int32 ADIGENHAOJM; // 0x2C
		::System::Int32 IBHFGANAIJJ; // 0x30
		::System::Int32 COADOJEAMPE; // 0x34
		::System::Int32 ECHJIBMLLIK; // 0x38
		::System::Int32 EMANFAMCJHH; // 0x3C
		::System::Boolean AHDKGPAHBNJ; // 0x40
		::System::Boolean EMFNJBOMIGH; // 0x41
		::System::Boolean DAOKFMGLHEO; // 0x42
		::System::Boolean OHDFMMHMOLE; // 0x43
		::System::Int32 DHGLJHPHHKO; // 0x44
		::System::Int32 FHNGCJHAIBN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOHGMMFPLF_NKCAGIAPJGE_CTOR_OFFSET))(this);
		}

		::System::String* JDLENDNKCED(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKOHGMMFPLF_NKCAGIAPJGE_JDLENDNKCED_OFFSET))(this, a1);
		}

		::System::Void APKDHFJMGFF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKOHGMMFPLF_NKCAGIAPJGE_APKDHFJMGFF_OFFSET))(this, a1);
		}

		::System::Void BBKOLHDGACP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKOHGMMFPLF_NKCAGIAPJGE_BBKOLHDGACP_OFFSET))(this, a1);
		}

	};
