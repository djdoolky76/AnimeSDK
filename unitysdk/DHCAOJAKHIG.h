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

#define DHCAOJAKHIG_AHINAEDMPGB_OFFSET UNITYSDK_OFFSET(0xEBC2AB0)
#define DHCAOJAKHIG_AIOCPMGPCKH_OFFSET UNITYSDK_OFFSET(0xEBC2EF0)
#define DHCAOJAKHIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC3160)
#define DHCAOJAKHIG_CEBLFCPPEEB_OFFSET UNITYSDK_OFFSET(0xEBC21D0)
#define DHCAOJAKHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC1E60)
#define DHCAOJAKHIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBC1940)
#define DHCAOJAKHIG_EJDGNDMMCBH_OFFSET UNITYSDK_OFFSET(0xEBC1B70)
#define DHCAOJAKHIG_EJEDDIPFCGL_OFFSET UNITYSDK_OFFSET(0xEBC20C0)
#define DHCAOJAKHIG_ENNNFBDFAAJ_OFFSET UNITYSDK_OFFSET(0xEBC22C0)
#define DHCAOJAKHIG_GNPBDFPINPD_OFFSET UNITYSDK_OFFSET(0xEBC3110)
#define DHCAOJAKHIG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEBC2260)
#define DHCAOJAKHIG_LEHHMJJLLEP_OFFSET UNITYSDK_OFFSET(0xEBC3120)

inline static constexpr unsigned int DHCAOJAKHIG_TypeDefinitionIndex = 49539;

	class DHCAOJAKHIG : public ::GNFIJNAMOHD
	{
	public:
		::UnityEngine::RenderTexture* JKCHLIEKONC; // 0x48
		::UnityEngine::RenderTexture* DNPODDIMCKI; // 0x50
		::UnityEngine::ComputeBuffer* CABMJPOHOMO; // 0x58
		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11360);
		}

		static ::System::Int32* StaticGet_IINFJDLEBOB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11364);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11368);
		}

		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x1136C);
		}

		static ::System::Int32* StaticGet_EOPJJANHHFL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11370);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11374);
		}

		static ::System::Int32* StaticGet_IJMMJOLADLN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11378);
		}

		static ::System::Int32* StaticGet_LPNCGDIOJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x1137C);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHCAOJAKHIG")->GetStaticField(0x11380);
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
