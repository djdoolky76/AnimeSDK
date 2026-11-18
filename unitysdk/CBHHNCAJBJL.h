#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBHHNCAJBJL_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x10E2F040)
#define CBHHNCAJBJL_HBBHCJKGGFE_OFFSET UNITYSDK_OFFSET(0x10E2E680)
#define CBHHNCAJBJL_NNCCEPFGIJG_OFFSET UNITYSDK_OFFSET(0x10E2F190)
#define CBHHNCAJBJL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10E2F080)
#define CBHHNCAJBJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10E2E180)
#define CBHHNCAJBJL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2E670)

inline static constexpr unsigned int CBHHNCAJBJL_TypeDefinitionIndex = 58574;

class CBHHNCAJBJL : public ::System::Object
{
public:
	// static const ::System::Int32 LDJADIELLOL = 0xFA1; // 0x0
	// static const ::System::String* ANMLPIGJJHL; // 0x0
	// static const ::System::Int32 GJECLIKJBID = 0xFA2; // 0x0
	// static const ::System::String* HOCCNOMGJBH; // 0x0
	::System::String* GDLOCGDAJGL; // 0x10
	::System::String* FAENPLDJJAD; // 0x18
	::System::String* HCBAMNOOIDI; // 0x20
	::System::String* IHJHFNBDLFI; // 0x28
	::MiHoYo::SDK::JSONNode* HJABPGHALKF; // 0x30
	::System::String* OHFEKHPOCEE; // 0x38
	::System::String* FNIOPKPHDEH; // 0x40
	::System::String* EKPAFIKMOJD; // 0x48
	::System::String* IBFOMCPICMN; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OBCPEDFNOKI; // 0x58
	::System::String* GCFFLFMDNMN; // 0x60
	::MiHoYo::SDK::JSONNode* BEOPAOIEPOO; // 0x68
	::System::String* PPNILBCJLAP; // 0x70
	::System::String* DBOCADCEBGI; // 0x78
	::System::Int32 ECIMIOPLFAJ; // 0x80
	::System::Boolean EPGINNDDLIF; // 0x84
	::System::Boolean NFJIDKBNIKP; // 0x85
	::System::Boolean JIPGFIDAHLN; // 0x86
	::System::Boolean OMCIOBNJJLE; // 0x87
	::System::Int32 IMHFHJABFGC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL_TOSTRING_OFFSET))(this);
	}

	::System::Void HBBHCJKGGFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL_HBBHCJKGGFE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void NNCCEPFGIJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHHNCAJBJL_NNCCEPFGIJG_OFFSET))(this);
	}
};
