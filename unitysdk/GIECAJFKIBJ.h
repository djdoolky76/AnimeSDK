#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"
class GIECAJFKIBJ;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define GIECAJFKIBJ_COJIBNGHCJG_OFFSET UNITYSDK_OFFSET(0x1C479590)
#define GIECAJFKIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C42A060)
#define GIECAJFKIBJ_EKHNOMJLDCH_OFFSET UNITYSDK_OFFSET(0x1C479660)
#define GIECAJFKIBJ_FMPLLMINOPE_OFFSET UNITYSDK_OFFSET(0x1C479620)
#define GIECAJFKIBJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C479570)
#define GIECAJFKIBJ_IFPDJCIDGKK_OFFSET UNITYSDK_OFFSET(0x1C479960)
#define GIECAJFKIBJ_IKOCHGBIGPJ_OFFSET UNITYSDK_OFFSET(0x1C4794B0)
#define GIECAJFKIBJ_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x1C479490)
#define GIECAJFKIBJ_JKMPIAPPJPD_OFFSET UNITYSDK_OFFSET(0x1C479560)
#define GIECAJFKIBJ_MOJGKEDMPFH_OFFSET UNITYSDK_OFFSET(0x1C4794A0)
#define GIECAJFKIBJ_PONHHIHOCHH_OFFSET UNITYSDK_OFFSET(0x1C4796A0)
#define GIECAJFKIBJ_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1C479580)

	class GIECAJFKIBJ : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* IPMHANHEPME; // 0x10
		::System::IO::BinaryWriter* LBLHMBNGKEO; // 0x18
		::System::UInt32 _Offset_k__BackingField; // 0x20
		::System::UInt32 FKOJGNPFDIF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 IMIKJMCGGML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_IMIKJMCGGML_OFFSET))(this);
		}

		::System::UInt32 MOJGKEDMPFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_MOJGKEDMPFH_OFFSET))(this);
		}

		::System::UInt32 IKOCHGBIGPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_IKOCHGBIGPJ_OFFSET))(this);
		}

		::RPG::Client::SectionType JKMPIAPPJPD()
		{
			return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_JKMPIAPPJPD_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_SET_OFFSET_OFFSET))(this, a1);
		}

		::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>* COJIBNGHCJG()
		{
			return ((::RPG::Client::ScopeUser_1<::GIECAJFKIBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_COJIBNGHCJG_OFFSET))(this);
		}

		::System::Void FMPLLMINOPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_FMPLLMINOPE_OFFSET))(this);
		}

		::System::Void EKHNOMJLDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_EKHNOMJLDCH_OFFSET))(this);
		}

		::System::Void PONHHIHOCHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_PONHHIHOCHH_OFFSET))(this, a1);
		}

		::System::Void IFPDJCIDGKK(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + GIECAJFKIBJ_IFPDJCIDGKK_OFFSET))(this, a1);
		}

	};
