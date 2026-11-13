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

#define NLPLDFJCMFK_AHINAEDMPGB_OFFSET UNITYSDK_OFFSET(0x1A43A9E0)
#define NLPLDFJCMFK_AIOCPMGPCKH_OFFSET UNITYSDK_OFFSET(0x1A439A20)
#define NLPLDFJCMFK_AMAFGMNJINK_OFFSET UNITYSDK_OFFSET(0x1A439590)
#define NLPLDFJCMFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A43AE30)
#define NLPLDFJCMFK_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0x1A439E80)
#define NLPLDFJCMFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A439380)
#define NLPLDFJCMFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A439050)
#define NLPLDFJCMFK_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0x1A439C60)
#define NLPLDFJCMFK_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0x1A43A1D0)
#define NLPLDFJCMFK_GNPBDFPINPD_OFFSET UNITYSDK_OFFSET(0x1A439360)
#define NLPLDFJCMFK_HAHJDFFNOCK_OFFSET UNITYSDK_OFFSET(0x1A439370)
#define NLPLDFJCMFK_JBFOIJAOOAL_OFFSET UNITYSDK_OFFSET(0x1A439350)
#define NLPLDFJCMFK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A43A170)
#define NLPLDFJCMFK_KEFJFBPBGOI_OFFSET UNITYSDK_OFFSET(0x1A43A050)
#define NLPLDFJCMFK_OKHEEBIJIAO_OFFSET UNITYSDK_OFFSET(0x1A4398E0)

inline static constexpr unsigned int NLPLDFJCMFK_TypeDefinitionIndex = 50619;

	class NLPLDFJCMFK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IMJGMHKGPAO; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* INOMPFPICDN; // 0x18
		::UnityEngine::RenderTexture* JKCHLIEKONC; // 0x20
		::UnityEngine::RenderTexture* DNPODDIMCKI; // 0x28
		::UnityEngine::Texture2D* LLJFHHEPLMN; // 0x30
		::UnityEngine::ComputeBuffer* CABMJPOHOMO; // 0x38
		::System::Collections::Generic::List_1<::NLBIEMILEDE*>* AACGHIOOEIG; // 0x40
		::System::Single JAIKLBFJBMH; // 0x48
		::System::Boolean CIDINDMHIFH; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 PPAIJHOMHEN; // 0x50
		::System::Int32 GDKGHKNILPN; // 0x54
		::System::Int32 ILKEFKBLLDH; // 0x58
		static ::Il2CppArray<::UnityEngine::Color32>** StaticGet_MLCPDAHLIJJ()
		{
			return (::Il2CppArray<::UnityEngine::Color32>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x546D0);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_APDHIPDCDEE()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x546D8);
		}

		static ::System::Int32* StaticGet_IINFJDLEBOB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12160);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12164);
		}

		static ::System::Int32* StaticGet_LPNCGDIOJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12168);
		}

		static ::System::Int32* StaticGet_PECNJHCDLCG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x1216C);
		}

		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12170);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12174);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12178);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x1217C);
		}

		static ::System::Int32* StaticGet_DDHOFCOEBGO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NLPLDFJCMFK")->GetStaticField(0x12180);
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
