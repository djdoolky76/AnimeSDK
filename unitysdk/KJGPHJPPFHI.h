#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDLHODCINBI_LBFGOFIIOKP.h"
#include "unitysdk/KFAIFLHPEIE_KMJEAJDPHNP.h"
#include "unitysdk/System/Object.h"
class HCPNKGMBBIP;
class JFKAOMCJIKK;
class KJGPHJPPFHI_AIJIGENMPPH;
class KJGPHJPPFHI_GBGJFKCLONN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJGPHJPPFHI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB44AD20)
#define KJGPHJPPFHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB44AC40)
#define KJGPHJPPFHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB44A020)
#define KJGPHJPPFHI_IKAHNBNDHDL_1_OFFSET UNITYSDK_OFFSET(0xB44A9F0)
#define KJGPHJPPFHI_IKAHNBNDHDL_OFFSET UNITYSDK_OFFSET(0xB44A430)
#define KJGPHJPPFHI_LNEMCMANEJE_1_OFFSET UNITYSDK_OFFSET(0xB44A270)
#define KJGPHJPPFHI_LNEMCMANEJE_OFFSET UNITYSDK_OFFSET(0xB44A0B0)

inline static constexpr unsigned int KJGPHJPPFHI_TypeDefinitionIndex = 64017;

	class KJGPHJPPFHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* GEELMEHMANA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* AAOEPOECOAN; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_DAAHPAOPPBD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("", "KJGPHJPPFHI")->GetStaticField(0x57FB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_BKOMBJIONNM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("", "KJGPHJPPFHI")->GetStaticField(0x57FB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJGPHJPPFHI_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_DISPOSE_OFFSET))(this);
		}

		::System::Void LNEMCMANEJE(::DDLHODCINBI_LBFGOFIIOKP a1, ::KJGPHJPPFHI_GBGJFKCLONN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DDLHODCINBI_LBFGOFIIOKP, ::KJGPHJPPFHI_GBGJFKCLONN*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_LNEMCMANEJE_OFFSET))(this, a1, a2);
		}

		::System::Void LNEMCMANEJE_1(::KFAIFLHPEIE_KMJEAJDPHNP a1, ::KJGPHJPPFHI_AIJIGENMPPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFAIFLHPEIE_KMJEAJDPHNP, ::KJGPHJPPFHI_AIJIGENMPPH*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_LNEMCMANEJE_1_OFFSET))(this, a1, a2);
		}

		::System::Void IKAHNBNDHDL(::HCPNKGMBBIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCPNKGMBBIP*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_IKAHNBNDHDL_OFFSET))(this, a1);
		}

		::System::Void IKAHNBNDHDL_1(::JFKAOMCJIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKAOMCJIKK*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_IKAHNBNDHDL_1_OFFSET))(this, a1);
		}

	};
