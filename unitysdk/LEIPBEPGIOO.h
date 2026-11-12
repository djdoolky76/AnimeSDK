#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFLAJBMKAAH.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define LEIPBEPGIOO_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xBEEE0B0)
#define LEIPBEPGIOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEDB90)
#define LEIPBEPGIOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEEDBD0)
#define LEIPBEPGIOO_EILJCLCPNDM_OFFSET UNITYSDK_OFFSET(0xBEEE140)
#define LEIPBEPGIOO_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xBEEDF90)
#define LEIPBEPGIOO_LLCDNOOLEMH_OFFSET UNITYSDK_OFFSET(0xBEEE190)
#define LEIPBEPGIOO_MCKLBLOMNKG_OFFSET UNITYSDK_OFFSET(0xBEEDFD0)
#define LEIPBEPGIOO_NPIAFDJCIJH_OFFSET UNITYSDK_OFFSET(0xBEEDC60)
#define LEIPBEPGIOO_OOGEFEGLPAI_OFFSET UNITYSDK_OFFSET(0xBEEDCA0)

inline static constexpr unsigned int LEIPBEPGIOO_TypeDefinitionIndex = 81497;

	class LEIPBEPGIOO : public ::EFLAJBMKAAH
	{
	public:
		::KFCMGNCLHMD* BCALOKFAJFH; // 0x98
		// static const ::System::String* AOKCCFPPDGO; // 0x0
		::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::PinballPuzzleItemType NPIAFDJCIJH()
		{
			return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_NPIAFDJCIJH_OFFSET))(this);
		}

		::System::Void OOGEFEGLPAI(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_OOGEFEGLPAI_OFFSET))(this, a1);
		}

		::System::Void MCKLBLOMNKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_MCKLBLOMNKG_OFFSET))(this, a1);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_JLNIGEMKDJH_OFFSET))(this);
		}

		::System::String* EILJCLCPNDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_EILJCLCPNDM_OFFSET))(this);
		}

		::System::Void LLCDNOOLEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIPBEPGIOO_LLCDNOOLEMH_OFFSET))(this);
		}

	};
