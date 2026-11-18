#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class NABDACPCILO;

#define JHODGDILCNN_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x13CBFA20)
#define JHODGDILCNN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13CBF830)
#define JHODGDILCNN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13CBFA40)
#define JHODGDILCNN_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x13CBFA30)
#define JHODGDILCNN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13CBFAC0)
#define JHODGDILCNN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13CBF900)
#define JHODGDILCNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CBF880)
#define JHODGDILCNN__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBFA00)

inline static constexpr unsigned int JHODGDILCNN_TypeDefinitionIndex = 62948;

class JHODGDILCNN : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x217; // 0x0
	::NABDACPCILO* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHODGDILCNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHODGDILCNN__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHODGDILCNN_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHODGDILCNN_ONCLEAN_OFFSET))(this);
	}

	::NABDACPCILO* BLIOCCCNKDK()
	{
		return ((::NABDACPCILO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHODGDILCNN_BLIOCCCNKDK_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::NABDACPCILO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NABDACPCILO*))((::PBYTE)hIl2Cpp + JHODGDILCNN_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::JHODGDILCNN* JFDOOELFAOA()
	{
		return ((::JHODGDILCNN*(*)())((::PBYTE)hIl2Cpp + JHODGDILCNN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHODGDILCNN_MEFBHFEOKGH_OFFSET))(this);
	}
};
