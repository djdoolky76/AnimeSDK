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

#define NLPLDFJCMFK_AHINAEDMPGB_OFFSET UNITYSDK_OFFSET(0xC563220)
#define NLPLDFJCMFK_AIOCPMGPCKH_OFFSET UNITYSDK_OFFSET(0xC562260)
#define NLPLDFJCMFK_AMAFGMNJINK_OFFSET UNITYSDK_OFFSET(0xC561DD0)
#define NLPLDFJCMFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC563670)
#define NLPLDFJCMFK_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0xC5626C0)
#define NLPLDFJCMFK_CTOR_OFFSET UNITYSDK_OFFSET(0xC561BC0)
#define NLPLDFJCMFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC561890)
#define NLPLDFJCMFK_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0xC5624A0)
#define NLPLDFJCMFK_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0xC562A10)
#define NLPLDFJCMFK_GNPBDFPINPD_OFFSET UNITYSDK_OFFSET(0xC561BA0)
#define NLPLDFJCMFK_HAHJDFFNOCK_OFFSET UNITYSDK_OFFSET(0xC561BB0)
#define NLPLDFJCMFK_JBFOIJAOOAL_OFFSET UNITYSDK_OFFSET(0xC561B90)
#define NLPLDFJCMFK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC5629B0)
#define NLPLDFJCMFK_KEFJFBPBGOI_OFFSET UNITYSDK_OFFSET(0xC562890)
#define NLPLDFJCMFK_OKHEEBIJIAO_OFFSET UNITYSDK_OFFSET(0xC562120)

inline static constexpr unsigned int NLPLDFJCMFK_TypeDefinitionIndex = 50619;

	class NLPLDFJCMFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NLBIEMILEDE*>* AACGHIOOEIG; // 0x10
		::UnityEngine::Texture2D* LLJFHHEPLMN; // 0x18
		::UnityEngine::RenderTexture* JKCHLIEKONC; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* INOMPFPICDN; // 0x28
		::UnityEngine::ComputeBuffer* CABMJPOHOMO; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* IMJGMHKGPAO; // 0x38
		::UnityEngine::RenderTexture* DNPODDIMCKI; // 0x40
		::System::Int32 GDKGHKNILPN; // 0x48
		::System::Int32 ILKEFKBLLDH; // 0x4C
		::System::Boolean CIDINDMHIFH; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single JAIKLBFJBMH; // 0x54
		::System::Int32 PPAIJHOMHEN; // 0x58
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_APDHIPDCDEE()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x4B390);
		}

		static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_MLCPDAHLIJJ()
		{
			return (::Il2CppArray<::UnityEngine::Color32>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x4B398);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4D0);
		}

		static ::System::Int32* StaticGet_DDHOFCOEBGO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4D4);
		}

		static ::System::Int32* StaticGet_LPNCGDIOJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4D8);
		}

		static ::System::Int32* StaticGet_IINFJDLEBOB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4DC);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4E0);
		}

		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4E4);
		}

		static ::System::Int32* StaticGet_PECNJHCDLCG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4E8);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4EC);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0xF4F0);
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
