#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define ECALPAICMNI_IMLEMBMCBKA_OFFSET UNITYSDK_OFFSET(0x148C50C0)
#define ECALPAICMNI_JABELBKMELB_OFFSET UNITYSDK_OFFSET(0x148C4FB0)
#define ECALPAICMNI__CTOR_OFFSET UNITYSDK_OFFSET(0x148C4F00)

inline static constexpr unsigned int ECALPAICMNI_TypeDefinitionIndex = 80824;

class ECALPAICMNI : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::System::Int32, ::System::Object*>* BBGIJLDJIDF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECALPAICMNI__CTOR_OFFSET))(this);
	}

	::System::Boolean JABELBKMELB(::System::Int32 BNLHPGHLKDK, ::System::Collections::Generic::List_1<::System::Object*>*& FLPABFMKLOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + ECALPAICMNI_JABELBKMELB_OFFSET))(this, BNLHPGHLKDK, FLPABFMKLOD);
	}

	::System::Void IMLEMBMCBKA(::System::Int32 BNLHPGHLKDK, ::System::Int32 EBCBFLDNFOC, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ECALPAICMNI_IMLEMBMCBKA_OFFSET))(this, BNLHPGHLKDK, EBCBFLDNFOC, HIAIKHDFCLN);
	}
};
