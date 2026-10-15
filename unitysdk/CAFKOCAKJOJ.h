#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CAFKOCAKJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC47BC90)
#define CAFKOCAKJOJ_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xC47B8E0)
#define CAFKOCAKJOJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC47B930)
#define CAFKOCAKJOJ_MBINGCOGKAI_OFFSET UNITYSDK_OFFSET(0xC47BA70)
#define CAFKOCAKJOJ_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xC47BB00)
#define CAFKOCAKJOJ_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xC47B9E0)
#define CAFKOCAKJOJ_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xC47B980)
#define CAFKOCAKJOJ_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xC47B870)

	class CAFKOCAKJOJ : public ::AMCOEFHHBPO
	{
	public:
		::System::Boolean EDIBEIOPBHN; // 0x10
		::System::Boolean BFHGBICPEPI; // 0x11
		::System::Boolean CFLHIOCDLEL; // 0x12
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

		::System::Void MBINGCOGKAI(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_MBINGCOGKAI_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFKOCAKJOJ_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
