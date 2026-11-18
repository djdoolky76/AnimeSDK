#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class OBKNEEOLOPB;
namespace System { class Action; }
namespace System { class String; }

#define GEDEFNKMIDH_GPGJPGPKOBM_OFFSET UNITYSDK_OFFSET(0x125C82D0)
#define GEDEFNKMIDH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x125C7E00)
#define GEDEFNKMIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x125C7D30)

inline static constexpr unsigned int GEDEFNKMIDH_TypeDefinitionIndex = 54481;

class GEDEFNKMIDH : public ::IPNCFCFIKCF
{
public:
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::String* CFEJKOGNHFA; // 0x28
	::System::Int32 EKPEGJMOIPE; // 0x30
	::System::Boolean HOIALAGDOOG; // 0x34
	::System::Byte _padding0[0x3];
	::System::Single GPDCBHEPDGL; // 0x38

	::System::Void _ctor(::System::String* CFEJKOGNHFA, ::System::Int32 EKPEGJMOIPE, ::System::Boolean HOIALAGDOOG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GEDEFNKMIDH__CTOR_OFFSET))(this, CFEJKOGNHFA, EKPEGJMOIPE, HOIALAGDOOG);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GEDEFNKMIDH_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void GPGJPGPKOBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDEFNKMIDH_GPGJPGPKOBM_OFFSET))(this);
	}
};
