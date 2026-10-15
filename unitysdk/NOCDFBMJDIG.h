#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class ECPDFJJNDBI;
class NALGGFHJEBB;
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define NOCDFBMJDIG_AGJMIJEOPHJ_OFFSET UNITYSDK_OFFSET(0x1C499E00)
#define NOCDFBMJDIG_ANKNMPHKMCM_OFFSET UNITYSDK_OFFSET(0x1C499B20)
#define NOCDFBMJDIG_CHDFPIMAEDD_OFFSET UNITYSDK_OFFSET(0x1C4996C0)
#define NOCDFBMJDIG_CNEEIMKFBJI_OFFSET UNITYSDK_OFFSET(0x1C499FE0)
#define NOCDFBMJDIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4992C0)
#define NOCDFBMJDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C480CC0)
#define NOCDFBMJDIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C499530)
#define NOCDFBMJDIG_FMNKCKACGLK_OFFSET UNITYSDK_OFFSET(0x1C4998A0)
#define NOCDFBMJDIG_GDPGDJNDPFK_OFFSET UNITYSDK_OFFSET(0x1C499950)
#define NOCDFBMJDIG_HOBKJFMBIIE_OFFSET UNITYSDK_OFFSET(0x1C480DE0)
#define NOCDFBMJDIG_IJNNDKCPNDH_OFFSET UNITYSDK_OFFSET(0x1C499AC0)
#define NOCDFBMJDIG_KGGCBNJIGNP_OFFSET UNITYSDK_OFFSET(0x1C499DA0)
#define NOCDFBMJDIG_LBLLCBMJJHD_OFFSET UNITYSDK_OFFSET(0x1C49A040)
#define NOCDFBMJDIG_LIHIGBNOCGN_OFFSET UNITYSDK_OFFSET(0x1C499D40)
#define NOCDFBMJDIG_LOGFDCIOAGF_OFFSET UNITYSDK_OFFSET(0x1C499C80)
#define NOCDFBMJDIG_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1C499BA0)
#define NOCDFBMJDIG_NNKGLICBMJH_OFFSET UNITYSDK_OFFSET(0x1C499A60)
#define NOCDFBMJDIG_NPIMDHHIEHG_OFFSET UNITYSDK_OFFSET(0x1C499C20)
#define NOCDFBMJDIG_ODBILIAKBFD_OFFSET UNITYSDK_OFFSET(0x1C499CE0)
#define NOCDFBMJDIG_PFNDPAILDJP_OFFSET UNITYSDK_OFFSET(0x1C4992B0)

inline static constexpr unsigned int NOCDFBMJDIG_TypeDefinitionIndex = 41548;

	class NOCDFBMJDIG : public ::System::Object
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* DPHFNPAPKND; // 0x10
		::System::IO::MemoryMappedFiles::MemoryMappedFile* EKEDLHLAILA; // 0x18
		::System::String* BEPENCIBLDA; // 0x20
		::System::Int64 BBFOLEOPPPL; // 0x28
		::PVOID DCADNKPOOFO; // 0x30
		::System::Int64 DHEDJCAMMOO; // 0x38
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::IO::Stream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* PFNDPAILDJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_PFNDPAILDJP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_DISPOSE_OFFSET))(this);
		}

		::System::String* CHDFPIMAEDD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_CHDFPIMAEDD_OFFSET))(this);
		}

		::ECPDFJJNDBI* HOBKJFMBIIE()
		{
			return ((::ECPDFJJNDBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_HOBKJFMBIIE_OFFSET))(this);
		}

		::System::Boolean ANKNMPHKMCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_ANKNMPHKMCM_OFFSET))(this);
		}

		::System::Byte NKCDEAAKNGO()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_NKCDEAAKNGO_OFFSET))(this);
		}

		::System::Double NPIMDHHIEHG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_NPIMDHHIEHG_OFFSET))(this);
		}

		::System::Int16 LOGFDCIOAGF()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_LOGFDCIOAGF_OFFSET))(this);
		}

		::System::Int32 ODBILIAKBFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_ODBILIAKBFD_OFFSET))(this);
		}

		::System::Int64 LIHIGBNOCGN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_LIHIGBNOCGN_OFFSET))(this);
		}

		::System::Single KGGCBNJIGNP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_KGGCBNJIGNP_OFFSET))(this);
		}

		::System::UInt16 IJNNDKCPNDH()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_IJNNDKCPNDH_OFFSET))(this);
		}

		::System::UInt16 FMNKCKACGLK()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_FMNKCKACGLK_OFFSET))(this);
		}

		::System::UInt32 NNKGLICBMJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_NNKGLICBMJH_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 AGJMIJEOPHJ()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_AGJMIJEOPHJ_OFFSET))(this);
		}

		::System::UInt64 CNEEIMKFBJI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_CNEEIMKFBJI_OFFSET))(this);
		}

		::System::Void GDPGDJNDPFK(::ECPDFJJNDBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_GDPGDJNDPFK_OFFSET))(this, a1);
		}

		::Il2CppArray<::NALGGFHJEBB*>* LBLLCBMJJHD(::ECPDFJJNDBI* a1)
		{
			return ((::Il2CppArray<::NALGGFHJEBB*>*(*)(::PVOID, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + NOCDFBMJDIG_LBLLCBMJJHD_OFFSET))(this, a1);
		}

	};
