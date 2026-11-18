#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPFHFOLBFF.h"
#include "unitysdk/HDGDGHMDJLK.h"

class BOLBGEHPABN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBJMLHDPEKK_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x199F2120)
#define CBJMLHDPEKK_HANILGMNJFL_OFFSET UNITYSDK_OFFSET(0x199F2190)
#define CBJMLHDPEKK__CTOR_OFFSET UNITYSDK_OFFSET(0x199F2180)

inline static constexpr unsigned int CBJMLHDPEKK_TypeDefinitionIndex = 88250;

class CBJMLHDPEKK : public ::HDGDGHMDJLK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BOLBGEHPABN*>* KCINBMMHHCJ; // 0x50
	::System::UInt32 LCPMIFINCCM; // 0x58
	::DCPFHFOLBFF KKLHGHCCNNE; // 0x5C
	::System::UInt32 IJKDBJPIBJL; // 0x60
	::System::UInt32 PJNJKBDKCEK; // 0x64
	::System::Boolean EMEJDLGDBOH; // 0x68
	::System::Byte _padding0[0x3];
	::System::Int32 IEEHIFLAJFL; // 0x6C
	::System::UInt32 PKGFLFLBFLE; // 0x70
	::System::Single BGFPKJFJENP; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJMLHDPEKK__CTOR_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJMLHDPEKK_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Single HANILGMNJFL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJMLHDPEKK_HANILGMNJFL_OFFSET))(this);
	}
};
