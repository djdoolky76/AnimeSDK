#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class JMNDEAFIAAF;
class MGCODKEBNNC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMLLGKJHADF_CNFMHHDNDOL_OFFSET UNITYSDK_OFFSET(0x282350)
#define EMLLGKJHADF_DENECLMHCFK_OFFSET UNITYSDK_OFFSET(0x7259A0)
#define EMLLGKJHADF_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x725990)
#define EMLLGKJHADF_KCICAJGGKHM_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int EMLLGKJHADF_TypeDefinitionIndex = 90898;

struct alignas(8) EMLLGKJHADF
{
	::System::Collections::Generic::List_1<::MGCODKEBNNC*>* _CPHBFDNBADF_k__BackingField; // 0x10

	::System::Boolean FCFOEJGPDNO(::JMNDEAFIAAF* AAOCANGHBDG, ::MGCODKEBNNC*& HDMOCGOIJMP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMNDEAFIAAF*, ::MGCODKEBNNC*&))((::PBYTE)hIl2Cpp + EMLLGKJHADF_FCFOEJGPDNO_OFFSET))(this, AAOCANGHBDG, HDMOCGOIJMP);
	}

	::System::Void KCICAJGGKHM(::System::Collections::Generic::List_1<::MGCODKEBNNC*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MGCODKEBNNC*>*))((::PBYTE)hIl2Cpp + EMLLGKJHADF_KCICAJGGKHM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DENECLMHCFK(::MGCODKEBNNC* HDMOCGOIJMP)
	{
		return ((::System::Void(*)(::PVOID, ::MGCODKEBNNC*))((::PBYTE)hIl2Cpp + EMLLGKJHADF_DENECLMHCFK_OFFSET))(this, HDMOCGOIJMP);
	}

	::System::Collections::Generic::List_1<::MGCODKEBNNC*>* CNFMHHDNDOL()
	{
		return ((::System::Collections::Generic::List_1<::MGCODKEBNNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLLGKJHADF_CNFMHHDNDOL_OFFSET))(this);
	}
};
