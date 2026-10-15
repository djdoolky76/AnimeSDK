#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetSystem/MarkerType.h"
#include "unitysdk/System/Object.h"
class NFCPIKFFCNA;
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define LEIJDCFGOLB_ADJOFICLCML_OFFSET UNITYSDK_OFFSET(0x1C4AC530)
#define LEIJDCFGOLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4AC600)
#define LEIJDCFGOLB_EHPGFKGLBBJ_OFFSET UNITYSDK_OFFSET(0x1C4AC460)
#define LEIJDCFGOLB_HAGHKCMHEIG_OFFSET UNITYSDK_OFFSET(0x1C4AC3A0)

inline static constexpr unsigned int LEIJDCFGOLB_TypeDefinitionIndex = 41592;

	class LEIJDCFGOLB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_HCFOAOMGJAE()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "LEIJDCFGOLB")->GetStaticField(0x13410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIJDCFGOLB_CCTOR_OFFSET))();
		}

		static ::System::Collections::IEnumerable* HAGHKCMHEIG(::RPG::Client::AssetSystem::MarkerType a1, ::NFCPIKFFCNA* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Collections::IEnumerable*(*)(::RPG::Client::AssetSystem::MarkerType, ::NFCPIKFFCNA*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LEIJDCFGOLB_HAGHKCMHEIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::IEnumerable* EHPGFKGLBBJ(::System::String* a1, ::NFCPIKFFCNA* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Collections::IEnumerable*(*)(::System::String*, ::NFCPIKFFCNA*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LEIJDCFGOLB_EHPGFKGLBBJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::IEnumerable* ADJOFICLCML(::RPG::Client::AssetSystem::AssetLoader* a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Collections::IEnumerable*(*)(::RPG::Client::AssetSystem::AssetLoader*, ::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LEIJDCFGOLB_ADJOFICLCML_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
