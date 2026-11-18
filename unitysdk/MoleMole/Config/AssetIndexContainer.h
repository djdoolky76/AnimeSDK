#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class AssetIndex; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_ACDFBNEDGJF_OFFSET UNITYSDK_OFFSET(0xFAB4CE0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_BEIEJEJODAC_OFFSET UNITYSDK_OFFSET(0xFAB2D40)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CAGNDHJIOGB_OFFSET UNITYSDK_OFFSET(0xFAB5030)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_DFFLIKFAENB_OFFSET UNITYSDK_OFFSET(0xFAB5B90)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xFAB5BE0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FHNLOBJNFBP_OFFSET UNITYSDK_OFFSET(0xFAB4D50)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FKGIIOAEBBN_OFFSET UNITYSDK_OFFSET(0xFAB2DE0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAB2A60)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAB27A0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFAB2AC0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_JNAOKLJJAAG_OFFSET UNITYSDK_OFFSET(0xFAB3A10)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_LHMFFPFMKFF_OFFSET UNITYSDK_OFFSET(0xFAB5080)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0xFAB5130)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_MHMDOBHOOIL_OFFSET UNITYSDK_OFFSET(0xFAB2F50)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_OAPPEBNOACK_1_OFFSET UNITYSDK_OFFSET(0xFAB5C20)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_OAPPEBNOACK_OFFSET UNITYSDK_OFFSET(0xFAB2EB0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFAB2820)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFAB2650)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAB2CA0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB2C90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_TypeDefinitionIndex = 92865;

	class AssetIndexContainer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>** StaticGet_AssetIndexCacheDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>**)Il2CppClass::FromTypeDefinitionIndex(AssetIndexContainer_TypeDefinitionIndex)->GetStaticField(0x51680);
		}
		// static const ::System::String* ASSET_INDEX_FILE_PREFIX; // 0x0
		::MoleMole::Config::AssetIndex* assetIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::System::String* BEIEJEJODAC(::Foundation::ResourceFileType FMCHIMDIKBB)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_BEIEJEJODAC_OFFSET))(FMCHIMDIKBB);
		}

		static ::System::String* FKGIIOAEBBN(::Foundation::ResourceFileType FMCHIMDIKBB)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FKGIIOAEBBN_OFFSET))(FMCHIMDIKBB);
		}

		static ::Il2CppArray<::System::Byte>* MHMDOBHOOIL(::MoleMole::Config::AssetIndexContainer* GCAFOPAKCIL)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_MHMDOBHOOIL_OFFSET))(GCAFOPAKCIL);
		}

		static ::System::Void JNAOKLJJAAG(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::MoleMole::Config::AssetIndexContainer* GCAFOPAKCIL)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_JNAOKLJJAAG_OFFSET))(AOADDGCDELC, GCAFOPAKCIL);
		}

		::System::Void ACDFBNEDGJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_ACDFBNEDGJF_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* FHNLOBJNFBP(::System::IO::Stream* CPKODGLINAO)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FHNLOBJNFBP_OFFSET))(CPKODGLINAO);
		}

		static ::System::String* OAPPEBNOACK(::System::String* BHNHOEONIBL)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_OAPPEBNOACK_OFFSET))(BHNHOEONIBL);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* CAGNDHJIOGB()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CAGNDHJIOGB_OFFSET))(this);
		}

		::System::Void LHMFFPFMKFF(::System::String* EHOBGNBEKIJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_LHMFFPFMKFF_OFFSET))(this, EHOBGNBEKIJ);
		}

		static ::MoleMole::Config::AssetIndexContainer* LNFENFDLMIG(::System::String* CEKNHIDPNNA, ::Foundation::ResourceFileType FMCHIMDIKBB, ::System::Boolean& DBBIDCBDBDB)
		{
			return ((::MoleMole::Config::AssetIndexContainer*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_LNFENFDLMIG_OFFSET))(CEKNHIDPNNA, FMCHIMDIKBB, DBBIDCBDBDB);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* DFFLIKFAENB()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_DFFLIKFAENB_OFFSET))(this);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		static ::System::String* OAPPEBNOACK_1(::Foundation::ResourceFileType FMCHIMDIKBB)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_OAPPEBNOACK_1_OFFSET))(FMCHIMDIKBB);
		}
	};
}
