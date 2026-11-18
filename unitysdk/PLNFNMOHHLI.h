#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJHDNMKGLBJ;
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define PLNFNMOHHLI_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1D630810)
#define PLNFNMOHHLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D630490)
#define PLNFNMOHHLI_JFCBKONNLJN_OFFSET UNITYSDK_OFFSET(0x1D6305D0)
#define PLNFNMOHHLI_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1D6306D0)
#define PLNFNMOHHLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D630500)
#define PLNFNMOHHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D630480)

inline static constexpr unsigned int PLNFNMOHHLI_TypeDefinitionIndex = 65606;

class PLNFNMOHHLI : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::PLNFNMOHHLI*>** StaticGet_IDALCPMPBBG()
	{
		return (::System::Collections::Generic::Stack_1<::PLNFNMOHHLI*>**)Il2CppClass::FromTypeDefinitionIndex(PLNFNMOHHLI_TypeDefinitionIndex)->GetStaticField(0x4B2A0);
	}
	::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* MLBFDIDFLIB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNFNMOHHLI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLNFNMOHHLI__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNFNMOHHLI_DISPOSE_OFFSET))(this);
	}

	::System::Void JFCBKONNLJN(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* EAIPOAFJNNI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + PLNFNMOHHLI_JFCBKONNLJN_OFFSET))(this, EAIPOAFJNNI);
	}

	static ::System::Void MBKDOMFJFIG(::PLNFNMOHHLI*& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PLNFNMOHHLI*&))((::PBYTE)hIl2Cpp + PLNFNMOHHLI_MBKDOMFJFIG_OFFSET))(HBMGHPEPBNC);
	}

	static ::PLNFNMOHHLI* BBPCBEEHALC()
	{
		return ((::PLNFNMOHHLI*(*)())((::PBYTE)hIl2Cpp + PLNFNMOHHLI_BBPCBEEHALC_OFFSET))();
	}
};
