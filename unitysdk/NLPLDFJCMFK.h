#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
class NLBIEMILEDE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define NLPLDFJCMFK_AHINAEDMPGB_OFFSET UNITYSDK_OFFSET(0xBC74A30)
#define NLPLDFJCMFK_AIOCPMGPCKH_OFFSET UNITYSDK_OFFSET(0xBC73AB0)
#define NLPLDFJCMFK_AMAFGMNJINK_OFFSET UNITYSDK_OFFSET(0xBC735E0)
#define NLPLDFJCMFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC74E90)
#define NLPLDFJCMFK_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0xBC73EF0)
#define NLPLDFJCMFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC733D0)
#define NLPLDFJCMFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC73090)
#define NLPLDFJCMFK_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0xBC73CF0)
#define NLPLDFJCMFK_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0xBC741F0)
#define NLPLDFJCMFK_GNPBDFPINPD_OFFSET UNITYSDK_OFFSET(0xBC733B0)
#define NLPLDFJCMFK_HAHJDFFNOCK_OFFSET UNITYSDK_OFFSET(0xBC733C0)
#define NLPLDFJCMFK_JBFOIJAOOAL_OFFSET UNITYSDK_OFFSET(0xBC733A0)
#define NLPLDFJCMFK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC74190)
#define NLPLDFJCMFK_KEFJFBPBGOI_OFFSET UNITYSDK_OFFSET(0xBC74070)
#define NLPLDFJCMFK_OKHEEBIJIAO_OFFSET UNITYSDK_OFFSET(0xBC73970)

inline static constexpr unsigned int NLPLDFJCMFK_TypeDefinitionIndex = 49543;

	class NLPLDFJCMFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IMJGMHKGPAO; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* INOMPFPICDN; // 0x18
		::UnityEngine::RenderTexture* JKCHLIEKONC; // 0x20
		::UnityEngine::Texture2D* LLJFHHEPLMN; // 0x28
		::UnityEngine::RenderTexture* DNPODDIMCKI; // 0x30
		::UnityEngine::ComputeBuffer* CABMJPOHOMO; // 0x38
		::System::Collections::Generic::List_1<::NLBIEMILEDE*>* AACGHIOOEIG; // 0x40
		::System::Int32 ILKEFKBLLDH; // 0x48
		::System::Single JAIKLBFJBMH; // 0x4C
		::System::Int32 PPAIJHOMHEN; // 0x50
		::System::Int32 GDKGHKNILPN; // 0x54
		::System::Boolean CIDINDMHIFH; // 0x58
		static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_MLCPDAHLIJJ()
		{
			return (::Il2CppArray<::UnityEngine::Color32>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x47860);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_APDHIPDCDEE()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x47868);
		}

		static ::System::Int32* StaticGet_DDHOFCOEBGO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B60);
		}

		static ::System::Int32* StaticGet_LPNCGDIOJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B64);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B68);
		}

		static ::System::Int32* StaticGet_PECNJHCDLCG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B6C);
		}

		static ::System::Int32* StaticGet_IINFJDLEBOB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B70);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B74);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B78);
		}

		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B7C);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x10B80);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLPLDFJCMFK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* JBFOIJAOOAL()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_JBFOIJAOOAL_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* GNPBDFPINPD()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_GNPBDFPINPD_OFFSET))(this);
		}

		::System::Single HAHJDFFNOCK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_HAHJDFFNOCK_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* AIOCPMGPCKH()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_AIOCPMGPCKH_OFFSET))(this);
		}

		::System::Void AMAFGMNJINK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_AMAFGMNJINK_OFFSET))(this);
		}

		::System::Void OKHEEBIJIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_OKHEEBIJIAO_OFFSET))(this);
		}

		::System::Void EJEDDIPFCGL(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_EJEDDIPFCGL_OFFSET))(this, a1);
		}

		::System::Void CEBLFCPPEEB(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_CEBLFCPPEEB_OFFSET))(this, a1);
		}

		::System::Void KEFJFBPBGOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_KEFJFBPBGOI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ENNNFBDFAAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_ENNNFBDFAAJ_OFFSET))(this);
		}

		::System::Void AHINAEDMPGB(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NLPLDFJCMFK_AHINAEDMPGB_OFFSET))(this, a1);
		}

	};
