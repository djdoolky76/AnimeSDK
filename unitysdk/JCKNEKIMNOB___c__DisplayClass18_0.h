#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
class DNFFEFPKDPC;
class INMMPMDELKE;
class JCKNEKIMNOB;
class KIEGLMIFDHD;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCKNEKIMNOB___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x165A4220)
#define JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x165A4A90)
#define JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x165A4DF0)
#define JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x165A4F60)

inline static constexpr unsigned int JCKNEKIMNOB___c__DisplayClass18_0_TypeDefinitionIndex = 76820;

	class JCKNEKIMNOB___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::KIEGLMIFDHD* scene; // 0x10
		::System::Tuple* data; // 0x18
		::RPG::GameCore::PropButtonConfig* buttonConfig; // 0x20
		::INMMPMDELKE* triggerEntity; // 0x28
		::JCKNEKIMNOB* __4__this; // 0x30
		::INMMPMDELKE* ownerEntity; // 0x38
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKNEKIMNOB___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __Add2DBrickInteractTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void __Add2DBrickInteractTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, a1);
		}

		::System::Void __Add2DBrickInteractTrigger_b__2(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JCKNEKIMNOB___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, a1);
		}

	};
