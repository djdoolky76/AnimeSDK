#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBNBPFEJANH_DJLDKKGMLFD;
namespace RPG::Client { class NetPacket; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBNBPFEJANH_CGFNEMEMMEF_OFFSET UNITYSDK_OFFSET(0xB31B0A0)
#define KBNBPFEJANH_CMLCFDNFJOO_OFFSET UNITYSDK_OFFSET(0xB31AFD0)
#define KBNBPFEJANH_CTOR_OFFSET UNITYSDK_OFFSET(0xB31B870)
#define KBNBPFEJANH_FDKIFOPHFPK_OFFSET UNITYSDK_OFFSET(0xB31B6E0)
#define KBNBPFEJANH_FDOFCNLNLHI_OFFSET UNITYSDK_OFFSET(0xB31B1A0)
#define KBNBPFEJANH_FKGFOCOEEHC_OFFSET UNITYSDK_OFFSET(0xB31B830)
#define KBNBPFEJANH_FOCLEJHLDCI_OFFSET UNITYSDK_OFFSET(0xB31B150)
#define KBNBPFEJANH_HBEALPOHNIH_OFFSET UNITYSDK_OFFSET(0xB31B390)
#define KBNBPFEJANH_JEAFCOMBONE_OFFSET UNITYSDK_OFFSET(0xB31B410)

inline static constexpr unsigned int KBNBPFEJANH_TypeDefinitionIndex = 69382;

	class KBNBPFEJANH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DGJIGNNCIHK; // 0x10
		::KBNBPFEJANH_DJLDKKGMLFD* MNLJPLKJFGF; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Boolean LHNCNNPNEFH; // 0x21
		::System::Byte _padding0[0x6];
		::System::UInt64 EMFIABBAGKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_CTOR_OFFSET))(this);
		}

		::System::Void CMLCFDNFJOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_CMLCFDNFJOO_OFFSET))(this);
		}

		::System::Void FOCLEJHLDCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_FOCLEJHLDCI_OFFSET))(this);
		}

		::System::Void FDOFCNLNLHI(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + KBNBPFEJANH_FDOFCNLNLHI_OFFSET))(this, a1);
		}

		::System::Void JEAFCOMBONE(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + KBNBPFEJANH_JEAFCOMBONE_OFFSET))(this, a1);
		}

		::System::Void FDKIFOPHFPK(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + KBNBPFEJANH_FDKIFOPHFPK_OFFSET))(this, a1);
		}

		::System::Void FKGFOCOEEHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_FKGFOCOEEHC_OFFSET))(this);
		}

		::System::Single HBEALPOHNIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_HBEALPOHNIH_OFFSET))(this);
		}

		::System::UInt64 CGFNEMEMMEF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNBPFEJANH_CGFNEMEMMEF_OFFSET))(this);
		}

	};
