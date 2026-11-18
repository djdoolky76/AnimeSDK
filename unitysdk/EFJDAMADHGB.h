#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LENDJHOEABH.h"

class CGKMBHKOFKF;
class ELABNOEFDHI;
class GIDLDIANHJE;
namespace System { class Object; }
namespace System { class String; }

#define EFJDAMADHGB_BFHBKMPHBAL_OFFSET UNITYSDK_OFFSET(0x11A6F580)
#define EFJDAMADHGB_KKAPHBMBNII_OFFSET UNITYSDK_OFFSET(0x11A6F510)
#define EFJDAMADHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6F720)

inline static constexpr unsigned int EFJDAMADHGB_TypeDefinitionIndex = 54525;

class EFJDAMADHGB : public ::LENDJHOEABH
{
public:
	::GIDLDIANHJE* HMMMOCJAEOA; // 0x20
	::System::Double AJACGGGKMOA; // 0x28
	::System::Double HPKIFBAGNJE; // 0x30
	::System::Double KJDMIDNIMNF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJDAMADHGB__CTOR_OFFSET))(this);
	}

	::System::Object* KKAPHBMBNII(::System::String* AADJPMHPNAH, ::System::Int32 MBNEAPBPOAK, ::CGKMBHKOFKF* FFNKDGGHBPP)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::CGKMBHKOFKF*))((::PBYTE)hIl2Cpp + EFJDAMADHGB_KKAPHBMBNII_OFFSET))(this, AADJPMHPNAH, MBNEAPBPOAK, FFNKDGGHBPP);
	}

	::ELABNOEFDHI* BFHBKMPHBAL(::System::String* HIAIKHDFCLN)
	{
		return ((::ELABNOEFDHI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFJDAMADHGB_BFHBKMPHBAL_OFFSET))(this, HIAIKHDFCLN);
	}
};
