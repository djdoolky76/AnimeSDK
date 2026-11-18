#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define IEILCEFFNPB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A39B870)
#define IEILCEFFNPB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A39B3D0)
#define IEILCEFFNPB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A39BCC0)
#define IEILCEFFNPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39B8D0)

inline static constexpr unsigned int IEILCEFFNPB_TypeDefinitionIndex = 59576;

class IEILCEFFNPB : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* EJHGOKAMACC; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* EAFHEFDFBKF; // 0x30
	::AAMKEDEDHPD_1<::System::String*>* JHDIIIKHLCK; // 0x38
	::AAMKEDEDHPD_1<::System::Boolean>* DHJGGGAKEKK; // 0x40
	::AAMKEDEDHPD_1<::System::Boolean>* IONOBJBPJGJ; // 0x48
	::AAMKEDEDHPD_1<::System::Int32>* CNFDILMMJAJ; // 0x50
	::CPABOPKIGAL* BNEDIEDEPNH; // 0x58
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* JAECOIFDKFK; // 0x60
	::AAMKEDEDHPD_1<::System::Boolean>* LIOCECBIKBE; // 0x68
	::AAMKEDEDHPD_1<::System::Boolean>* PLINDPDMHKI; // 0x70
	::CPABOPKIGAL* IFHMMAEIDPN; // 0x78
	::HOFAIFGAHGJ* MFDNEPILCKF; // 0x80
	::AAMKEDEDHPD_1<::System::Int32>* CFBLELDAPPI; // 0x88
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* JOCCKOPGDDM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEILCEFFNPB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEILCEFFNPB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IEILCEFFNPB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEILCEFFNPB_GDEOPIBNOIN_OFFSET))(this);
	}
};
