#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLOBFPLDEBC_ALLGGMNBKLE_OFFSET UNITYSDK_OFFSET(0x1868A760)
#define DLOBFPLDEBC_BNKEFJGIIHK_OFFSET UNITYSDK_OFFSET(0x18689410)
#define DLOBFPLDEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1868AA50)
#define DLOBFPLDEBC_DIAFNAONIMA_OFFSET UNITYSDK_OFFSET(0x186893B0)
#define DLOBFPLDEBC_FFALJOJANIF_1_OFFSET UNITYSDK_OFFSET(0x1868A6D0)
#define DLOBFPLDEBC_FFALJOJANIF_OFFSET UNITYSDK_OFFSET(0x1868A370)
#define DLOBFPLDEBC_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0x186890D0)
#define DLOBFPLDEBC_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x18689200)
#define DLOBFPLDEBC_NNJNDKBKGKG_OFFSET UNITYSDK_OFFSET(0x186891F0)

inline static constexpr unsigned int DLOBFPLDEBC_TypeDefinitionIndex = 49538;

	class DLOBFPLDEBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* GFAOOMGHJDN; // 0x10
		::System::Action_1<::System::String*>* GICMMIMFLIM; // 0x18
		::System::String* DOEIHCMGBDL; // 0x20
		::RPG::Client::IAssetOperation* BBOFBHCDHBO; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* GBEECFJEDCO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_CTOR_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_JDKCDJNJAOL_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* NNJNDKBKGKG()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_NNJNDKBKGKG_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void DIAFNAONIMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_DIAFNAONIMA_OFFSET))(this);
		}

		::System::Void BNKEFJGIIHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_BNKEFJGIIHK_OFFSET))(this);
		}

		::System::Void FFALJOJANIF(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_FFALJOJANIF_OFFSET))(this, a1, a2);
		}

		::System::Void FFALJOJANIF_1(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_FFALJOJANIF_1_OFFSET))(this, a1);
		}

		static ::System::Boolean ALLGGMNBKLE(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + DLOBFPLDEBC_ALLGGMNBKLE_OFFSET))(a1);
		}

	};
