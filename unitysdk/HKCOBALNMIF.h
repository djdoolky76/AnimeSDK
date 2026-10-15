#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEHPOGADKM;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HKCOBALNMIF_GOEEBLPHCEJ_OFFSET UNITYSDK_OFFSET(0x15D31AB0)
#define HKCOBALNMIF_MBDNDAPNMFH_OFFSET UNITYSDK_OFFSET(0x15D32320)

inline static constexpr unsigned int HKCOBALNMIF_TypeDefinitionIndex = 67432;

	class HKCOBALNMIF : public ::System::Object
	{
	public:
		static ::System::Boolean GOEEBLPHCEJ(::BBEHPOGADKM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::BBEHPOGADKM*, ::System::UInt32))((::PBYTE)hIl2Cpp + HKCOBALNMIF_GOEEBLPHCEJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean MBDNDAPNMFH(::BBEHPOGADKM* a1, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>* a2, ::RPG::Client::RogueMagicUnitDataItem* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::BBEHPOGADKM*, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>*, ::RPG::Client::RogueMagicUnitDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + HKCOBALNMIF_MBDNDAPNMFH_OFFSET))(a1, a2, a3, a4);
		}

	};
