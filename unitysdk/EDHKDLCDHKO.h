#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDHKDLCDHKO_CBOHCPAKIKB_OFFSET UNITYSDK_OFFSET(0x1DDA3630)
#define EDHKDLCDHKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9A7C0)
#define EDHKDLCDHKO_EGBHEPJHELB_OFFSET UNITYSDK_OFFSET(0x1DDAA730)
#define EDHKDLCDHKO_FNAJMDCOHGG_OFFSET UNITYSDK_OFFSET(0x1DDA81E0)
#define EDHKDLCDHKO_JOFJIOODOCG_OFFSET UNITYSDK_OFFSET(0x1DDAA740)

inline static constexpr unsigned int EDHKDLCDHKO_TypeDefinitionIndex = 43937;

	class EDHKDLCDHKO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* HCNKCKAJIJO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHKDLCDHKO_CTOR_OFFSET))(this);
		}

		::System::Void EGBHEPJHELB(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EDHKDLCDHKO_EGBHEPJHELB_OFFSET))(this, a1);
		}

		::System::Void CBOHCPAKIKB(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EDHKDLCDHKO_CBOHCPAKIKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FNAJMDCOHGG(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EDHKDLCDHKO_FNAJMDCOHGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOFJIOODOCG(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EDHKDLCDHKO_JOFJIOODOCG_OFFSET))(this, a1, a2, a3);
		}

	};
