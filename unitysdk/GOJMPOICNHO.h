#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define GOJMPOICNHO_AMDPIDJKNBG_OFFSET UNITYSDK_OFFSET(0x15B37FE0)
#define GOJMPOICNHO_BLJLCKNPGIN_OFFSET UNITYSDK_OFFSET(0x15B38230)
#define GOJMPOICNHO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B38760)
#define GOJMPOICNHO_DKJHMCHNBDA_OFFSET UNITYSDK_OFFSET(0x15B383C0)
#define GOJMPOICNHO_HABAHBOIONI_OFFSET UNITYSDK_OFFSET(0x15B381D0)
#define GOJMPOICNHO_HPFCAMKCJLE_OFFSET UNITYSDK_OFFSET(0x15B38720)
#define GOJMPOICNHO_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15B37EE0)
#define GOJMPOICNHO_LMADEAPDHAB_OFFSET UNITYSDK_OFFSET(0x15B38040)
#define GOJMPOICNHO_MGCMFBKDGFL_OFFSET UNITYSDK_OFFSET(0x15B38560)
#define GOJMPOICNHO_PCMAKKCOAGA_OFFSET UNITYSDK_OFFSET(0x15B386D0)

	class GOJMPOICNHO : public ::System::Object
	{
	public:
		::System::Boolean DLAMGCFOHIK; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 FGJMGOEGFHG; // 0x14
		::System::Int32 AJNAFFADNMO; // 0x18
		// static const ::System::String* JCGJEBBLILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_CTOR_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOJMPOICNHO_JDAGFHEPMHF_OFFSET))(this, a1);
		}

		::System::Void AMDPIDJKNBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_AMDPIDJKNBG_OFFSET))(this);
		}

		::System::Void HABAHBOIONI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_HABAHBOIONI_OFFSET))(this);
		}

		::System::Void DKJHMCHNBDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_DKJHMCHNBDA_OFFSET))(this);
		}

		::System::Void MGCMFBKDGFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_MGCMFBKDGFL_OFFSET))(this);
		}

		::System::Void PCMAKKCOAGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOJMPOICNHO_PCMAKKCOAGA_OFFSET))(this, a1);
		}

		::System::Void LMADEAPDHAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_LMADEAPDHAB_OFFSET))(this);
		}

		::System::Void BLJLCKNPGIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_BLJLCKNPGIN_OFFSET))(this);
		}

		::System::Boolean HPFCAMKCJLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJMPOICNHO_HPFCAMKCJLE_OFFSET))(this);
		}

	};
