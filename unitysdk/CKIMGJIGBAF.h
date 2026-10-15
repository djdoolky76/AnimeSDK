#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CKIMGJIGBAF;
class JCDNAGMDELF;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CKIMGJIGBAF_AGIBOFIBMNA_OFFSET UNITYSDK_OFFSET(0xD7580D0)
#define CKIMGJIGBAF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD757FC0)
#define CKIMGJIGBAF_CTOR_OFFSET UNITYSDK_OFFSET(0xD7580C0)
#define CKIMGJIGBAF_DKMDPLNCGLE_OFFSET UNITYSDK_OFFSET(0xD758190)
#define CKIMGJIGBAF_GKEIFKABCNN_OFFSET UNITYSDK_OFFSET(0xD7581D0)

inline static constexpr unsigned int CKIMGJIGBAF_TypeDefinitionIndex = 74384;

	class CKIMGJIGBAF : public ::System::Object
	{
	public:
		::System::String* GIFMMMMNIAL; // 0x10
		::RPG::Client::TextID OBBLBEDEKLO; // 0x18
		::System::Boolean NIDCNJMNBIB; // 0x28
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CKIMGJIGBAF_CTOR_OFFSET))(this, a1);
		}

		static ::CKIMGJIGBAF* BPLPBPMEODA(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::CKIMGJIGBAF*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CKIMGJIGBAF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::String* AGIBOFIBMNA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIMGJIGBAF_AGIBOFIBMNA_OFFSET))(this);
		}

		::System::Void GKEIFKABCNN(::JCDNAGMDELF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCDNAGMDELF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKIMGJIGBAF_GKEIFKABCNN_OFFSET))(this, a1, a2);
		}

		::System::Boolean DKMDPLNCGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIMGJIGBAF_DKMDPLNCGLE_OFFSET))(this);
		}

	};
