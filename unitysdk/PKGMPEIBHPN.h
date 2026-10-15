#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNNEBCHHBHD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKGMPEIBHPN_BPGILBNKCJP_OFFSET UNITYSDK_OFFSET(0xC2BA550)
#define PKGMPEIBHPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BA9C0)
#define PKGMPEIBHPN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC2BA730)

inline static constexpr unsigned int PKGMPEIBHPN_TypeDefinitionIndex = 56225;

	class PKGMPEIBHPN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CNNEBCHHBHD*>* LDMGJFCOEGH; // 0x10
		::System::UInt32 NJGKCPOOHDM; // 0x18
		::System::Int32 AFPALJAFCPI; // 0x1C
		::System::Single JKDFIMCIKFJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGMPEIBHPN_CTOR_OFFSET))(this);
		}

		::System::Void BPGILBNKCJP(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PKGMPEIBHPN_BPGILBNKCJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKGMPEIBHPN_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
