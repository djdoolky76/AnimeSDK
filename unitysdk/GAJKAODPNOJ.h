#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOOPKOOCGAN;
class FDPALAEIHPB;
class IPPEFBBLMAK;
class KHPOKIKCOFO;
class LINAIKDAJHF;
class NFPPGOFECMH;
class OAFCCICMILM;
namespace System { class Random; }

#define GAJKAODPNOJ_ALIAGIJFHAA_OFFSET UNITYSDK_OFFSET(0x1C217BD0)
#define GAJKAODPNOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C215AA0)
#define GAJKAODPNOJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C215F50)
#define GAJKAODPNOJ_FNLGIHFLMDO_OFFSET UNITYSDK_OFFSET(0x1C2170F0)
#define GAJKAODPNOJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C215B20)
#define GAJKAODPNOJ_ONFEVERTIMEREMOVED_OFFSET UNITYSDK_OFFSET(0x1C217820)
#define GAJKAODPNOJ_ONFEVERTIME_OFFSET UNITYSDK_OFFSET(0x1C217450)
#define GAJKAODPNOJ_PAMCNHHKJKP_OFFSET UNITYSDK_OFFSET(0x1C216000)

inline static constexpr unsigned int GAJKAODPNOJ_TypeDefinitionIndex = 43368;

	class GAJKAODPNOJ : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::OAFCCICMILM* CKJLAAOFGCC; // 0x18
		::System::Random* AMHBPICEDKN; // 0x20
		::System::Int32 FBNPEJHFMFE; // 0x28
		::System::Int32 GOFKMLLHHDP; // 0x2C
		::System::Single GPCIKKLHEIC; // 0x30
		::System::Single HLPCAEAMFNA; // 0x34
		::System::Single AHHGONLAKCL; // 0x38
		::System::Boolean LHGOMBPKOKB; // 0x3C
		::System::Boolean JBMFFNEOALE; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Single NMJGMNAPELG; // 0x40
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_EXECUTE_OFFSET))(this);
		}

		::System::Void FNLGIHFLMDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_FNLGIHFLMDO_OFFSET))(this);
		}

		::System::Void PAMCNHHKJKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_PAMCNHHKJKP_OFFSET))(this);
		}

		::System::Void OnFeverTime(::NFPPGOFECMH* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NFPPGOFECMH*, ::System::Single))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_ONFEVERTIME_OFFSET))(this, a1, a2);
		}

		::System::Void OnFeverTimeRemoved(::NFPPGOFECMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPPGOFECMH*))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_ONFEVERTIMEREMOVED_OFFSET))(this, a1);
		}

		::System::Void ALIAGIJFHAA(::KHPOKIKCOFO* a1, ::IPPEFBBLMAK* a2, ::DOOPKOOCGAN* a3, ::LINAIKDAJHF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*, ::IPPEFBBLMAK*, ::DOOPKOOCGAN*, ::LINAIKDAJHF*))((::PBYTE)hIl2Cpp + GAJKAODPNOJ_ALIAGIJFHAA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
