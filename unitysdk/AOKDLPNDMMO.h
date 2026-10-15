#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMGBGGMLFED.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/KHLDHMFKOCP.h"
#include "unitysdk/RPG/MVector2.h"
class GFHCKBHCNDF;
class IFFJIHFGOBO;
class KHLDHMFKOCP;
class NBIBOKEFKIH;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKDLPNDMMO_BMNGDNNOMGK_OFFSET UNITYSDK_OFFSET(0x1C89F0F0)
#define AOKDLPNDMMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A1780)
#define AOKDLPNDMMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E780)
#define AOKDLPNDMMO_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x1C89E970)
#define AOKDLPNDMMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C89E8F0)
#define AOKDLPNDMMO_EIPCLLEDCCC_OFFSET UNITYSDK_OFFSET(0x1C89F380)
#define AOKDLPNDMMO_GODIGKFPPDN_OFFSET UNITYSDK_OFFSET(0x1C89EDB0)
#define AOKDLPNDMMO_HBCPAEFKFKL_OFFSET UNITYSDK_OFFSET(0x1C89ED60)
#define AOKDLPNDMMO_JENAHNOOGLC_OFFSET UNITYSDK_OFFSET(0x1C89F880)
#define AOKDLPNDMMO_NHMHJEEKCEL_OFFSET UNITYSDK_OFFSET(0x1C8A16D0)

inline static constexpr unsigned int AOKDLPNDMMO_TypeDefinitionIndex = 43077;

	class AOKDLPNDMMO : public ::KHLDHMFKOCP
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* ELBNJLHBEJD; // 0x200
		::KHLDHMFKOCP* BHHAMGJHDON; // 0x208
		::System::Collections::Generic::List_1<::EMGBGGMLFED>* NFCHLOABNAB; // 0x210
		::EMGBGGMLFED JCHFCNFHCMM; // 0x218
		::System::Int32 EOLMJBEMDBH; // 0x234
		static ::System::Int32* StaticGet_PCFIPGBCAKB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AOKDLPNDMMO")->GetStaticField(0x6A80);
		}

		::System::Void _ctor(::KHLDHMFKOCP* a1, ::FJPMJPEKLJL a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOKDLPNDMMO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_DISPOSE_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ(::GFHCKBHCNDF* a1, ::IFFJIHFGOBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::IFFJIHFGOBO*))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_DALKINCKLJJ_OFFSET))(this, a1, a2);
		}

		::System::Void HBCPAEFKFKL(::NBIBOKEFKIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBOKEFKIH*))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_HBCPAEFKFKL_OFFSET))(this, a1);
		}

		::System::Void GODIGKFPPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_GODIGKFPPDN_OFFSET))(this);
		}

		::System::Void BMNGDNNOMGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_BMNGDNNOMGK_OFFSET))(this);
		}

		::System::Void EIPCLLEDCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_EIPCLLEDCCC_OFFSET))(this);
		}

		::System::Void JENAHNOOGLC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::GameCore::MarbleLaunchAIConfig* a6, ::EMGBGGMLFED a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::UInt32, ::System::Single, ::RPG::GameCore::MarbleLaunchAIConfig*, ::EMGBGGMLFED))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_JENAHNOOGLC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* NHMHJEEKCEL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOKDLPNDMMO_NHMHJEEKCEL_OFFSET))(this, a1, a2, a3);
		}

	};
