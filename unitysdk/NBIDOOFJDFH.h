#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIAGAMOMOHO;
class IPFNGDNNODB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBIDOOFJDFH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x105A4A10)
#define NBIDOOFJDFH_DJMNMDONAFJ_OFFSET UNITYSDK_OFFSET(0x105A4B60)
#define NBIDOOFJDFH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x105A3FE0)
#define NBIDOOFJDFH_HMGLOLDBFEK_OFFSET UNITYSDK_OFFSET(0x105A46F0)
#define NBIDOOFJDFH_IGGNMANJPHA_OFFSET UNITYSDK_OFFSET(0x105A46E0)
#define NBIDOOFJDFH_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x105A3F40)
#define NBIDOOFJDFH_OKIIJBLIDCO_OFFSET UNITYSDK_OFFSET(0x105A4140)
#define NBIDOOFJDFH_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x105A3F50)
#define NBIDOOFJDFH__CTOR_OFFSET UNITYSDK_OFFSET(0x105A3F60)

inline static constexpr unsigned int NBIDOOFJDFH_TypeDefinitionIndex = 75327;

class NBIDOOFJDFH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* NHACNMHJILD; // 0x10
	::System::Boolean _KNHFHHEIPHJ_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 _MPMFPODFDNK_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIDOOFJDFH__CTOR_OFFSET))(this);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Boolean GLEJMKLOMBP(::System::Action* KLHOIOCCHMI, ::System::Action* LOJFLJJAKFJ, ::System::Action* OLBAKFLBNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_GLEJMKLOMBP_OFFSET))(this, KLHOIOCCHMI, LOJFLJJAKFJ, OLBAKFLBNIG);
	}

	::System::Void IGGNMANJPHA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_IGGNMANJPHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HMGLOLDBFEK(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::System::Void(*)(::PVOID, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_HMGLOLDBFEK_OFFSET))(this, BPGCPDLINPK);
	}

	::IPFNGDNNODB* OKIIJBLIDCO()
	{
		return ((::IPFNGDNNODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_OKIIJBLIDCO_OFFSET))(this);
	}

	static ::NBIDOOFJDFH* COKNIICCODC(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::NBIDOOFJDFH*(*)(::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_COKNIICCODC_OFFSET))(BPGCPDLINPK);
	}

	::System::Void DJMNMDONAFJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIDOOFJDFH_DJMNMDONAFJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
