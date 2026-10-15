#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
class DHCAOJAKHIG;
class GGJFAFONDHN;
class GNFIJNAMOHD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeBuffer; }

#define FAAADOEIMIB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1564DB30)
#define FAAADOEIMIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1564E4B0)
#define FAAADOEIMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1564E410)
#define FAAADOEIMIB_FCDOGEAHNFM_OFFSET UNITYSDK_OFFSET(0x1564E290)
#define FAAADOEIMIB_HBDDPBAJJJI_OFFSET UNITYSDK_OFFSET(0x1564E390)
#define FAAADOEIMIB_KHBMJJKJLGO_OFFSET UNITYSDK_OFFSET(0x1564DC40)
#define FAAADOEIMIB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1564D9B0)
#define FAAADOEIMIB_NDPNAEDIBOC_OFFSET UNITYSDK_OFFSET(0x1564D970)

inline static constexpr unsigned int FAAADOEIMIB_TypeDefinitionIndex = 49540;

	class FAAADOEIMIB : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector4>* OLMJIPHFFJG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector4>* LBGOPGBNMEO; // 0x18
		::DHCAOJAKHIG* PKKKBFMCDBG; // 0x20
		::UnityEngine::ComputeBuffer* OJMJMDKEAAI; // 0x28
		::System::Boolean GIPHDPLKAIM; // 0x30
		::System::Boolean BBJHDLLJBIL; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 BONGHKFGFLN; // 0x34
		::System::Int32 PPLKDEIGAGM; // 0x38
		static ::System::Int32* StaticGet_HPCGFLCLAPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12100);
		}

		static ::System::Int32* StaticGet_MBMENEBJBOI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12104);
		}

		static ::System::Int32* StaticGet_CEMHPKPOOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12108);
		}

		static ::System::Int32* StaticGet_CMOGMGOPHJA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x1210C);
		}

		static ::System::Int32* StaticGet_JCHFCNFHCMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12110);
		}

		static ::System::Int32* StaticGet_PJIFBJPFLEE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12114);
		}

		static ::System::Int32* StaticGet_FBAAJMMGCPK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAADOEIMIB")->GetStaticField(0x12118);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAADOEIMIB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAADOEIMIB_CCTOR_OFFSET))();
		}

		::GNFIJNAMOHD* NDPNAEDIBOC()
		{
			return ((::GNFIJNAMOHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAADOEIMIB_NDPNAEDIBOC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAADOEIMIB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAADOEIMIB_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KHBMJJKJLGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAADOEIMIB_KHBMJJKJLGO_OFFSET))(this);
		}

		::System::Void FCDOGEAHNFM(::System::Int32 a1, ::GGJFAFONDHN* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::GGJFAFONDHN*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FAAADOEIMIB_FCDOGEAHNFM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HBDDPBAJJJI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAAADOEIMIB_HBDDPBAJJJI_OFFSET))(this, a1);
		}

	};
