#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGOOHIHKHNJ;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CGPKPJNOPBG_BEMDNIPJHAG_OFFSET UNITYSDK_OFFSET(0xD63C070)
#define CGPKPJNOPBG_CTOR_OFFSET UNITYSDK_OFFSET(0xD63BF80)
#define CGPKPJNOPBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD63BFE0)
#define CGPKPJNOPBG_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xD63C5A0)
#define CGPKPJNOPBG_IPAFMOLNMAC_OFFSET UNITYSDK_OFFSET(0xD63C220)
#define CGPKPJNOPBG_OAOJCALOGGK_OFFSET UNITYSDK_OFFSET(0xD63C2A0)

inline static constexpr unsigned int CGPKPJNOPBG_TypeDefinitionIndex = 57258;

	class CGPKPJNOPBG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Object*>* FEICCPBBIHG; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_DISPOSE_OFFSET))(this);
		}

		::System::Void BEMDNIPJHAG(::PGOOHIHKHNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGOOHIHKHNJ*))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_BEMDNIPJHAG_OFFSET))(this, a1);
		}

		::System::Void IPAFMOLNMAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_IPAFMOLNMAC_OFFSET))(this);
		}

		::System::Void OAOJCALOGGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_OAOJCALOGGK_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPKPJNOPBG_HIDEJDELEEB_OFFSET))(this);
		}

	};
