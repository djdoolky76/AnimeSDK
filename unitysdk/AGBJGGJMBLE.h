#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBEJCKOGGMB;
class MHNMKCKALOP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGBJGGJMBLE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DC78150)
#define AGBJGGJMBLE_BCCEHJALPHK_OFFSET UNITYSDK_OFFSET(0x1DC78080)
#define AGBJGGJMBLE_LLBHFGLJEAK_OFFSET UNITYSDK_OFFSET(0x1DC78550)
#define AGBJGGJMBLE_MHGHOCKAJAI_OFFSET UNITYSDK_OFFSET(0x1DC780C0)
#define AGBJGGJMBLE_OLNLNPEEMID_OFFSET UNITYSDK_OFFSET(0x1DC78350)
#define AGBJGGJMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC77FF0)

inline static constexpr unsigned int AGBJGGJMBLE_TypeDefinitionIndex = 94063;

class AGBJGGJMBLE : public ::System::Object
{
public:
	// static const ::System::Int32 ODFCKJOIKBD = 0x5; // 0x0
	::System::Collections::Generic::List_1<::MBEJCKOGGMB*>* ANOBEINIMDD; // 0x10
	::MHNMKCKALOP* HMPEEAAAGHE; // 0x18
	::System::Int32 MAIKGFOELPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBJGGJMBLE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MBEJCKOGGMB*>* BCCEHJALPHK()
	{
		return ((::System::Collections::Generic::List_1<::MBEJCKOGGMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBJGGJMBLE_BCCEHJALPHK_OFFSET))(this);
	}

	::MBEJCKOGGMB* MHGHOCKAJAI()
	{
		return ((::MBEJCKOGGMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBJGGJMBLE_MHGHOCKAJAI_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MHNMKCKALOP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::MHNMKCKALOP*))((::PBYTE)hIl2Cpp + AGBJGGJMBLE_BBOMJDBNHIC_OFFSET))(this, GEEHGDABNJF);
	}

	::MBEJCKOGGMB* OLNLNPEEMID(::System::UInt32 KOEKPIMEGEE)
	{
		return ((::MBEJCKOGGMB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGBJGGJMBLE_OLNLNPEEMID_OFFSET))(this, KOEKPIMEGEE);
	}

	::MBEJCKOGGMB* LLBHFGLJEAK()
	{
		return ((::MBEJCKOGGMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBJGGJMBLE_LLBHFGLJEAK_OFFSET))(this);
	}
};
