#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFBODEJFBE;
class HDLBHEAHABC;
class MFNPNNPLBAL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFFJBNKFEIF_HLJHOJKLDPN_OFFSET UNITYSDK_OFFSET(0xFD75AE0)
#define OFFJBNKFEIF_LINDKOBODOJ_OFFSET UNITYSDK_OFFSET(0xFD758C0)
#define OFFJBNKFEIF_NBAEJEJHOLD_OFFSET UNITYSDK_OFFSET(0xFD75850)

inline static constexpr unsigned int OFFJBNKFEIF_TypeDefinitionIndex = 92194;

class OFFJBNKFEIF : public ::System::Object
{
public:
	static ::System::Int32 NBAEJEJHOLD(::MFNPNNPLBAL* LJBPECKCCEA)
	{
		return ((::System::Int32(*)(::MFNPNNPLBAL*))((::PBYTE)hIl2Cpp + OFFJBNKFEIF_NBAEJEJHOLD_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Collections::Generic::List_1<::CHFBODEJFBE*>* LINDKOBODOJ(::HDLBHEAHABC* OHKFDELFGJF)
	{
		return ((::System::Collections::Generic::List_1<::CHFBODEJFBE*>*(*)(::HDLBHEAHABC*))((::PBYTE)hIl2Cpp + OFFJBNKFEIF_LINDKOBODOJ_OFFSET))(OHKFDELFGJF);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* HLJHOJKLDPN(::MFNPNNPLBAL* LJBPECKCCEA)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::MFNPNNPLBAL*))((::PBYTE)hIl2Cpp + OFFJBNKFEIF_HLJHOJKLDPN_OFFSET))(LJBPECKCCEA);
	}
};
