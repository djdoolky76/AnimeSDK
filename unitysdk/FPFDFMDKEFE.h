#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KABNJHEPGNP;
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define FPFDFMDKEFE_EHCFEPIEBBM_OFFSET UNITYSDK_OFFSET(0x179C2A00)
#define FPFDFMDKEFE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x179C2910)
#define FPFDFMDKEFE_ONLGPLECKIE_OFFSET UNITYSDK_OFFSET(0x179C2D30)
#define FPFDFMDKEFE__CTOR_OFFSET UNITYSDK_OFFSET(0x179C29F0)

inline static constexpr unsigned int FPFDFMDKEFE_TypeDefinitionIndex = 43252;

class FPFDFMDKEFE : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int64>* BIMPNEDLAED; // 0x88
	::LJHFMILANJA_1<::System::Int32>* AMCDAOJKFNF; // 0x90
	::LJHFMILANJA_1<::System::UInt32>* MDBHMJAHEOC; // 0x98
	::LJHFMILANJA_1<::System::Int32>* GCBBLCHMMKC; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDFMDKEFE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDFMDKEFE_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void EHCFEPIEBBM(::KABNJHEPGNP* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::KABNJHEPGNP*))((::PBYTE)hIl2Cpp + FPFDFMDKEFE_EHCFEPIEBBM_OFFSET))(this, MECOFDHMKEB);
	}

	::System::String* ONLGPLECKIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFDFMDKEFE_ONLGPLECKIE_OFFSET))(this);
	}
};
