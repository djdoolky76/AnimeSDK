#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFPJJDPNKPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB174EF0)
#define BFPJJDPNKPN_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB174F10)

inline static constexpr unsigned int BFPJJDPNKPN_TypeDefinitionIndex = 77676;

	class BFPJJDPNKPN : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GLHBNGAJAMK; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x18
		::System::Boolean ADMNLDMFGKK; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ECDGGFANCFL; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BFPJJDPNKPN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + BFPJJDPNKPN_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
