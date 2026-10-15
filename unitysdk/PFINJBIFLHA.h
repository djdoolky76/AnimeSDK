#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKOBBCFHPF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFINJBIFLHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC213810)
#define PFINJBIFLHA_HBAOMEBJKGM_OFFSET UNITYSDK_OFFSET(0xC2130E0)
#define PFINJBIFLHA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC213050)

inline static constexpr unsigned int PFINJBIFLHA_TypeDefinitionIndex = 60574;

	class PFINJBIFLHA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DCKOBBCFHPF*>* BDBKDJEFFHN; // 0x10
		::System::UInt64 LOHBMDNKDHM; // 0x18
		::System::Int32 PMPGPIDDJGI; // 0x20
		::System::Int32 IBEPGFDKFCK; // 0x24
		::System::UInt64 GKONCELBOOE; // 0x28
		::System::Int32 HOKOHDLOPKE; // 0x30
		::System::Int32 CFGKDPNHBGG; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFINJBIFLHA_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFINJBIFLHA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::String* HBAOMEBJKGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFINJBIFLHA_HBAOMEBJKGM_OFFSET))(this);
		}

	};
