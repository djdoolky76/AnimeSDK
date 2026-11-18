#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/System/Object.h"

class MCAFEEEDDKJ;
class PHCAOEMIJPJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCCECIFCFIC_IIAGDECNBEE_1_OFFSET UNITYSDK_OFFSET(0x113D6260)
#define BCCECIFCFIC_IIAGDECNBEE_OFFSET UNITYSDK_OFFSET(0x113D5E90)
#define BCCECIFCFIC_LCAOEMJDBML_OFFSET UNITYSDK_OFFSET(0x113D5DC0)
#define BCCECIFCFIC__CTOR_OFFSET UNITYSDK_OFFSET(0x113D5C60)

inline static constexpr unsigned int BCCECIFCFIC_TypeDefinitionIndex = 83566;

class BCCECIFCFIC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::ANDNNFHEGDH, ::MCAFEEEDDKJ*>* LPDOCJIPGPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCCECIFCFIC__CTOR_OFFSET))(this);
	}

	::System::Boolean LCAOEMJDBML(::ANDNNFHEGDH& HICCEBKMHAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ANDNNFHEGDH&))((::PBYTE)hIl2Cpp + BCCECIFCFIC_LCAOEMJDBML_OFFSET))(this, HICCEBKMHAP);
	}

	::MCAFEEEDDKJ* IIAGDECNBEE(::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* NNJICKJJACL)
	{
		return ((::MCAFEEEDDKJ*(*)(::PVOID, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>*))((::PBYTE)hIl2Cpp + BCCECIFCFIC_IIAGDECNBEE_OFFSET))(this, NNJICKJJACL);
	}

	::MCAFEEEDDKJ* IIAGDECNBEE_1(::ANDNNFHEGDH& HICCEBKMHAP)
	{
		return ((::MCAFEEEDDKJ*(*)(::PVOID, ::ANDNNFHEGDH&))((::PBYTE)hIl2Cpp + BCCECIFCFIC_IIAGDECNBEE_1_OFFSET))(this, HICCEBKMHAP);
	}
};
