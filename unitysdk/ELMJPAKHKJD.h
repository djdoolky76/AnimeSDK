#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMDKGMMCDNE.h"
#include "unitysdk/System/Object.h"

class LIPHBAKAIHO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELMJPAKHKJD_EPNKELIBJMG_OFFSET UNITYSDK_OFFSET(0x10F43BC0)
#define ELMJPAKHKJD_FGOJFPKLMBA_OFFSET UNITYSDK_OFFSET(0x10F43980)
#define ELMJPAKHKJD_KINNNNOKOIB_OFFSET UNITYSDK_OFFSET(0x10F43A00)
#define ELMJPAKHKJD_MKHHFAIJIIO_OFFSET UNITYSDK_OFFSET(0x10F43910)
#define ELMJPAKHKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F43870)

inline static constexpr unsigned int ELMJPAKHKJD_TypeDefinitionIndex = 43201;

class ELMJPAKHKJD : public ::System::Object
{
public:
	// static const ::System::String* APJCDIKEAFD; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* IHLGNJOLGOB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMJPAKHKJD__CTOR_OFFSET))(this);
	}

	::OMDKGMMCDNE MKHHFAIJIIO()
	{
		return ((::OMDKGMMCDNE(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_MKHHFAIJIIO_OFFSET))(this);
	}

	::System::Void FGOJFPKLMBA(::OMDKGMMCDNE& OBNIAHNMHPF, ::LIPHBAKAIHO*& PPDBLNGGLIH)
	{
		return ((::System::Void(*)(::PVOID, ::OMDKGMMCDNE&, ::LIPHBAKAIHO*&))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_FGOJFPKLMBA_OFFSET))(this, OBNIAHNMHPF, PPDBLNGGLIH);
	}

	::System::Boolean KINNNNOKOIB(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_KINNNNOKOIB_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean EPNKELIBJMG(::System::Int32 DKOFFFNEFJC, ::OMDKGMMCDNE OBNIAHNMHPF, ::System::String* AELLPLBJELA, ::LIPHBAKAIHO* PPDBLNGGLIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OMDKGMMCDNE, ::System::String*, ::LIPHBAKAIHO*))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_EPNKELIBJMG_OFFSET))(this, DKOFFFNEFJC, OBNIAHNMHPF, AELLPLBJELA, PPDBLNGGLIH);
	}
};
