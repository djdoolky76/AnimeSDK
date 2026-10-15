#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class WaveFloating;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define GCHIHOOOADE_APMAIJGCNNL_OFFSET UNITYSDK_OFFSET(0x15965D30)
#define GCHIHOOOADE_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x15964C80)
#define GCHIHOOOADE_CTOR_OFFSET UNITYSDK_OFFSET(0x159660D0)
#define GCHIHOOOADE_ELIMAHFKAMP_OFFSET UNITYSDK_OFFSET(0x159659A0)
#define GCHIHOOOADE_FCOFMLLIJCB_OFFSET UNITYSDK_OFFSET(0x15964E30)
#define GCHIHOOOADE_FMPGJJCFIKB_OFFSET UNITYSDK_OFFSET(0x15965CD0)
#define GCHIHOOOADE_GFDKNIPGIDO_OFFSET UNITYSDK_OFFSET(0x15965EB0)
#define GCHIHOOOADE_GJHNNMEOEAM_OFFSET UNITYSDK_OFFSET(0x15965FD0)
#define GCHIHOOOADE_JHFFPLPKOBO_OFFSET UNITYSDK_OFFSET(0x15965090)
#define GCHIHOOOADE_KANBKKBGLFF_OFFSET UNITYSDK_OFFSET(0x15965790)
#define GCHIHOOOADE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15965040)
#define GCHIHOOOADE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15964A90)
#define GCHIHOOOADE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15964C40)
#define GCHIHOOOADE_MIICGLGNBNL_OFFSET UNITYSDK_OFFSET(0x15965B00)
#define GCHIHOOOADE_MNGOOLNMHGJ_OFFSET UNITYSDK_OFFSET(0x15964BB0)
#define GCHIHOOOADE_MPBEJOBDAME_OFFSET UNITYSDK_OFFSET(0x15964CD0)
#define GCHIHOOOADE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15964C00)
#define GCHIHOOOADE_TICK_OFFSET UNITYSDK_OFFSET(0x15964DD0)

inline static constexpr unsigned int GCHIHOOOADE_TypeDefinitionIndex = 47488;

	class GCHIHOOOADE : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* IGIKHHKHBKD; // 0x38
		::WaveFloating* DILGJEAEKGL; // 0x40
		static ::System::Int32* StaticGet_DCGFLBMJPCA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GCHIHOOOADE")->GetStaticField(0x13980);
		}

		static ::System::Int32* StaticGet_HMNBBKFJDNM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GCHIHOOOADE")->GetStaticField(0x13984);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCHIHOOOADE_TICK_OFFSET))(this, a1);
		}

		::System::Void FCOFMLLIJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_FCOFMLLIJCB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JHFFPLPKOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_JHFFPLPKOBO_OFFSET))(this);
		}

		::System::Void MNGOOLNMHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_MNGOOLNMHGJ_OFFSET))(this);
		}

		::System::Void FMPGJJCFIKB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCHIHOOOADE_FMPGJJCFIKB_OFFSET))(this, a1);
		}

		::System::Void MPBEJOBDAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_MPBEJOBDAME_OFFSET))(this);
		}

		::System::Void MIICGLGNBNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_MIICGLGNBNL_OFFSET))(this);
		}

		::System::Void APMAIJGCNNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_APMAIJGCNNL_OFFSET))(this);
		}

		::System::Void ELIMAHFKAMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_ELIMAHFKAMP_OFFSET))(this);
		}

		::System::Void KANBKKBGLFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_KANBKKBGLFF_OFFSET))(this);
		}

		::System::Void GFDKNIPGIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_GFDKNIPGIDO_OFFSET))(this);
		}

		::System::Void GJHNNMEOEAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHIHOOOADE_GJHNNMEOEAM_OFFSET))(this);
		}

	};
