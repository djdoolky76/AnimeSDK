#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CAFKOCAKJOJ_BLKDPDJOEJH_OFFSET UNITYSDK_OFFSET(0xCB67490)
#define CAFKOCAKJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCB676A0)
#define CAFKOCAKJOJ_FAMIICCLOBI_OFFSET UNITYSDK_OFFSET(0xCB67660)
#define CAFKOCAKJOJ_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xCB671F0)
#define CAFKOCAKJOJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xCB67240)
#define CAFKOCAKJOJ_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xCB67420)
#define CAFKOCAKJOJ_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xCB67300)
#define CAFKOCAKJOJ_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xCB672A0)
#define CAFKOCAKJOJ_UPDATEITEMREMOVE_OFFSET UNITYSDK_OFFSET(0xCB67390)
#define CAFKOCAKJOJ_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xCB67190)

inline static constexpr unsigned int CAFKOCAKJOJ_TypeDefinitionIndex = 66567;

	class CAFKOCAKJOJ : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Boolean EDIBEIOPBHN; // 0x10
		::System::Boolean CFLHIOCDLEL; // 0x11
		::System::Boolean EIGFOKNMPJB; // 0x12
		::System::Boolean HDNEHEILOKJ; // 0x13
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_UPDATESTART_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItemRemove(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_UPDATEITEMREMOVE_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Boolean BLKDPDJOEJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_BLKDPDJOEJH_OFFSET))(this);
		}

		::System::Boolean FAMIICCLOBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_FAMIICCLOBI_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
