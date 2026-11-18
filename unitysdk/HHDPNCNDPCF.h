#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class APEFOBNNCOA;
class DIGCFNHHBEA;
class OEAKPHDBPJM;
class PGELKINJIIN;

#define HHDPNCNDPCF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17E498F0)
#define HHDPNCNDPCF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17E49A60)
#define HHDPNCNDPCF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17E499D0)
#define HHDPNCNDPCF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17E49880)
#define HHDPNCNDPCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E49940)
#define HHDPNCNDPCF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E499C0)

inline static constexpr unsigned int HHDPNCNDPCF_TypeDefinitionIndex = 86579;

class HHDPNCNDPCF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x67; // 0x0
	::PGELKINJIIN* GPIMEFLDHAO; // 0x48
	::DIGCFNHHBEA* GADCFIDOPLF; // 0x50
	::APEFOBNNCOA* FMGDBGGOGNL; // 0x58
	::OEAKPHDBPJM* BBEBLEANOOO; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHDPNCNDPCF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDPNCNDPCF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDPNCNDPCF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDPNCNDPCF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDPNCNDPCF_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::HHDPNCNDPCF* JFDOOELFAOA()
	{
		return ((::HHDPNCNDPCF*(*)())((::PBYTE)hIl2Cpp + HHDPNCNDPCF_JFDOOELFAOA_OFFSET))();
	}
};
