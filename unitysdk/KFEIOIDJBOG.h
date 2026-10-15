#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EFKJNDCNILF;
class JBIGEIHIFDN;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFEIOIDJBOG_CDBKIKFNGPE_OFFSET UNITYSDK_OFFSET(0xB397DB0)
#define KFEIOIDJBOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB397010)
#define KFEIOIDJBOG_GAMFBLPKKPO_1_OFFSET UNITYSDK_OFFSET(0xB397C40)
#define KFEIOIDJBOG_HHFJOKCDFLF_OFFSET UNITYSDK_OFFSET(0xB397560)
#define KFEIOIDJBOG_IEECFKNHCFP_OFFSET UNITYSDK_OFFSET(0xB3972F0)
#define KFEIOIDJBOG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB397090)
#define KFEIOIDJBOG_NHAOMOOHBAH_OFFSET UNITYSDK_OFFSET(0xB3975A0)
#define KFEIOIDJBOG_OKPHIHCJNAL_OFFSET UNITYSDK_OFFSET(0xB397AA0)
#define KFEIOIDJBOG_PHPEGAONMLP_OFFSET UNITYSDK_OFFSET(0xB397780)

inline static constexpr unsigned int KFEIOIDJBOG_TypeDefinitionIndex = 62090;

	class KFEIOIDJBOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EFKJNDCNILF*>* CMLJBFKJELP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EFKJNDCNILF*>* HHFJOKCDFLF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::EFKJNDCNILF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_HHFJOKCDFLF_OFFSET))(this);
		}

		::System::String* NHAOMOOHBAH(::RPG::GameCore::FloorCustomValueConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_NHAOMOOHBAH_OFFSET))(this, a1);
		}

		::System::Boolean PHPEGAONMLP(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::JBIGEIHIFDN* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::JBIGEIHIFDN*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_PHPEGAONMLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OKPHIHCJNAL(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_OKPHIHCJNAL_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Boolean, ::EFKJNDCNILF*> GAMFBLPKKPO_1(::System::String* a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::EFKJNDCNILF*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_GAMFBLPKKPO_1_OFFSET))(this, a1);
		}

		::System::Void CDBKIKFNGPE(::RPG::GameCore::FloorCustomValueSetSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueSetSource))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_CDBKIKFNGPE_OFFSET))(this, a1);
		}

		static ::EFKJNDCNILF* IEECFKNHCFP(::RPG::GameCore::FloorCustomValueConfig* a1)
		{
			return ((::EFKJNDCNILF*(*)(::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + KFEIOIDJBOG_IEECFKNHCFP_OFFSET))(a1);
		}

	};
