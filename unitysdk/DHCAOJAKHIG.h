#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNFIJNAMOHD.h"
class NLBIEMILEDE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define DHCAOJAKHIG_AHINAEDMPGB_OFFSET UNITYSDK_OFFSET(0xEBC8E10)
#define DHCAOJAKHIG_AIOCPMGPCKH_OFFSET UNITYSDK_OFFSET(0xEBC9230)
#define DHCAOJAKHIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC94A0)
#define DHCAOJAKHIG_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0xEBC8530)
#define DHCAOJAKHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC81C0)
#define DHCAOJAKHIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBC7CB0)
#define DHCAOJAKHIG_EJDGNDMMCBH_OFFSET UNITYSDK_OFFSET(0xEBC7EE0)
#define DHCAOJAKHIG_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0xEBC8420)
#define DHCAOJAKHIG_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0xEBC8620)
#define DHCAOJAKHIG_GNPBDFPINPD_OFFSET UNITYSDK_OFFSET(0xEBC9450)
#define DHCAOJAKHIG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEBC85C0)
#define DHCAOJAKHIG_LEHHMJJLLEP_OFFSET UNITYSDK_OFFSET(0xEBC9460)

inline static constexpr unsigned int DHCAOJAKHIG_TypeDefinitionIndex = 49539;

	class DHCAOJAKHIG : public ::GNFIJNAMOHD
	{
	public:
		::UnityEngine::RenderTexture* JKCHLIEKONC; // 0x48
		::UnityEngine::RenderTexture* DNPODDIMCKI; // 0x50
		::UnityEngine::ComputeBuffer* CABMJPOHOMO; // 0x58
		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123B0);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123B4);
		}

		static ::System::Int32* StaticGet_LPNCGDIOJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123B8);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123BC);
		}

		static ::System::Int32* StaticGet_IINFJDLEBOB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123C0);
		}

		static ::System::Int32* StaticGet_EOPJJANHHFL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123C4);
		}

		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123C8);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123CC);
		}

		static ::System::Int32* StaticGet_IJMMJOLADLN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x123D0);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHCAOJAKHIG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_DISPOSE_OFFSET))(this);
		}

		::System::Void EJDGNDMMCBH(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Single a3, ::UnityEngine::Gradient* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Single, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_EJDGNDMMCBH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EJEDDIPFCGL(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_EJEDDIPFCGL_OFFSET))(this, a1);
		}

		::System::Void CEBLFCPPEEB(::NLBIEMILEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLBIEMILEDE*))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_CEBLFCPPEEB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ENNNFBDFAAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_ENNNFBDFAAJ_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* AIOCPMGPCKH(::System::Boolean a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_AIOCPMGPCKH_OFFSET))(this, a1);
		}

		::System::Void AHINAEDMPGB(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_AHINAEDMPGB_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* GNPBDFPINPD()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_GNPBDFPINPD_OFFSET))(this);
		}

		::UnityEngine::Texture* LEHHMJJLLEP()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCAOJAKHIG_LEHHMJJLLEP_OFFSET))(this);
		}

	};
