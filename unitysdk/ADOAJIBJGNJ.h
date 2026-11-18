#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class AGJFDPBLDDF;
namespace System { class Object; }

#define ADOAJIBJGNJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16FD7370)
#define ADOAJIBJGNJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16FD7110)
#define ADOAJIBJGNJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16FD72C0)
#define ADOAJIBJGNJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16FD7230)
#define ADOAJIBJGNJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16FD6F30)
#define ADOAJIBJGNJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD7160)
#define ADOAJIBJGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD71E0)

inline static constexpr unsigned int ADOAJIBJGNJ_TypeDefinitionIndex = 60810;

class ADOAJIBJGNJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x11; // 0x0
	::Il2CppArray<::System::Object*>* MFDGOMGEGKI; // 0x48
	::AGJFDPBLDDF* NBNFLKHKAOH; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADOAJIBJGNJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::ADOAJIBJGNJ* JFDOOELFAOA()
	{
		return ((::ADOAJIBJGNJ*(*)())((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_JFDOOELFAOA_OFFSET))();
	}

	::ADOAJIBJGNJ* BBOMJDBNHIC(::System::Single IAPDECBJNKB)
	{
		return ((::ADOAJIBJGNJ*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADOAJIBJGNJ_BBOMJDBNHIC_OFFSET))(this, IAPDECBJNKB);
	}
};
