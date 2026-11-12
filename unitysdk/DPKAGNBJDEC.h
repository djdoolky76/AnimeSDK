#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class CNIPIIKMAHN;
class IDMPBCFCKMA;
class IPCGKDGGJHM;

#define DPKAGNBJDEC_ABJOLCKALPA_OFFSET UNITYSDK_OFFSET(0x134449F0)
#define DPKAGNBJDEC_CTOR_OFFSET UNITYSDK_OFFSET(0x134448B0)
#define DPKAGNBJDEC_EDOHILIMNLA_OFFSET UNITYSDK_OFFSET(0x13444B00)
#define DPKAGNBJDEC_NEKFKDIPPEG_OFFSET UNITYSDK_OFFSET(0x13444F60)
#define DPKAGNBJDEC_START_OFFSET UNITYSDK_OFFSET(0x13444900)
#define DPKAGNBJDEC_STOP_OFFSET UNITYSDK_OFFSET(0x13444AA0)

inline static constexpr unsigned int DPKAGNBJDEC_TypeDefinitionIndex = 64070;

	class DPKAGNBJDEC : public ::BHPMNMMGLHI
	{
	public:
		::IPCGKDGGJHM* EDLDCGGEPFG; // 0x20
		::System::Void _ctor(::IPCGKDGGJHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPCGKDGGJHM*))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_START_OFFSET))(this);
		}

		::System::Void ABJOLCKALPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_ABJOLCKALPA_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_STOP_OFFSET))(this);
		}

		::System::Void EDOHILIMNLA(::System::UInt16 a1, ::IDMPBCFCKMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::IDMPBCFCKMA*))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_EDOHILIMNLA_OFFSET))(this, a1, a2);
		}

		::System::Void NEKFKDIPPEG(::System::UInt16 a1, ::CNIPIIKMAHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::CNIPIIKMAHN*))((::PBYTE)hIl2Cpp + DPKAGNBJDEC_NEKFKDIPPEG_OFFSET))(this, a1, a2);
		}

	};
