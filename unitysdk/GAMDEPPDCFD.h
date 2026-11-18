#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMJMFHEIOKF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAMDEPPDCFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD0200)

inline static constexpr unsigned int GAMDEPPDCFD_TypeDefinitionIndex = 50269;

class GAMDEPPDCFD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* AKBJMFGBNPJ; // 0x10
	::System::Collections::Generic::List_1<::FMJMFHEIOKF*>* BBDFHCNLBIK; // 0x18
	::System::Int32 ILOJFPNKJII; // 0x20
	::System::Int32 ANNAENDJPBH; // 0x24

	::System::Void _ctor(::System::Int32 OHOGDOMNHNK, ::System::Int32 HKHHHJHCGKL, ::System::Collections::Generic::List_1<::FMJMFHEIOKF*>* OBAMMMIABIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::FMJMFHEIOKF*>*))((::PBYTE)hIl2Cpp + GAMDEPPDCFD__CTOR_OFFSET))(this, OHOGDOMNHNK, HKHHHJHCGKL, OBAMMMIABIK);
	}
};
