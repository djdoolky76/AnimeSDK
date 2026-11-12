#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define GOJMPOICNHO_AMDPIDJKNBG_OFFSET UNITYSDK_OFFSET(0x16ABE320)
#define GOJMPOICNHO_BLJLCKNPGIN_OFFSET UNITYSDK_OFFSET(0x16ABE570)
#define GOJMPOICNHO_CTOR_OFFSET UNITYSDK_OFFSET(0x16ABEAA0)
#define GOJMPOICNHO_DKJHMCHNBDA_OFFSET UNITYSDK_OFFSET(0x16ABE700)
#define GOJMPOICNHO_HABAHBOIONI_OFFSET UNITYSDK_OFFSET(0x16ABE510)
#define GOJMPOICNHO_HPFCAMKCJLE_OFFSET UNITYSDK_OFFSET(0x16ABEA60)
#define GOJMPOICNHO_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x16ABE220)
#define GOJMPOICNHO_LMADEAPDHAB_OFFSET UNITYSDK_OFFSET(0x16ABE380)
#define GOJMPOICNHO_MGCMFBKDGFL_OFFSET UNITYSDK_OFFSET(0x16ABE8A0)
#define GOJMPOICNHO_PCMAKKCOAGA_OFFSET UNITYSDK_OFFSET(0x16ABEA10)

inline static constexpr unsigned int GOJMPOICNHO_TypeDefinitionIndex = 83528;

	class GOJMPOICNHO : public ::System::Object
	{
	public:
		::System::UInt32 FGJMGOEGFHG; // 0x10
		::System::Boolean DLAMGCFOHIK; // 0x14
		::System::Byte _padding0[0x3];
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
