#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFAGKBKDJH;
class FFKHFDJFAGM;
class HGJKHDLOGEP;
class HGNAHHFBMMN;
class IGGAALKPHMC;

#define LMKBLDKPGFB_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xB7CCE70)
#define LMKBLDKPGFB_CAAKLAPKOJO_OFFSET UNITYSDK_OFFSET(0xB7CCF40)
#define LMKBLDKPGFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CD060)
#define LMKBLDKPGFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7CCE30)
#define LMKBLDKPGFB_GET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0xB7CD020)
#define LMKBLDKPGFB_GET_PENDINGSELECTION_OFFSET UNITYSDK_OFFSET(0xB7CD030)
#define LMKBLDKPGFB_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xB7CD010)
#define LMKBLDKPGFB_GET_TRANSNO_OFFSET UNITYSDK_OFFSET(0xB7CD040)
#define LMKBLDKPGFB_POINBCPKLLB_OFFSET UNITYSDK_OFFSET(0xB7CCFB0)
#define LMKBLDKPGFB_SET_TRANSNO_OFFSET UNITYSDK_OFFSET(0xB7CD050)

	class LMKBLDKPGFB : public ::System::Object
	{
	public:
		::HGJKHDLOGEP* _StageInfo_k__BackingField; // 0x10
		::EIFAGKBKDJH* _PendingSelection_k__BackingField; // 0x18
		::IGGAALKPHMC* _EquipInfo_k__BackingField; // 0x20
		::System::UInt32 _TransNo_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_DISPOSE_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::HGNAHHFBMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNAHHFBMMN*))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void CAAKLAPKOJO(::FFKHFDJFAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFKHFDJFAGM*))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_CAAKLAPKOJO_OFFSET))(this, a1);
		}

		::System::Void POINBCPKLLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_POINBCPKLLB_OFFSET))(this, a1);
		}

		::HGJKHDLOGEP* get_StageInfo()
		{
			return ((::HGJKHDLOGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_GET_STAGEINFO_OFFSET))(this);
		}

		::IGGAALKPHMC* get_EquipInfo()
		{
			return ((::IGGAALKPHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_GET_EQUIPINFO_OFFSET))(this);
		}

		::EIFAGKBKDJH* get_PendingSelection()
		{
			return ((::EIFAGKBKDJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_GET_PENDINGSELECTION_OFFSET))(this);
		}

		::System::UInt32 get_TransNo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_GET_TRANSNO_OFFSET))(this);
		}

		::System::Void set_TransNo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMKBLDKPGFB_SET_TRANSNO_OFFSET))(this, a1);
		}

	};
