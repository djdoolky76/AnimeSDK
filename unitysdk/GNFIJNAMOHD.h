#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
class NLBIEMILEDE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define GNFIJNAMOHD_AMAFGMNJINK_OFFSET UNITYSDK_OFFSET(0x15B01560)
#define GNFIJNAMOHD_BCLJLEOMHNL_OFFSET UNITYSDK_OFFSET(0x15B01BA0)
#define GNFIJNAMOHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B02100)
#define GNFIJNAMOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B012C0)
#define GNFIJNAMOHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B01740)
#define GNFIJNAMOHD_GGIBFEDMMIN_OFFSET UNITYSDK_OFFSET(0x15B01980)
#define GNFIJNAMOHD_GMLAFCKCLAD_OFFSET UNITYSDK_OFFSET(0x15B01C90)
#define GNFIJNAMOHD_HAHJDFFNOCK_OFFSET UNITYSDK_OFFSET(0x15B01B80)
#define GNFIJNAMOHD_IHIDKEOCOOB_OFFSET UNITYSDK_OFFSET(0x15B01E70)
#define GNFIJNAMOHD_JBEHEMPJHPK_OFFSET UNITYSDK_OFFSET(0x15B02070)
#define GNFIJNAMOHD_JBFOIJAOOAL_OFFSET UNITYSDK_OFFSET(0x15B01B70)
#define GNFIJNAMOHD_KEFJFBPBGOI_OFFSET UNITYSDK_OFFSET(0x15B01BB0)
#define GNFIJNAMOHD_MBGGEKKOKCL_OFFSET UNITYSDK_OFFSET(0x15B01B90)
#define GNFIJNAMOHD_OKHEEBIJIAO_OFFSET UNITYSDK_OFFSET(0x15B01420)

inline static constexpr unsigned int GNFIJNAMOHD_TypeDefinitionIndex = 49542;

	class GNFIJNAMOHD : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* LLJFHHEPLMN; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* IMJGMHKGPAO; // 0x18
		::System::Collections::Generic::List_1<::NLBIEMILEDE*>* AACGHIOOEIG; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* INOMPFPICDN; // 0x28
		::System::Int32 ILKEFKBLLDH; // 0x30
		::System::Int32 AEHDMPLHCPH; // 0x34
		::System::Boolean CIDINDMHIFH; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single JAIKLBFJBMH; // 0x3C
		::System::Int32 PPAIJHOMHEN; // 0x40
		static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_MLCPDAHLIJJ()
		{
			return (::Il2CppArray<::UnityEngine::Color32>**)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0xBAD0);
		}

		static ::System::Int32* StaticGet_EOLHDLLHEGO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28B0);
		}

		static ::System::Int32* StaticGet_DDHOFCOEBGO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28B4);
		}

		static ::System::Int32* StaticGet_OFGLFIJPPNH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28B8);
		}

		static ::System::Int32* StaticGet_GLHLKHCOOBF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28BC);
		}

		static ::System::Int32* StaticGet_IPECFEHFCLB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28C0);
		}

		static ::System::Int32* StaticGet_BAGFJOFEJEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNFIJNAMOHD")->GetStaticField(0x28C4);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFIJNAMOHD_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_DISPOSE_OFFSET))(this);
		}

		::System::Void GGIBFEDMMIN(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_GGIBFEDMMIN_OFFSET))(this, a1);
		}

		::UnityEngine::Texture2D* JBFOIJAOOAL()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_JBFOIJAOOAL_OFFSET))(this);
		}

		::System::Single HAHJDFFNOCK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_HAHJDFFNOCK_OFFSET))(this);
		}

		::System::Int32 MBGGEKKOKCL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_MBGGEKKOKCL_OFFSET))(this);
		}

		::System::Int32 BCLJLEOMHNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_BCLJLEOMHNL_OFFSET))(this);
		}

		::System::Void OKHEEBIJIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_OKHEEBIJIAO_OFFSET))(this);
		}

		::System::Void AMAFGMNJINK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_AMAFGMNJINK_OFFSET))(this);
		}

		::System::Void KEFJFBPBGOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_KEFJFBPBGOI_OFFSET))(this, a1);
		}

		::System::Int32 GMLAFCKCLAD(::NLBIEMILEDE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_GMLAFCKCLAD_OFFSET))(this, a1);
		}

		::System::Int32 IHIDKEOCOOB(::NLBIEMILEDE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_IHIDKEOCOOB_OFFSET))(this, a1);
		}

		::NLBIEMILEDE* JBEHEMPJHPK(::System::Int32 a1)
		{
			return ((::NLBIEMILEDE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNFIJNAMOHD_JBEHEMPJHPK_OFFSET))(this, a1);
		}

	};
