#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
class EKFMIDBJDIA;
class HAJPGJKPLFP;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }

#define DDLOKHOMAFG_ACPPOPBHAMC_OFFSET UNITYSDK_OFFSET(0xE4E7EA0)
#define DDLOKHOMAFG_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0xE4E8090)
#define DDLOKHOMAFG_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xE4E7090)
#define DDLOKHOMAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4E8130)
#define DDLOKHOMAFG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E8120)
#define DDLOKHOMAFG_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xE4E7040)
#define DDLOKHOMAFG_FDFAFIDPLNN_OFFSET UNITYSDK_OFFSET(0xE4E77B0)
#define DDLOKHOMAFG_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xE4E7630)
#define DDLOKHOMAFG_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xE4E7390)
#define DDLOKHOMAFG_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xE4E7760)
#define DDLOKHOMAFG_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0xE4E7FF0)

	class DDLOKHOMAFG : public ::LJKHPOHKIIF
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::HAJPGJKPLFP* ANNALDMFGPL; // 0x28
		static ::Il2CppArray<::System::Collections::Generic::KeyValuePair*>** StaticGet_CFDLDPJIGBJ()
		{
			return (::Il2CppArray<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "DDLOKHOMAFG")->GetStaticField(0x60B80);
		}

		static ::System::Int32* StaticGet_IEELKHJLLCA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DDLOKHOMAFG")->GetStaticField(0x14AA0);
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
