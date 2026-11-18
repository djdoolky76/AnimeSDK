#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFLFFHNMCCG;
class LOGBFCNIJIE;
class NBCBDFCMEAK;
class NEADCLHFNIB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLIDAAPONPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18B55210)

inline static constexpr unsigned int MLIDAAPONPI_TypeDefinitionIndex = 42310;

class MLIDAAPONPI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::LOGBFCNIJIE*>*>* OMJEMGOAIDN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NEADCLHFNIB*>*>* PLNDDCEKMCI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::AFLFFHNMCCG*>*>* OFDGIFKEGAK; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NBCBDFCMEAK*>*>* GBFLHHLCEGP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIDAAPONPI__CTOR_OFFSET))(this);
	}
};
