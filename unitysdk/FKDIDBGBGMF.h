#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGLFOJKOKBH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FKDIDBGBGMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA92660)
#define FKDIDBGBGMF_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3E66180)
#define FKDIDBGBGMF_CPPCCOBLLPP_OFFSET UNITYSDK_OFFSET(0x3E65DF0)
#define FKDIDBGBGMF_CTOR_OFFSET UNITYSDK_OFFSET(0x3E65E50)
#define FKDIDBGBGMF_DBFNBBFDEKJ_OFFSET UNITYSDK_OFFSET(0x3E65E80)
#define FKDIDBGBGMF_DIPICADLJDF_OFFSET UNITYSDK_OFFSET(0x3E65CB0)
#define FKDIDBGBGMF_DKKFICGKENI_OFFSET UNITYSDK_OFFSET(0x3E66070)
#define FKDIDBGBGMF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1AA92600)
#define FKDIDBGBGMF_EMFOFFLMGAN_OFFSET UNITYSDK_OFFSET(0x3E65D30)
#define FKDIDBGBGMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E66220)
#define FKDIDBGBGMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E66210)
#define FKDIDBGBGMF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1AA92500)
#define FKDIDBGBGMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E66280)
#define FKDIDBGBGMF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x3E65CE0)
#define FKDIDBGBGMF_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3E65EA0)
#define FKDIDBGBGMF_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x3E65D10)
#define FKDIDBGBGMF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3E66130)
#define FKDIDBGBGMF_KPPCFNJMHIC_OFFSET UNITYSDK_OFFSET(0x3E65C90)
#define FKDIDBGBGMF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3E65C70)
#define FKDIDBGBGMF_MBDPGKHECNN_OFFSET UNITYSDK_OFFSET(0x3E65FB0)
#define FKDIDBGBGMF_NHICFOJGFAL_OFFSET UNITYSDK_OFFSET(0x3E65F80)
#define FKDIDBGBGMF_PPAMJNOKPLO_OFFSET UNITYSDK_OFFSET(0x3E65D50)

inline static constexpr unsigned int FKDIDBGBGMF_TypeDefinitionIndex = 49949;

	struct alignas(8) FKDIDBGBGMF
	{
		::NGLFOJKOKBH* GIIHDDOGFIP; // 0x10
		::PVOID LLEIPMIIHHA; // 0x18
		static ::FKDIDBGBGMF* StaticGet_EAPAHCPIEGE()
		{
			return (::FKDIDBGBGMF*)UnitySDK::FromName("", "FKDIDBGBGMF")->GetStaticField(0xF9E0);
		}

		static ::System::Collections::Generic::Queue_1<::FKDIDBGBGMF>** StaticGet_MPEHLDOFNOC()
		{
			return (::System::Collections::Generic::Queue_1<::FKDIDBGBGMF>**)UnitySDK::FromName("", "FKDIDBGBGMF")->GetStaticField(0xF9F0);
		}

		::System::Void _ctor(::NGLFOJKOKBH* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*, ::System::Int32))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKDIDBGBGMF_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean KPPCFNJMHIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_KPPCFNJMHIC_OFFSET))(this);
		}

		::UnityEngine::Vector3 DIPICADLJDF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_DIPICADLJDF_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Single IKOCHGBIGPJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_IKOCHGBIGPJ_OFFSET))(this);
		}

		::System::UInt32 EMFOFFLMGAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_EMFOFFLMGAN_OFFSET))(this);
		}

		/*
		::FKDIDBGBGMF PPAMJNOKPLO()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_PPAMJNOKPLO_OFFSET))(this);
		}
		*/

		::System::Int32 CPPCCOBLLPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_CPPCCOBLLPP_OFFSET))(this);
		}

		/*
		::FKDIDBGBGMF DBFNBBFDEKJ(::System::Int32 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_DBFNBBFDEKJ_OFFSET))(this, a1);
		}
		*/

		::System::Boolean IJGGBHGAGHL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_IJGGBHGAGHL_OFFSET))(this, a1);
		}

		::System::Boolean NHICFOJGFAL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_NHICFOJGFAL_OFFSET))(this, a1);
		}

		/*
		::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>* MBDPGKHECNN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_MBDPGKHECNN_OFFSET))(this);
		}
		*/

		/*
		::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>* DKKFICGKENI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_DKKFICGKENI_OFFSET))(this);
		}
		*/

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_KHGIKBFDLFB_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::FKDIDBGBGMF a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::FKDIDBGBGMF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Boolean(*)(::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Boolean(*)(::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + FKDIDBGBGMF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
