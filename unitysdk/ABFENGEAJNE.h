#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FiveDimScreenTransferType.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OFKJLOLGCAL.h"
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define ABFENGEAJNE_AELHAIBODFH_OFFSET UNITYSDK_OFFSET(0xB0F1160)
#define ABFENGEAJNE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0F0DE0)
#define ABFENGEAJNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F1690)
#define ABFENGEAJNE_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0xB0F1620)
#define ABFENGEAJNE_DEPLKEPMKFK_OFFSET UNITYSDK_OFFSET(0xB0F1290)
#define ABFENGEAJNE_DNGKMFFCMMI_OFFSET UNITYSDK_OFFSET(0xB0F0EE0)
#define ABFENGEAJNE_EKMPLKGHJHO_OFFSET UNITYSDK_OFFSET(0xB0F0D60)
#define ABFENGEAJNE_FAEELLKEBCH_OFFSET UNITYSDK_OFFSET(0xB0F15E0)
#define ABFENGEAJNE_ILMOMGOIABI_OFFSET UNITYSDK_OFFSET(0xB0F0E80)
#define ABFENGEAJNE_IOFOBIEEFEP_OFFSET UNITYSDK_OFFSET(0xB0F1380)
#define ABFENGEAJNE_IPBCKEKDHFO_OFFSET UNITYSDK_OFFSET(0xB0F11C0)
#define ABFENGEAJNE_KENNDOIKGDD_OFFSET UNITYSDK_OFFSET(0xB0F1530)
#define ABFENGEAJNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0F0B50)
#define ABFENGEAJNE_LPMGMBACEIL_OFFSET UNITYSDK_OFFSET(0xB0F0BC0)

inline static constexpr unsigned int ABFENGEAJNE_TypeDefinitionIndex = 60547;

	class ABFENGEAJNE : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* LMFPANNMMNP; // 0x10
		::UnityEngine::Coroutine* MKBHBPMHDFG; // 0x18
		::System::Boolean FAFNNABEAPL; // 0x20
		::System::Boolean CBHGDOAIFLK; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::Client::FiveDimScreenTransferType GMCNLFICNOB; // 0x24
		::RPG::GameCore::FiveDimCustomScreenTransferStyle HHKHIALFGDI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Boolean a1, ::OFKJLOLGCAL a2, ::System::Func_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::OFKJLOLGCAL, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABFENGEAJNE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPMGMBACEIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_LPMGMBACEIL_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_CLEAR_OFFSET))(this);
		}

		::System::Void DNGKMFFCMMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_DNGKMFFCMMI_OFFSET))(this);
		}

		::System::Void IPBCKEKDHFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_IPBCKEKDHFO_OFFSET))(this);
		}

		::System::Boolean DEPLKEPMKFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_DEPLKEPMKFK_OFFSET))(this);
		}

		::System::Boolean IOFOBIEEFEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_IOFOBIEEFEP_OFFSET))(this);
		}

		::System::Void KENNDOIKGDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_KENNDOIKGDD_OFFSET))(this);
		}

		::System::Void EKMPLKGHJHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_EKMPLKGHJHO_OFFSET))(this);
		}

		::System::Void FAEELLKEBCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_FAEELLKEBCH_OFFSET))(this);
		}

		::System::Boolean DDFDGLGCBAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_DDFDGLGCBAI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AELHAIBODFH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_AELHAIBODFH_OFFSET))(this);
		}

		::System::Void ILMOMGOIABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFENGEAJNE_ILMOMGOIABI_OFFSET))(this);
		}

	};
