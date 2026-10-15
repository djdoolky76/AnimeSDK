#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class EKFMIDBJDIA;
class HAJPGJKPLFP;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }

#define DDLOKHOMAFG_ACPPOPBHAMC_OFFSET UNITYSDK_OFFSET(0xE4E7430)
#define DDLOKHOMAFG_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0xE4E7620)
#define DDLOKHOMAFG_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xE4E6640)
#define DDLOKHOMAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4E76C0)
#define DDLOKHOMAFG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E76B0)
#define DDLOKHOMAFG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xE4E65F0)
#define DDLOKHOMAFG_FDFAFIDPLNN_OFFSET UNITYSDK_OFFSET(0xE4E6D40)
#define DDLOKHOMAFG_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xE4E6BD0)
#define DDLOKHOMAFG_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xE4E6930)
#define DDLOKHOMAFG_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xE4E6CF0)
#define DDLOKHOMAFG_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xE4E7580)

inline static constexpr unsigned int DDLOKHOMAFG_TypeDefinitionIndex = 59712;

	class DDLOKHOMAFG : public ::LJKHPOHKIIF
	{
	public:
		::HAJPGJKPLFP* ANNALDMFGPL; // 0x20
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x28
		static ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Object*>>** StaticGet_CFDLDPJIGBJ()
		{
			return (::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Object*>>**)UnitySDK::FromName("", "DDLOKHOMAFG")->GetStaticField(0x5DA60);
		}

		static ::System::Int32* StaticGet_IEELKHJLLCA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DDLOKHOMAFG")->GetStaticField(0x14150);
		}

		// static const ::System::String* FBCGLJBCIDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLOKHOMAFG_CCTOR_OFFSET))();
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void FDFAFIDPLNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_FDFAFIDPLNN_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void AEJNMMILMBL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_AEJNMMILMBL_OFFSET))(this, a1);
		}

		static ::PFACHJFCILN_PreloadType ACPPOPBHAMC(::System::Single a1)
		{
			return ((::PFACHJFCILN_PreloadType(*)(::System::Single))((::PBYTE)hIl2Cpp + DDLOKHOMAFG_ACPPOPBHAMC_OFFSET))(a1);
		}

	};
