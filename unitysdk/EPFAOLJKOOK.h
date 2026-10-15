#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"
class EPFAOLJKOOK;
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }

#define EPFAOLJKOOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDABD90)
#define EPFAOLJKOOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDABD70)
#define EPFAOLJKOOK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DDAC320)
#define EPFAOLJKOOK_EDLMJAENJNM_OFFSET UNITYSDK_OFFSET(0x1DDABDA0)
#define EPFAOLJKOOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDABFB0)
#define EPFAOLJKOOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDABF20)
#define EPFAOLJKOOK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DDAC1D0)
#define EPFAOLJKOOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDAC0B0)
#define EPFAOLJKOOK_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x1DDABD40)
#define EPFAOLJKOOK_IABINCOJGCJ_OFFSET UNITYSDK_OFFSET(0x1DDABD20)
#define EPFAOLJKOOK_JEMKJKGIOON_OFFSET UNITYSDK_OFFSET(0x1DDABD00)
#define EPFAOLJKOOK_LLEDNKOMAGK_OFFSET UNITYSDK_OFFSET(0x1DDA8570)
#define EPFAOLJKOOK_MIABPECEEKP_OFFSET UNITYSDK_OFFSET(0x1DDABE40)
#define EPFAOLJKOOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDAC470)

inline static constexpr unsigned int EPFAOLJKOOK_TypeDefinitionIndex = 43931;

	class EPFAOLJKOOK : public ::System::Object
	{
	public:
		::System::String* GPELLPIFOBJ; // 0x10
		::System::String* GABNEAADAOG; // 0x18
		::System::UInt16 HPGJPOFOOPM; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JEMKJKGIOON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_JEMKJKGIOON_OFFSET))(this);
		}

		::System::Boolean IABINCOJGCJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_IABINCOJGCJ_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::String* LLEDNKOMAGK(::RPG::Client::IPVersion a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_LLEDNKOMAGK_OFFSET))(this, a1);
		}

		::System::Net::IPAddress* EDLMJAENJNM(::RPG::Client::IPVersion a1)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_EDLMJAENJNM_OFFSET))(this, a1);
		}

		::System::Net::IPEndPoint* MIABPECEEKP(::RPG::Client::IPVersion a1)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_MIABPECEEKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::EPFAOLJKOOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::EPFAOLJKOOK* a1, ::EPFAOLJKOOK* a2)
		{
			return ((::System::Boolean(*)(::EPFAOLJKOOK*, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::EPFAOLJKOOK* a1, ::EPFAOLJKOOK* a2)
		{
			return ((::System::Boolean(*)(::EPFAOLJKOOK*, ::EPFAOLJKOOK*))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFAOLJKOOK_TOSTRING_OFFSET))(this);
		}

	};
