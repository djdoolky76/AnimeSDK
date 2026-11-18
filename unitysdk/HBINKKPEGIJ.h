#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/System/Nullable_1.h"

#define HBINKKPEGIJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14931AB0)
#define HBINKKPEGIJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14931C20)
#define HBINKKPEGIJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14931B90)
#define HBINKKPEGIJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14931A60)
#define HBINKKPEGIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14931B00)
#define HBINKKPEGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14931B80)

inline static constexpr unsigned int HBINKKPEGIJ_TypeDefinitionIndex = 58110;

class HBINKKPEGIJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x99; // 0x0
	::System::Boolean JMMCKBDJACJ; // 0x48
	::System::Boolean CHEPHJHNANI; // 0x49
	::System::Boolean IDIFCBGEBNM; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Nullable_1<::System::Single> NEIDGODMHHP; // 0x4C
	::System::Nullable_1<::System::Single> FKNDJFAJBIA; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBINKKPEGIJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBINKKPEGIJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBINKKPEGIJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBINKKPEGIJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBINKKPEGIJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::HBINKKPEGIJ* JFDOOELFAOA()
	{
		return ((::HBINKKPEGIJ*(*)())((::PBYTE)hIl2Cpp + HBINKKPEGIJ_JFDOOELFAOA_OFFSET))();
	}
};
