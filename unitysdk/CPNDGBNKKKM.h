#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BundleUpdateProfileId.h"
#include "unitysdk/System/Object.h"
class MCMAHDJBBGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPNDGBNKKKM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCDD220)
#define CPNDGBNKKKM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDCB80)
#define CPNDGBNKKKM_GNCGLMBGBDH_OFFSET UNITYSDK_OFFSET(0xDCDCC50)
#define CPNDGBNKKKM_KGBGKEMKADL_OFFSET UNITYSDK_OFFSET(0xDCDD0D0)
#define CPNDGBNKKKM_NCKIFFDLFAE_OFFSET UNITYSDK_OFFSET(0xDCDCED0)
#define CPNDGBNKKKM_OGNGLOJNHGI_OFFSET UNITYSDK_OFFSET(0xDCDCB90)
#define CPNDGBNKKKM_OPDACCJMBGL_OFFSET UNITYSDK_OFFSET(0xDCDCF90)

inline static constexpr unsigned int CPNDGBNKKKM_TypeDefinitionIndex = 61237;

	class CPNDGBNKKKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MCMAHDJBBGN*>** StaticGet_LABLHLDFIGH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MCMAHDJBBGN*>**)UnitySDK::FromName("", "CPNDGBNKKKM")->GetStaticField(0x58050);
		}

		static ::System::Collections::Generic::List_1<::MCMAHDJBBGN*>** StaticGet_JJDMDOLNOJP()
		{
			return (::System::Collections::Generic::List_1<::MCMAHDJBBGN*>**)UnitySDK::FromName("", "CPNDGBNKKKM")->GetStaticField(0x58058);
		}

		static ::System::Boolean* StaticGet_LGNPEGOKKPO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPNDGBNKKKM")->GetStaticField(0x135B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDGBNKKKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNDGBNKKKM_CCTOR_OFFSET))();
		}

		static ::System::Void OGNGLOJNHGI(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CPNDGBNKKKM_OGNGLOJNHGI_OFFSET))(a1, a2);
		}

		static ::System::Void GNCGLMBGBDH(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CPNDGBNKKKM_GNCGLMBGBDH_OFFSET))(a1, a2);
		}

		static ::System::Void NCKIFFDLFAE(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CPNDGBNKKKM_NCKIFFDLFAE_OFFSET))(a1, a2);
		}

		static ::System::Void OPDACCJMBGL(::RPG::Client::BundleUpdateProfileId a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::BundleUpdateProfileId, ::System::String*))((::PBYTE)hIl2Cpp + CPNDGBNKKKM_OPDACCJMBGL_OFFSET))(a1, a2);
		}

		static ::System::Void KGBGKEMKADL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNDGBNKKKM_KGBGKEMKADL_OFFSET))();
		}

	};
