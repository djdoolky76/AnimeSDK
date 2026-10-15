#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKIOONKCIB.h"
#include "unitysdk/RPG/MVector3.h"
class FPBFICAFCDO;
class GHADLBDBHNA;
class HFMDPDNHMMB;
class ICDNEPOKHJL;
class MODIHPIFAPK;
class OFKKOGBKOFI;
class POGDDEGBOPJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMNNACMBAJC_ACIGOMHHJHP_OFFSET UNITYSDK_OFFSET(0x1C5F8AB0)
#define DMNNACMBAJC_CBHJPMLAGFM_OFFSET UNITYSDK_OFFSET(0x1C5F9180)
#define DMNNACMBAJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9330)
#define DMNNACMBAJC_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C5F94A0)
#define DMNNACMBAJC_EJNHBPLIAEC_OFFSET UNITYSDK_OFFSET(0x1C5F9100)
#define DMNNACMBAJC_EPILHNNKNHC_OFFSET UNITYSDK_OFFSET(0x1C5F7CD0)
#define DMNNACMBAJC_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C5F96A0)
#define DMNNACMBAJC_GBFOCPBCPDA_OFFSET UNITYSDK_OFFSET(0x1C5F9630)
#define DMNNACMBAJC_GLFEAJHFKBB_OFFSET UNITYSDK_OFFSET(0x1C5F8D70)
#define DMNNACMBAJC_GNICCPKIFDC_OFFSET UNITYSDK_OFFSET(0x1C5F8730)
#define DMNNACMBAJC_HDHGINJAGGI_OFFSET UNITYSDK_OFFSET(0x1C5F97E0)
#define DMNNACMBAJC_HIPJBDGFOOA_OFFSET UNITYSDK_OFFSET(0x1C5F79E0)
#define DMNNACMBAJC_IEGOPMGDJEE_OFFSET UNITYSDK_OFFSET(0x1C5F7440)
#define DMNNACMBAJC_IJBLJGIMHHH_OFFSET UNITYSDK_OFFSET(0x1C5F8160)
#define DMNNACMBAJC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5F95B0)
#define DMNNACMBAJC_OCOACGHIKDM_OFFSET UNITYSDK_OFFSET(0x1C5F9840)
#define DMNNACMBAJC_ODBHLKHMHFH_OFFSET UNITYSDK_OFFSET(0x1C5F8550)
#define DMNNACMBAJC_OKPGBMLBMJN_OFFSET UNITYSDK_OFFSET(0x1C5F88B0)
#define DMNNACMBAJC_PAFKJAHJMCE_OFFSET UNITYSDK_OFFSET(0x1C5F9890)

inline static constexpr unsigned int DMNNACMBAJC_TypeDefinitionIndex = 37185;

	class DMNNACMBAJC : public ::AEKIOONKCIB
	{
	public:
		::HFMDPDNHMMB* AGLCICJBFIG; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GMKHPIJFOAI; // 0xD8
		::MODIHPIFAPK* FKGGBEAELPE; // 0xE0
		::FPBFICAFCDO* BKIFMPHBIAK; // 0xE8
		::POGDDEGBOPJ* EIEOCLOHHIF; // 0xF0
		::System::Void _ctor(::POGDDEGBOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POGDDEGBOPJ*))((::PBYTE)hIl2Cpp + DMNNACMBAJC_CTOR_OFFSET))(this, a1);
		}

		::ICDNEPOKHJL* IEGOPMGDJEE()
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_IEGOPMGDJEE_OFFSET))(this);
		}

		::System::Int32 EPILHNNKNHC(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_EPILHNNKNHC_OFFSET))(this, a1);
		}

		::System::Int32 IJBLJGIMHHH(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_IJBLJGIMHHH_OFFSET))(this, a1);
		}

		::System::Void ODBHLKHMHFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_ODBHLKHMHFH_OFFSET))(this);
		}

		::ICDNEPOKHJL* GNICCPKIFDC(::System::UInt32 a1)
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_GNICCPKIFDC_OFFSET))(this, a1);
		}

		::ICDNEPOKHJL* OKPGBMLBMJN()
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_OKPGBMLBMJN_OFFSET))(this);
		}

		::ICDNEPOKHJL* ACIGOMHHJHP(::RPG::MVector3 a1)
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + DMNNACMBAJC_ACIGOMHHJHP_OFFSET))(this, a1);
		}

		::ICDNEPOKHJL* HIPJBDGFOOA(::System::UInt32 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::ICDNEPOKHJL*(*)(::PVOID, ::System::UInt32, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DMNNACMBAJC_HIPJBDGFOOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 GLFEAJHFKBB(::OFKKOGBKOFI* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::OFKKOGBKOFI*, ::System::Single))((::PBYTE)hIl2Cpp + DMNNACMBAJC_GLFEAJHFKBB_OFFSET))(a1, a2);
		}

		::System::Void EJNHBPLIAEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_EJNHBPLIAEC_OFFSET))(this);
		}

		::System::Void CBHJPMLAGFM(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_CBHJPMLAGFM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + DMNNACMBAJC_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMNNACMBAJC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GBFOCPBCPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_GBFOCPBCPDA_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void HDHGINJAGGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_HDHGINJAGGI_OFFSET))(this, a1);
		}

		::System::Void OCOACGHIKDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMNNACMBAJC_OCOACGHIKDM_OFFSET))(this, a1);
		}

		::System::String* PAFKJAHJMCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNNACMBAJC_PAFKJAHJMCE_OFFSET))(this);
		}

	};
