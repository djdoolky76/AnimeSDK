#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJDGABPDGH;
class FNHHCDAKILF;
class GHGAFIIFPEC;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftObtainMechatronUI3DViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftObtainMechatronViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLKHNPDOOIC_BNLBKCICNHE_OFFSET UNITYSDK_OFFSET(0xF8A14F0)
#define DLKHNPDOOIC_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A12F0)
#define DLKHNPDOOIC_DPGLDMBLBIL_OFFSET UNITYSDK_OFFSET(0xF8A1300)
#define DLKHNPDOOIC_NEDOKDOGAAO_OFFSET UNITYSDK_OFFSET(0xF8A13F0)

	class DLKHNPDOOIC : public ::System::Object
	{
	public:
		::GHGAFIIFPEC* FKPFLNKEHCN; // 0x10
		::FNHHCDAKILF* JIFFPCDGGID; // 0x18
		::System::Void _ctor(::GHGAFIIFPEC* a1, ::FNHHCDAKILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHGAFIIFPEC*, ::FNHHCDAKILF*))((::PBYTE)hIl2Cpp + DLKHNPDOOIC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronViewModel* DPGLDMBLBIL(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLKHNPDOOIC_DPGLDMBLBIL_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel* NEDOKDOGAAO(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLKHNPDOOIC_NEDOKDOGAAO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* BNLBKCICNHE(::APJDGABPDGH* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::APJDGABPDGH*))((::PBYTE)hIl2Cpp + DLKHNPDOOIC_BNLBKCICNHE_OFFSET))(this, a1);
		}

	};
