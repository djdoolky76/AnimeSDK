#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class ICINHDDLEHO_IPIKDCHMHIA;
namespace System { class String; }

#define ICINHDDLEHO_AGIDHJNMIJD_OFFSET UNITYSDK_OFFSET(0x15E4EB90)
#define ICINHDDLEHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E4F020)
#define ICINHDDLEHO_DEMNMAABLIL_OFFSET UNITYSDK_OFFSET(0x15E4EFE0)
#define ICINHDDLEHO_OHNKKCFBLCD_OFFSET UNITYSDK_OFFSET(0x15E4EA50)
#define ICINHDDLEHO_PNCKJDMLONE_OFFSET UNITYSDK_OFFSET(0x15E4ED50)

inline static constexpr unsigned int ICINHDDLEHO_TypeDefinitionIndex = 69423;

	class ICINHDDLEHO : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet_JODKADCBPCD()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "ICINHDDLEHO")->GetStaticField(0x115C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICINHDDLEHO_CCTOR_OFFSET))();
		}

		static ::System::Void OHNKKCFBLCD(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::ICINHDDLEHO_IPIKDCHMHIA* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*, ::System::String*, ::ICINHDDLEHO_IPIKDCHMHIA*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_OHNKKCFBLCD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AGIDHJNMIJD(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::ICINHDDLEHO_IPIKDCHMHIA* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*, ::System::String*, ::ICINHDDLEHO_IPIKDCHMHIA*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_AGIDHJNMIJD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PNCKJDMLONE(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::ICINHDDLEHO_IPIKDCHMHIA* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::ICINHDDLEHO_IPIKDCHMHIA*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_PNCKJDMLONE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DEMNMAABLIL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_DEMNMAABLIL_OFFSET))(a1);
		}

	};
