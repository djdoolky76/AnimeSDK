#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPFHFOLBFF.h"
#include "unitysdk/KHCHJCAIPPF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFHBPHGMCFP_OBKININKAGP_OFFSET UNITYSDK_OFFSET(0x1994D790)
#define KFHBPHGMCFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1994D5F0)

inline static constexpr unsigned int KFHBPHGMCFP_TypeDefinitionIndex = 68013;

class KFHBPHGMCFP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* EOCPMHAENLO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHCHJCAIPPF>* ALMBLBGAIFF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PMJLNMBLELI; // 0x20
	::System::Int32 IBPGPKFLKEC; // 0x28
	::System::Int32 PMCNDKMMFDG; // 0x2C
	::System::UInt32 PJNJKBDKCEK; // 0x30
	::System::Single BGFPKJFJENP; // 0x34
	::System::Single NIDGINKEALN; // 0x38
	::System::Int32 LCPMIFINCCM; // 0x3C
	::System::Boolean DBJNPECLNLC; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 PKGFLFLBFLE; // 0x44
	::System::Single DGMIIHAJAJE; // 0x48
	::DCPFHFOLBFF KKLHGHCCNNE; // 0x4C
	::System::Int32 PMFAEAHBHKL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHBPHGMCFP__CTOR_OFFSET))(this);
	}

	::System::Void OBKININKAGP(::System::Int32 OKGEKIAGBJA, ::System::UInt32 CCKGEOKCJMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFHBPHGMCFP_OBKININKAGP_OFFSET))(this, OKGEKIAGBJA, CCKGEOKCJMA);
	}
};
