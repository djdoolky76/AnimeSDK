#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICloudController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKPLPFKOMCL_DELFKOPBIGI_OFFSET UNITYSDK_OFFSET(0x17917E10)
#define KKPLPFKOMCL_HPKDACELBHF_OFFSET UNITYSDK_OFFSET(0x17917B20)
#define KKPLPFKOMCL_KIOKLHHNJCD_OFFSET UNITYSDK_OFFSET(0x17918100)
#define KKPLPFKOMCL_NBHEEFGANLF_OFFSET UNITYSDK_OFFSET(0x17918330)
#define KKPLPFKOMCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17917A90)

inline static constexpr unsigned int KKPLPFKOMCL_TypeDefinitionIndex = 72363;

class KKPLPFKOMCL : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>** StaticGet_ONLNKLLEPOE()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UICloudController*>**)Il2CppClass::FromTypeDefinitionIndex(KKPLPFKOMCL_TypeDefinitionIndex)->GetStaticField(0x4BDF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKPLPFKOMCL__CCTOR_OFFSET))();
	}

	static ::System::Void HPKDACELBHF(::MoleMole::UICloudController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + KKPLPFKOMCL_HPKDACELBHF_OFFSET))(NCIMBHDKIJM);
	}

	static ::System::Void DELFKOPBIGI(::MoleMole::UICloudController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + KKPLPFKOMCL_DELFKOPBIGI_OFFSET))(NCIMBHDKIJM);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* KIOKLHHNJCD()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + KKPLPFKOMCL_KIOKLHHNJCD_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>* NBHEEFGANLF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UICloudController*>*(*)())((::PBYTE)hIl2Cpp + KKPLPFKOMCL_NBHEEFGANLF_OFFSET))();
	}
};
